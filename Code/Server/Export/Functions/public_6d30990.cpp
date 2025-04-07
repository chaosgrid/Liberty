#include "Server-PCH.h"


#define public_6d309a8 _public_6d309a8
#define public_6d309c2 _public_6d309c2
#define public_6d309c4 _public_6d309c4
#define public_6d309cc _public_6d309cc
#define public_6d309dc _public_6d309dc

PROC_DECLARE(0x6d30990, internal_6d30990, public_6d30990);
extern "C" NAKED register_t __cdecl internal_6d30990()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ax, word ptr ds : [edx]
        test ax, ax
        je public_6d309dc
        cmp ax, word ptr ds : [ecx+8]
        je public_6d309a8
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d309dc
        public_6d309a8 : nop
        mov ecx, dword ptr ds : [ecx+4]
        add edx, 2
        test ecx, ecx
        je public_6d309cc
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d309c2 : nop
        je public_6d309dc
        public_6d309c4 : nop
        mov eax, 1
        ret 8
        public_6d309cc : nop
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d309c4
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d309c2
        public_6d309dc : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d30990)
    }
}

#undef public_6d309a8
#undef public_6d309c2
#undef public_6d309c4
#undef public_6d309cc
#undef public_6d309dc
