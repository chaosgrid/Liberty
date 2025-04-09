#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_51b480);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_51e689 _public_51e689
#define public_51e6ab _public_51e6ab
#define public_51e6ea _public_51e6ea
#define public_51e721 _public_51e721

PROC_DECLARE(0x51e660, internal_51e660, public_51e660);
extern "C" NAKED register_t __cdecl internal_51e660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xF8]
        test eax, eax
        je public_51e6ea
        mov ecx, dword ptr ds : [esi+0x104]
        cmp ecx, 0xFFFFFFFF
        je public_51e689
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov dword ptr ds : [esi+0x104], 0xFFFFFFFF
        public_51e689 : nop
        mov ecx, dword ptr ds : [esi+0x108]
        cmp ecx, 0xFFFFFFFF
        je public_51e6ab
        mov eax, dword ptr ds : [esi+0xF8]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        mov dword ptr ds : [esi+0x108], 0xFFFFFFFF
        public_51e6ab : nop
        mov eax, dword ptr ds : [esi+0xF8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xF8], 0
        mov dword ptr ds : [esi+0x10C], 0
        mov byte ptr ds : [esi+0x110], 0
        mov ecx, dword ptr ds : [esi+0x100]
        mov eax, dword ptr ds : [ecx+8]
        add ecx, 8
        test eax, eax
        je public_51e6ea
        push 0
        call dword ptr ds : [public_5c62a8]
        public_51e6ea : nop
        mov ecx, esi
        call public_51b480
        call public_54baf0
        test eax, eax
        je public_51e721
        mov ecx, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [public_67ecd0]
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 5
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        call dword ptr ds : [esi+0xE4]
        public_51e721 : nop
        push 0x40400000
        push 0
        call public_41a0f0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51e660)
    }
}

#undef public_51e689
#undef public_51e6ab
#undef public_51e6ea
#undef public_51e721
