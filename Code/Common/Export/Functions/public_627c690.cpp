#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c690);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627c6a4 _public_627c6a4

PROC_DECLARE(0x627c690, internal_627c690, public_627c690);
extern "C" NAKED register_t __cdecl internal_627c690()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        je public_627c6a4
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_627c6a4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x10], edx
        ret 
        public_627c6a4 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x627c690)
    }
}

#undef public_627c6a4
