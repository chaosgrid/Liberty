#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221280);
CLANG_FORWARD_PROC_SYMBOL(public_6222af0);

#define public_6221293 _public_6221293
#define public_62212af _public_62212af

PROC_DECLARE(0x6221280, internal_6221280, public_6221280);
extern "C" NAKED register_t __cdecl internal_6221280()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_62212af
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6221293 : nop
        push esi
        push edi
        call public_6222af0
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6221293
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_62212af : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6221280)
    }
}

#undef public_6221293
#undef public_62212af
