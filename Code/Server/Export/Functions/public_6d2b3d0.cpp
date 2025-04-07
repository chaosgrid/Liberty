#include "Server-PCH.h"


#define public_6d2b3f4 _public_6d2b3f4
#define public_6d2b3f6 _public_6d2b3f6
#define public_6d2b3ff _public_6d2b3ff
#define public_6d2b40b _public_6d2b40b

PROC_DECLARE(0x6d2b3d0, internal_6d2b3d0, public_6d2b3d0);
extern "C" NAKED register_t __cdecl internal_6d2b3d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        push esi
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d2b40b
        mov ecx, dword ptr ds : [ecx+4]
        add eax, 2
        test ecx, ecx
        je public_6d2b3ff
        mov esi, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [esi+4]
        movzx eax, al
        test al, al
        public_6d2b3f4 : nop
        je public_6d2b40b
        public_6d2b3f6 : nop
        mov eax, 1
        pop esi
        ret 8
        public_6d2b3ff : nop
        mov cl, byte ptr ds : [edx+0x1C]
        test cl, cl
        je public_6d2b3f6
        cmp dword ptr ds : [edx+8], eax
        jmp public_6d2b3f4
        public_6d2b40b : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d2b3d0)
    }
}

#undef public_6d2b3f4
#undef public_6d2b3f6
#undef public_6d2b3ff
#undef public_6d2b40b
