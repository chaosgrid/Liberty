#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dbc02);

#define public_65dbc1f _public_65dbc1f

PROC_DECLARE(0x65dbc02, internal_65dbc02, public_65dbc02);
extern "C" NAKED register_t __cdecl internal_65dbc02()
{
    __asm
    {
        push 0x140
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1060]
        test eax, eax
        mov dword ptr ds : [public_65e7918], eax
        jne public_65dbc1f
        ret 
        public_65dbc1f : nop
        mov ecx, dword ptr ss : [esp+4]
        and dword ptr ds : [public_65e7910], 0
        and dword ptr ds : [public_65e7914], 0
        push 1
        mov dword ptr ds : [public_65e790c], eax
        mov dword ptr ds : [public_65e791c], ecx
        mov dword ptr ds : [public_65e7904], 0x10
        pop eax
        ret 
        UNREACHABLE_TRAP(0x65dbc02)
    }
}

#undef public_65dbc1f
