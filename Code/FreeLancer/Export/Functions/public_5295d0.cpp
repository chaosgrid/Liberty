#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5295d0);

#define public_5295ee _public_5295ee
#define public_529609 _public_529609
#define public_529624 _public_529624
#define public_52963f _public_52963f
#define public_52965a _public_52965a
#define public_529675 _public_529675
#define public_529690 _public_529690
#define public_5296ab _public_5296ab
#define public_5296c6 _public_5296c6

PROC_DECLARE(0x5295d0, internal_5295d0, public_5295d0);
extern "C" NAKED register_t __cdecl internal_5295d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x38]
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_5295ee
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x38], edi
        public_5295ee : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x38], edi
        je public_529609
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x3C], edi
        public_529609 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x3C], edi
        je public_529624
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x40], edi
        public_529624 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x40], edi
        je public_52963f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x44], edi
        public_52963f : nop
        mov ecx, dword ptr ds : [esi+0x48]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x44], edi
        je public_52965a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x48], edi
        public_52965a : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x48], edi
        je public_529675
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x4C], edi
        public_529675 : nop
        mov ecx, dword ptr ds : [esi+0x50]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x4C], edi
        je public_529690
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x50]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x50], edi
        public_529690 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x50], edi
        je public_5296ab
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x54], edi
        public_5296ab : nop
        mov ecx, dword ptr ds : [esi+0x58]
        cmp ecx, edi
        mov dword ptr ds : [esi+0x54], edi
        je public_5296c6
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], edi
        public_5296c6 : nop
        mov dword ptr ds : [esi+0x58], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5295d0)
    }
}

#undef public_5295ee
#undef public_529609
#undef public_529624
#undef public_52963f
#undef public_52965a
#undef public_529675
#undef public_529690
#undef public_5296ab
#undef public_5296c6
