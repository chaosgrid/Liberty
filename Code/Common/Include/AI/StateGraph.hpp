#pragma once

class IStateGraph;
namespace pub
{
    namespace StateGraph
    {
        enum Type
        {
            TYPE_STANDARD = 0
        };

        COMMON_DEC int get_state_graph(int, Type);
        COMMON_DEC int get_state_graph(const char*, Type);
        COMMON_DEC const IStateGraph* get_state_graph_internal(int);
        COMMON_DEC void refresh_state_graph();
    };
}