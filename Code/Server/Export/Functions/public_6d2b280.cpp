#include "Server-PCH.h"


#define public_6d2b29a _public_6d2b29a
#define public_6d2b29f _public_6d2b29f

PROC_DECLARE(0x6d2b280, internal_6d2b280, public_6d2b280);
extern "C" NAKED register_t __cdecl internal_6d2b280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        cmp edx, ecx
        je public_6d2b29a
        cmp word ptr ds : [ecx], 0xA
        jne public_6d2b29f
        public_6d2b29a : nop
        xor al, al
        ret 4
        public_6d2b29f : nop
        add ecx, 2
        mov dword ptr ds : [eax+0x10], ecx
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6d2b280)
    }
}

#undef public_6d2b29a
#undef public_6d2b29f
