#include "Server-PCH.h"


#define public_6d29770 _public_6d29770

PROC_DECLARE(0x6d29750, internal_6d29750, public_6d29750);
extern "C" NAKED register_t __cdecl internal_6d29750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [eax+0x10]
        mov ax, word ptr ds : [eax]
        test ax, ax
        je public_6d29770
        cmp ax, 0xA
        je public_6d29770
        xor eax, eax
        ret 4
        public_6d29770 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6d29750)
    }
}

#undef public_6d29770
