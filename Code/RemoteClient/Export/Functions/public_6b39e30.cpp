#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e30);

#define public_6b39e48 _public_6b39e48

PROC_DECLARE(0x6b39e30, internal_6b39e30, public_6b39e30);
extern "C" NAKED register_t __cdecl internal_6b39e30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6b39e48
        dec eax
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        jne public_6b39e48
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        xor eax, eax
        ret 
        public_6b39e48 : nop
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6b39e30)
    }
}

#undef public_6b39e48
