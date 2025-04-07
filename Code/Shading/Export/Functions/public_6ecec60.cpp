#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);

#define public_6ecec77 _public_6ecec77
#define public_6ecec91 _public_6ecec91
#define public_6ececa3 _public_6ececa3

PROC_DECLARE(0x6ecec60, internal_6ecec60, public_6ecec60);
extern "C" NAKED register_t __cdecl internal_6ecec60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6ecec77
        mov dword ptr ds : [esi+4], edx
        public_6ecec77 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6ecec91
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6ecec91 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx]
        jne public_6ececa3
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6ececa3 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecec60)
    }
}

#undef public_6ecec77
#undef public_6ecec91
#undef public_6ececa3
