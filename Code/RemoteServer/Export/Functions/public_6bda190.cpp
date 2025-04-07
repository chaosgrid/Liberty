#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda190);

#define public_6bda1a8 _public_6bda1a8

PROC_DECLARE(0x6bda190, internal_6bda190, public_6bda190);
extern "C" NAKED register_t __cdecl internal_6bda190()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6bda1a8
        dec eax
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        jne public_6bda1a8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        xor eax, eax
        ret 
        public_6bda1a8 : nop
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6bda190)
    }
}

#undef public_6bda1a8
