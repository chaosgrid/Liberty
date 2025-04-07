#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d11864 _public_6d11864

PROC_DECLARE(0x6d11850, internal_6d11850, public_6d11850);
extern "C" NAKED register_t __cdecl internal_6d11850()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        je public_6d11864
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6d11864
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x10], edx
        ret 
        public_6d11864 : nop
        push 0xC
        call public_6d60012
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6d11850)
    }
}

#undef public_6d11864
