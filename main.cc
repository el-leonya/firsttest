#include <drogon/drogon.h>
#include <trantor/utils/Logger.h>

int main() {
    using Callback = std::function<void (const drogon::HttpResponsePtr &)> ;

    drogon::app().registerHandler("/", [](const drogon::HttpRequestPtr& req, Callback &&callback)
    {
        auto resp = drogon::HttpResponse::newHttpResponse();
        resp->setBody("Hello World");
        callback(resp);
    });

    LOG_INFO << "Server running on 127.0.0.1:8848";
    drogon::app().addListener("127.0.0.1", 8848).run();

    return 0;
}