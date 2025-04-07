#include "Common-PCH.h"


#define public_631d9e2 _public_631d9e2

PROC_DECLARE(0x631d9b0, internal_631d9b0, public_631d9b0);
extern "C" NAKED register_t __cdecl internal_631d9b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_640180c]
        push eax
        call dword ptr ds : [public_63990e8]
        mov ecx, dword ptr ds : [public_6401810]
        push 0x1388
        push ecx
        call dword ptr ds : [public_63990f8]
        cmp eax, 0x102
        jne public_631d9e2
        mov edx, dword ptr ds : [public_6401810]
        push edx
        call dword ptr ds : [public_63990cc]
        public_631d9e2 : nop
        ret 
        UNREACHABLE_TRAP(0x631d9b0)
    }
}

#undef public_631d9e2
