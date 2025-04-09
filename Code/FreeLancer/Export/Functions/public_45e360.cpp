#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e360);

#define public_45e3ad _public_45e3ad

PROC_DECLARE(0x45e360, internal_45e360, public_45e360);
extern "C" NAKED register_t __cdecl internal_45e360()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67ecd4]
        xor eax, eax
        sub esp, 0xC
        cmp ecx, eax
        je public_45e3ad
        mov dx, word ptr ds : [public_673344]
        mov word ptr ss : [esp], dx
        movzx edx, word ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [public_66da34]
        push 0xFFFFFFFF
        push edx
        mov byte ptr ss : [esp+0xA], al
        mov byte ptr ss : [esp+0xB], al
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push 8
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        public_45e3ad : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x45e360)
    }
}

#undef public_45e3ad
