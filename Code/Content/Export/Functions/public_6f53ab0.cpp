#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53ab0);

#define public_6f53ac2 _public_6f53ac2
#define public_6f53ace _public_6f53ace
#define public_6f53ad5 _public_6f53ad5
#define public_6f53ad7 _public_6f53ad7

PROC_DECLARE(0x6f53ab0, internal_6f53ab0, public_6f53ab0);
extern "C" NAKED register_t __cdecl internal_6f53ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push esi
        push edi
        je public_6f53ad5
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        public_6f53ac2 : nop
        cmp dword ptr ds : [eax], esi
        jne public_6f53ace
        mov edi, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [edx+4]
        je public_6f53ad7
        public_6f53ace : nop
        add eax, 0xC
        cmp eax, ecx
        jne public_6f53ac2
        public_6f53ad5 : nop
        mov eax, ecx
        public_6f53ad7 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f53ab0)
    }
}

#undef public_6f53ac2
#undef public_6f53ace
#undef public_6f53ad5
#undef public_6f53ad7
