#include "Server-PCH.h"


#define public_6d29739 _public_6d29739

PROC_DECLARE(0x6d29720, internal_6d29720, public_6d29720);
extern "C" NAKED register_t __cdecl internal_6d29720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov ax, word ptr ds : [eax]
        test ax, ax
        je public_6d29739
        cmp ax, 0xA
        je public_6d29739
        xor eax, eax
        ret 8
        public_6d29739 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6d29720)
    }
}

#undef public_6d29739
