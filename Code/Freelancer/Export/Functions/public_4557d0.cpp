#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_44f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_4557d0);

#define public_4557f7 _public_4557f7
#define public_455821 _public_455821
#define public_45583f _public_45583f

PROC_DECLARE(0x4557d0, internal_4557d0, public_4557d0);
extern "C" NAKED register_t __cdecl internal_4557d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [public_673350], 0
        mov al, byte ptr ds : [esi+0x104]
        test al, al
        je public_45583f
        mov ecx, dword ptr ds : [esi+0x108]
        test ecx, ecx
        je public_4557f7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_4557f7 : nop
        mov al, byte ptr ds : [esi+6]
        test al, al
        mov dword ptr ds : [esi+0x108], 0
        je public_455821
        push 0x40400000
        push 0x3F800000
        call public_41a0f0
        push 0
        call public_41dda0
        add esp, 0xC
        public_455821 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ds : [esi+0xB4]
        shl ecx, 6
        mov ecx, dword ptr ds : [ecx+edx]
        call public_44f9d0
        mov byte ptr ds : [esi+0x104], 0
        public_45583f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4557d0)
    }
}

#undef public_4557f7
#undef public_455821
#undef public_45583f
