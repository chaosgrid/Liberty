#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230960);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6230969 _public_6230969

PROC_DECLARE(0x6230960, internal_6230960, public_6230960);
extern "C" NAKED register_t __cdecl internal_6230960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_6230969
        ret 
        public_6230969 : nop
        mov dword ptr ss : [esp+4], eax
        jmp public_624612c
        UNREACHABLE_TRAP(0x6230960)
    }
}

#undef public_6230969
