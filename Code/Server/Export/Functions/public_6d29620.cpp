#include "Server-PCH.h"


#define public_6d29639 _public_6d29639
#define public_6d29650 _public_6d29650
#define public_6d29652 _public_6d29652
#define public_6d2965a _public_6d2965a
#define public_6d2966a _public_6d2966a

PROC_DECLARE(0x6d29620, internal_6d29620, public_6d29620);
extern "C" NAKED register_t __cdecl internal_6d29620()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ax, word ptr ds : [edx]
        test ax, ax
        je public_6d29639
        cmp ax, 0xA
        jne public_6d2966a
        cmp word ptr ds : [edx+2], 0
        jne public_6d2966a
        public_6d29639 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2965a
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d29650 : nop
        je public_6d2966a
        public_6d29652 : nop
        mov eax, 1
        ret 8
        public_6d2965a : nop
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d29652
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d29650
        public_6d2966a : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d29620)
    }
}

#undef public_6d29639
#undef public_6d29650
#undef public_6d29652
#undef public_6d2965a
#undef public_6d2966a
