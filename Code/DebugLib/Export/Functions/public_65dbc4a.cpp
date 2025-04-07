#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dbc4a);

#define public_65dbc5a _public_65dbc5a
#define public_65dbc72 _public_65dbc72
#define public_65dbc74 _public_65dbc74

PROC_DECLARE(0x65dbc4a, internal_65dbc4a, public_65dbc4a);
extern "C" NAKED register_t __cdecl internal_65dbc4a()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e7914]
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [public_65e7918]
        lea ecx, ds:[eax+ecx*4]
        public_65dbc5a : nop
        cmp eax, ecx
        jae public_65dbc72
        mov edx, dword ptr ss : [esp+4]
        sub edx, dword ptr ds : [eax+0xC]
        cmp edx, 0x100000
        jb public_65dbc74
        add eax, 0x14
        jmp public_65dbc5a
        public_65dbc72 : nop
        xor eax, eax
        public_65dbc74 : nop
        ret 
        UNREACHABLE_TRAP(0x65dbc4a)
    }
}

#undef public_65dbc5a
#undef public_65dbc72
#undef public_65dbc74
