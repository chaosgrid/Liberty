#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced840);
CLANG_FORWARD_PROC_SYMBOL(public_6cedc30);

#define public_6cedc21 _public_6cedc21

PROC_DECLARE(0x6cedc00, internal_6cedc00, public_6cedc00);
extern "C" NAKED register_t __cdecl internal_6cedc00()
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
        je public_6cedc21
        push edi
        mov ecx, esi
        call public_6cedc30
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6cedc21 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cedc00)
    }
}

#undef public_6cedc21
