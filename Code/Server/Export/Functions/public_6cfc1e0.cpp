#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cfc220 _public_6cfc220
#define public_6cfc22b _public_6cfc22b
#define public_6cfc24b _public_6cfc24b
#define public_6cfc24d _public_6cfc24d
#define public_6cfc265 _public_6cfc265
#define public_6cfc26a _public_6cfc26a
#define public_6cfc26c _public_6cfc26c

PROC_DECLARE(0x6cfc1e0, internal_6cfc1e0, public_6cfc1e0);
extern "C" NAKED register_t __cdecl internal_6cfc1e0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d8d928]
        test cl, cl
        push esi
        push edi
        mov eax, 0xFFFFFFFB
        jne public_6cfc26c
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfc26a
        mov edx, dword ptr ds : [public_6d8d8f8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov edi, 0xFFFFFFFD
        je public_6cfc22b
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_6cfc220 : nop
        cmp dword ptr ds : [ecx+8], esi
        je public_6cfc22b
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6cfc220
        public_6cfc22b : nop
        cmp ecx, edx
        je public_6cfc265
        add eax, 0xC
        or esi, 0xFFFFFFFF
        test eax, eax
        je public_6cfc24b
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cfc24b
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 1
        cmp dl, 1
        je public_6cfc24d
        public_6cfc24b : nop
        xor eax, eax
        public_6cfc24d : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0x20]
        push edx
        push eax
        call dword ptr ds : [public_6d64444]
        add esp, 8
        test eax, eax
        jne public_6cfc26a
        pop edi
        pop esi
        ret 
        public_6cfc265 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_6cfc26a : nop
        mov eax, esi
        public_6cfc26c : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfc1e0)
    }
}

#undef public_6cfc220
#undef public_6cfc22b
#undef public_6cfc24b
#undef public_6cfc24d
#undef public_6cfc265
#undef public_6cfc26a
#undef public_6cfc26c
