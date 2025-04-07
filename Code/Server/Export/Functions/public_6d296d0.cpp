#include "Server-PCH.h"


#define public_6d296e2 _public_6d296e2
#define public_6d296f9 _public_6d296f9
#define public_6d296fb _public_6d296fb
#define public_6d29703 _public_6d29703
#define public_6d29713 _public_6d29713

PROC_DECLARE(0x6d296d0, internal_6d296d0, public_6d296d0);
extern "C" NAKED register_t __cdecl internal_6d296d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ax, word ptr ds : [edx]
        test ax, ax
        je public_6d296e2
        cmp ax, 0xA
        jne public_6d29713
        public_6d296e2 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d29703
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d296f9 : nop
        je public_6d29713
        public_6d296fb : nop
        mov eax, 1
        ret 8
        public_6d29703 : nop
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d296fb
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d296f9
        public_6d29713 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d296d0)
    }
}

#undef public_6d296e2
#undef public_6d296f9
#undef public_6d296fb
#undef public_6d29703
#undef public_6d29713
