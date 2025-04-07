#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630a671 _public_630a671
#define public_630a67d _public_630a67d
#define public_630a684 _public_630a684
#define public_630a694 _public_630a694
#define public_630a6c0 _public_630a6c0
#define public_630a6cc _public_630a6cc

PROC_DECLARE(0x630a660, internal_630a660, public_630a660);
extern "C" NAKED register_t __cdecl internal_630a660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_630a67d
        mov dx, word ptr ss : [esp+8]
        public_630a671 : nop
        cmp word ptr ds : [eax+0xA], dx
        je public_630a684
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_630a671
        public_630a67d : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_630a684 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, 0xFFFFFFFF
        jne public_630a6c0
        mov dword ptr ds : [eax+0x1C], 0
        public_630a694 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_630a6cc
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        xor eax, eax
        pop esi
        ret 8
        public_630a6c0 : nop
        sub dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], 0x3F800000
        jmp public_630a694
        public_630a6cc : nop
        mov eax, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630a660)
    }
}

#undef public_630a671
#undef public_630a67d
#undef public_630a684
#undef public_630a694
#undef public_630a6c0
#undef public_630a6cc
