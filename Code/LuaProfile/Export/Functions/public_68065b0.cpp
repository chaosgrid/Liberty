#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68065b0);

#define public_68065bd _public_68065bd
#define public_68065c3 _public_68065c3

PROC_DECLARE(0x68065b0, internal_68065b0, public_68065b0);
extern "C" NAKED register_t __cdecl internal_68065b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, 8
        cmp ecx, eax
        jb public_68065c3
        public_68065bd : nop
        shl eax, 1
        cmp eax, ecx
        jbe public_68065bd
        public_68065c3 : nop
        ret 
        UNREACHABLE_TRAP(0x68065b0)
    }
}

#undef public_68065bd
#undef public_68065c3
