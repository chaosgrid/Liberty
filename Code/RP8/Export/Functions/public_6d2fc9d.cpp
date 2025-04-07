#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);

#define public_6d2fcad _public_6d2fcad
#define public_6d2fcbc _public_6d2fcbc

PROC_DECLARE(0x6d2fc9d, internal_6d2fc9d, public_6d2fc9d);
extern "C" NAKED register_t __cdecl internal_6d2fc9d()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_6d2fcbc
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[eax+1]
        public_6d2fcad : nop
        mov ecx, esi
        call dword ptr ss : [esp+0x18]
        add esi, dword ptr ss : [esp+0x10]
        dec edi
        jne public_6d2fcad
        pop edi
        pop esi
        public_6d2fcbc : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6d2fc9d)
    }
}

#undef public_6d2fcad
#undef public_6d2fcbc
