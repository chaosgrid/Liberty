#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced840);
CLANG_FORWARD_PROC_SYMBOL(public_6ced9d0);

#define public_6ced9c1 _public_6ced9c1

PROC_DECLARE(0x6ced9a0, internal_6ced9a0, public_6ced9a0);
extern "C" NAKED register_t __cdecl internal_6ced9a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_6ced840
        test al, al
        je public_6ced9c1
        push edi
        mov ecx, esi
        call public_6ced9d0
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6ced9c1 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ced9a0)
    }
}

#undef public_6ced9c1
