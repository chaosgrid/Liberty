#include "Server-PCH.h"


#define public_6d2952e _public_6d2952e
#define public_6d29533 _public_6d29533

PROC_DECLARE(0x6d29510, internal_6d29510, public_6d29510);
extern "C" NAKED register_t __cdecl internal_6d29510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0xC]
        cmp ecx, eax
        je public_6d29533
        cmp word ptr ds : [eax], 0xA
        jne public_6d2952e
        add eax, 2
        cmp ecx, eax
        je public_6d29533
        public_6d2952e : nop
        xor eax, eax
        ret 8
        public_6d29533 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6d29510)
    }
}

#undef public_6d2952e
#undef public_6d29533
