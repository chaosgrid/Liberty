#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244770);
CLANG_FORWARD_PROC_SYMBOL(public_6244aa0);

#define public_6244783 _public_6244783
#define public_624479f _public_624479f

PROC_DECLARE(0x6244770, internal_6244770, public_6244770);
extern "C" NAKED register_t __cdecl internal_6244770()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_624479f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6244783 : nop
        push esi
        push edi
        call public_6244aa0
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_6244783
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_624479f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6244770)
    }
}

#undef public_6244783
#undef public_624479f
