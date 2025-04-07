#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6247010);
CLANG_FORWARD_PROC_SYMBOL(public_6247110);

#define public_6247023 _public_6247023
#define public_624703f _public_624703f

PROC_DECLARE(0x6247010, internal_6247010, public_6247010);
extern "C" NAKED register_t __cdecl internal_6247010()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_624703f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6247023 : nop
        push esi
        push edi
        call public_6247110
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6247023
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_624703f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6247010)
    }
}

#undef public_6247023
#undef public_624703f
