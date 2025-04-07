#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c710);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620c729 _public_620c729
#define public_620c745 _public_620c745
#define public_620c74e _public_620c74e

PROC_DECLARE(0x620c710, internal_620c710, public_620c710);
extern "C" NAKED register_t __cdecl internal_620c710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        shl eax, 3
        xor ebx, ebx
        test eax, eax
        je public_620c729
        push eax
        call public_624612c
        add esp, 4
        mov ebx, eax
        public_620c729 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_620c74e
        test ebx, ebx
        je public_620c745
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        add ecx, ecx
        mov esi, eax
        mov edi, ebx
        rep movsd
        pop edi
        pop esi
        public_620c745 : nop
        push eax
        call public_62460e0
        add esp, 4
        public_620c74e : nop
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620c710)
    }
}

#undef public_620c729
#undef public_620c745
#undef public_620c74e
