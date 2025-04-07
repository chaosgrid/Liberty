#include "Server-PCH.h"


#define public_6d29425 _public_6d29425
#define public_6d29438 _public_6d29438
#define public_6d2943a _public_6d2943a
#define public_6d29443 _public_6d29443
#define public_6d2944f _public_6d2944f

PROC_DECLARE(0x6d29410, internal_6d29410, public_6d29410);
extern "C" NAKED register_t __cdecl internal_6d29410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        cmp dword ptr ds : [eax+4], edx
        je public_6d29425
        cmp word ptr ds : [edx-2], 0xA
        jne public_6d2944f
        public_6d29425 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d29443
        mov esi, dword ptr ds : [ecx]
        push edx
        push eax
        call dword ptr ds : [esi+4]
        movzx eax, al
        test al, al
        public_6d29438 : nop
        je public_6d2944f
        public_6d2943a : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d29443 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d2943a
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d29438
        public_6d2944f : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d29410)
    }
}

#undef public_6d29425
#undef public_6d29438
#undef public_6d2943a
#undef public_6d29443
#undef public_6d2944f
