#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f9450);

#define public_4f9474 _public_4f9474

PROC_DECLARE(0x4f9450, internal_4f9450, public_4f9450);
extern "C" NAKED register_t __cdecl internal_4f9450()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5d9dac
        dec dword ptr ds : [public_674f58]
        mov dword ptr ds : [ecx], offset public_5d9aac
        mov eax, dword ptr ds : [ecx+0x44]
        add ecx, 0x44
        test eax, eax
        je public_4f9474
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4f9474 : nop
        ret 
        UNREACHABLE_TRAP(0x4f9450)
    }
}

#undef public_4f9474
