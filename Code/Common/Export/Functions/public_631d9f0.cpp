#include "Common-PCH.h"


#define public_631da22 _public_631da22

PROC_DECLARE(0x631d9f0, internal_631d9f0, public_631d9f0);
extern "C" NAKED register_t __cdecl internal_631d9f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6401810]
        push eax
        call dword ptr ds : [public_63990e8]
        mov ecx, dword ptr ds : [public_640180c]
        push 0x1F4
        push ecx
        call dword ptr ds : [public_63990f8]
        cmp eax, 0x102
        jne public_631da22
        mov edx, dword ptr ds : [public_640180c]
        push edx
        call dword ptr ds : [public_63990cc]
        public_631da22 : nop
        ret 
        UNREACHABLE_TRAP(0x631d9f0)
    }
}

#undef public_631da22
