#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a710);

#define public_6f4a726 _public_6f4a726
#define public_6f4a730 _public_6f4a730
#define public_6f4a734 _public_6f4a734
#define public_6f4a738 _public_6f4a738

PROC_DECLARE(0x6f4a710, internal_6f4a710, public_6f4a710);
extern "C" NAKED register_t __cdecl internal_6f4a710()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        push esi
        mov esi, eax
        je public_6f4a738
        mov eax, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [eax]
        public_6f4a726 : nop
        cmp byte ptr ds : [edx+0xC], al
        jae public_6f4a730
        mov edx, dword ptr ds : [edx+8]
        jmp public_6f4a734
        public_6f4a730 : nop
        mov esi, edx
        mov edx, dword ptr ds : [edx]
        public_6f4a734 : nop
        cmp edx, ecx
        jne public_6f4a726
        public_6f4a738 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4a710)
    }
}

#undef public_6f4a726
#undef public_6f4a730
#undef public_6f4a734
#undef public_6f4a738
