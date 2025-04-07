#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4f8c00 _public_4f8c00
#define public_4f8c12 _public_4f8c12

PROC_DECLARE(0x4f8be0, internal_4f8be0, public_4f8be0);
extern "C" NAKED register_t __cdecl internal_4f8be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x7C]
        and cl, 0xFE
        push 0x26
        mov byte ptr ds : [esi+0x7C], cl
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_4f8c00
        xor al, al
        pop esi
        ret 4
        public_4f8c00 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        test eax, eax
        je public_4f8c12
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        public_4f8c12 : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f8be0)
    }
}

#undef public_4f8c00
#undef public_4f8c12
