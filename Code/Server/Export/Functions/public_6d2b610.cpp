#include "Server-PCH.h"


#define public_6d2b62b _public_6d2b62b
#define public_6d2b630 _public_6d2b630

PROC_DECLARE(0x6d2b610, internal_6d2b610, public_6d2b610);
extern "C" NAKED register_t __cdecl internal_6d2b610()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dx, word ptr ds : [ecx]
        test dx, dx
        je public_6d2b62b
        cmp dx, 0xA
        jne public_6d2b630
        public_6d2b62b : nop
        xor al, al
        ret 4
        public_6d2b630 : nop
        add ecx, 2
        mov dword ptr ds : [eax+0x10], ecx
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6d2b610)
    }
}

#undef public_6d2b62b
#undef public_6d2b630
