#include "Common-PCH.h"


#define public_62dafea _public_62dafea
#define public_62daff9 _public_62daff9

PROC_DECLARE(0x62dafe0, internal_62dafe0, public_62dafe0);
extern "C" NAKED register_t __cdecl internal_62dafe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_62dafea
        xor al, al
        ret 
        public_62dafea : nop
        cmp eax, 1
        jne public_62daff9
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_62daff9
        xor al, al
        ret 
        public_62daff9 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62dafe0)
    }
}

#undef public_62dafea
#undef public_62daff9
