#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624ca0);

#define public_6624cb4 _public_6624cb4
#define public_6624cbe _public_6624cbe
#define public_6624cc2 _public_6624cc2
#define public_6624cc7 _public_6624cc7

PROC_DECLARE(0x6624ca0, internal_6624ca0, public_6624ca0);
extern "C" NAKED register_t __cdecl internal_6624ca0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6624cc7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6624cb4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_6624cbe
        mov eax, dword ptr ds : [eax+8]
        jmp public_6624cc2
        public_6624cbe : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6624cc2 : nop
        cmp eax, ecx
        jne public_6624cb4
        pop esi
        public_6624cc7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6624ca0)
    }
}

#undef public_6624cb4
#undef public_6624cbe
#undef public_6624cc2
#undef public_6624cc7
