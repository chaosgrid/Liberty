#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_54be20);

#define public_54be44 _public_54be44
#define public_54be64 _public_54be64
#define public_54be9d _public_54be9d

PROC_DECLARE(0x54be20, internal_54be20, public_54be20);
extern "C" NAKED register_t __cdecl internal_54be20()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6797c0]
        push esi
        xor esi, esi
        cmp ecx, esi
        push edi
        je public_54be44
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6797c0]
        call public_4f7a90
        mov dword ptr ds : [public_6797c0], esi
        public_54be44 : nop
        mov ecx, dword ptr ds : [public_6797bc]
        cmp ecx, esi
        je public_54be64
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6797bc]
        call public_4f7a90
        mov dword ptr ds : [public_6797bc], esi
        public_54be64 : nop
        mov edi, dword ptr ds : [public_5c69a0]
        mov ecx, offset public_679790
        call edi
        mov ecx, dword ptr ds : [public_6797b8]
        cmp ecx, esi
        mov dword ptr ds : [public_6797b0], esi
        mov dword ptr ds : [public_6797b4], esi
        je public_54be9d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6797b8]
        call public_4f7a90
        mov dword ptr ds : [public_6797b8], esi
        public_54be9d : nop
        mov ecx, offset public_679794
        call edi
        pop edi
        mov dword ptr ds : [public_6797a8], esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x54be20)
    }
}

#undef public_54be44
#undef public_54be64
#undef public_54be9d
