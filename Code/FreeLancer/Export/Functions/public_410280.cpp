#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410280);

#define public_4102b9 _public_4102b9

PROC_DECLARE(0x410280, internal_410280, public_410280);
extern "C" NAKED register_t __cdecl internal_410280()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_4102b9
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, eax
        shr ecx, 0x10
        mov edx, eax
        shr edx, 8
        mov byte ptr ds : [esi], cl
        mov byte ptr ds : [esi+1], dl
        mov byte ptr ds : [esi+2], al
        public_4102b9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x410280)
    }
}

#undef public_4102b9
