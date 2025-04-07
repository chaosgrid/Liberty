#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7ef0);

#define public_6ea7f09 _public_6ea7f09
#define public_6ea7f1a _public_6ea7f1a
#define public_6ea7f4b _public_6ea7f4b
#define public_6ea7f58 _public_6ea7f58

PROC_DECLARE(0x6ea7ef0, internal_6ea7ef0, public_6ea7ef0);
extern "C" NAKED register_t __cdecl internal_6ea7ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, 2
        jne public_6ea7f09
        mov ecx, dword ptr ds : [esi+0x58]
        test ecx, ecx
        je public_6ea7f09
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        jmp public_6ea7f1a
        public_6ea7f09 : nop
        cmp eax, 1
        jne public_6ea7f1a
        mov ecx, dword ptr ds : [esi+0x58]
        test ecx, ecx
        je public_6ea7f1a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6ea7f1a : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x58], 0
        mov dword ptr ds : [esi+0x54], 0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x54], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x58], ecx
        mov esi, dword ptr ds : [esi+0x54]
        cmp esi, 2
        jne public_6ea7f4b
        test ecx, ecx
        je public_6ea7f4b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        pop esi
        ret 4
        public_6ea7f4b : nop
        cmp esi, 1
        jne public_6ea7f58
        test ecx, ecx
        je public_6ea7f58
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6ea7f58 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea7ef0)
    }
}

#undef public_6ea7f09
#undef public_6ea7f1a
#undef public_6ea7f4b
#undef public_6ea7f58
