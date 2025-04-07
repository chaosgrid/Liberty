#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4425e);
CLANG_FORWARD_PROC_SYMBOL(public_6d48472);

#define public_6d4429c _public_6d4429c
#define public_6d4429e _public_6d4429e
#define public_6d442af _public_6d442af

PROC_DECLARE(0x6d4425e, internal_6d4425e, public_6d4425e);
extern "C" NAKED register_t __cdecl internal_6d4425e()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        imul esi, dword ptr ss : [esp+0x10]
        push esi
        push dword ptr ss : [esp+0xC]
        call public_6d48472
        mov edx, eax
        pop ecx
        xor eax, eax
        test edx, edx
        pop ecx
        je public_6d442af
        cmp esi, 0x8000
        push edi
        mov edi, edx
        jbe public_6d4429c
        mov ecx, 0x2000
        rep stosd
        lea ecx, ds:[esi-0x8000]
        lea edi, ds:[edx+0x8000]
        jmp public_6d4429e
        public_6d4429c : nop
        mov ecx, esi
        public_6d4429e : nop
        mov esi, ecx
        shr ecx, 2
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        mov eax, edx
        pop edi
        public_6d442af : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4425e)
    }
}

#undef public_6d4429c
#undef public_6d4429e
#undef public_6d442af
