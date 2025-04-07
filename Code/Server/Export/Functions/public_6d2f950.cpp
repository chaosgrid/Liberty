#include "Server-PCH.h"


#define public_6d2f971 _public_6d2f971
#define public_6d2f973 _public_6d2f973
#define public_6d2f97b _public_6d2f97b
#define public_6d2f98b _public_6d2f98b

PROC_DECLARE(0x6d2f950, internal_6d2f950, public_6d2f950);
extern "C" NAKED register_t __cdecl internal_6d2f950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp word ptr ds : [eax], 0
        jne public_6d2f98b
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2f97b
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2f971 : nop
        je public_6d2f98b
        public_6d2f973 : nop
        mov eax, 1
        ret 8
        public_6d2f97b : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        je public_6d2f973
        cmp dword ptr ds : [ecx+8], eax
        jmp public_6d2f971
        public_6d2f98b : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d2f950)
    }
}

#undef public_6d2f971
#undef public_6d2f973
#undef public_6d2f97b
#undef public_6d2f98b
