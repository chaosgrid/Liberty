#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6332010);

#define public_6332023 _public_6332023
#define public_6332032 _public_6332032
#define public_633203e _public_633203e

PROC_DECLARE(0x6332010, internal_6332010, public_6332010);
extern "C" NAKED register_t __cdecl internal_6332010()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_633203e
        push esi
        push edi
        public_6332023 : nop
        test eax, eax
        je public_6332032
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        public_6332032 : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_6332023
        pop edi
        pop esi
        public_633203e : nop
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6332010)
    }
}

#undef public_6332023
#undef public_6332032
#undef public_633203e
