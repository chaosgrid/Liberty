#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221c00);
CLANG_FORWARD_PROC_SYMBOL(public_6222af0);

#define public_6221c13 _public_6221c13
#define public_6221c25 _public_6221c25

PROC_DECLARE(0x6221c00, internal_6221c00, public_6221c00);
extern "C" NAKED register_t __cdecl internal_6221c00()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6221c25
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6221c13 : nop
        push ebx
        push esi
        call public_6222af0
        add esp, 8
        add esi, 0x10
        dec edi
        jne public_6221c13
        pop esi
        pop ebx
        public_6221c25 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6221c00)
    }
}

#undef public_6221c13
#undef public_6221c25
