#include "Server-PCH.h"


#define public_6d29584 _public_6d29584
#define public_6d29597 _public_6d29597
#define public_6d29599 _public_6d29599
#define public_6d295a2 _public_6d295a2
#define public_6d295ae _public_6d295ae

PROC_DECLARE(0x6d29570, internal_6d29570, public_6d29570);
extern "C" NAKED register_t __cdecl internal_6d29570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        cmp dword ptr ds : [eax+0xC], edx
        je public_6d29584
        cmp word ptr ds : [edx], 0xA
        jne public_6d295ae
        public_6d29584 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d295a2
        mov esi, dword ptr ds : [ecx]
        push edx
        push eax
        call dword ptr ds : [esi+4]
        movzx eax, al
        test al, al
        public_6d29597 : nop
        je public_6d295ae
        public_6d29599 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d295a2 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d29599
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d29597
        public_6d295ae : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d29570)
    }
}

#undef public_6d29584
#undef public_6d29597
#undef public_6d29599
#undef public_6d295a2
#undef public_6d295ae
