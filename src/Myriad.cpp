#include "Common/Args.hxx"
#include "Common/Plog/Log.h"

int main(int argc, char **argv) {

    plog::init(plog::debug, "logs/myriad.log");

    args::ArgumentParser parser("This is a test program.", "This goes after the options.");
    args::HelpFlag help(parser, "help", "Display this help menu", {'h', "help"});

    args::Flag server(parser, "server", "Runs Myriad as a server", {'s', "server"});

    try {
        // Args is weird
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincompatible-pointer-types-discards-qualifiers"
        parser.ParseCLI(argc, argv);
#pragma clang diagnostic pop
    } catch (args::Help) {
        LOG(plog::info) << parser;
        return 0;
    } catch (args::ParseError &e) {
        LOG(plog::error) << e.what() << std::endl;
        LOG(plog::error) << parser;
        return 1;
    }

    if (server) {

    } else {

    }

    return 0;
}
