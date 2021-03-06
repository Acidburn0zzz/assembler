#ifndef PARSER_H
#define PARSER_H

struct operation {
        char cond[4];
        char cmd[8];
        char arg0[32];
        char arg1[32];
        char arg2[32];
};

void dump_operation(struct operation *op);
struct operation *parse_code(const char *code);

#endif // PARSER_H
