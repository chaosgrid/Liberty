#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f73990);

#define public_6f739a1 _public_6f739a1
#define public_6f739af _public_6f739af
#define public_6f739b5 _public_6f739b5

PROC_DECLARE(0x6f73990, internal_6f73990, public_6f73990);
extern "C" NAKED register_t __cdecl internal_6f73990()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xE0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push esi
        je public_6f739af
        mov edx, dword ptr ss : [esp+8]
        public_6f739a1 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [esi+4]
        je public_6f739b5
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f739a1
        public_6f739af : nop
        xor eax, eax
        pop esi
        ret 4
        public_6f739b5 : nop
        mov eax, dword ptr ds : [eax+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f73990)
    }
}

#undef public_6f739a1
#undef public_6f739af
#undef public_6f739b5
