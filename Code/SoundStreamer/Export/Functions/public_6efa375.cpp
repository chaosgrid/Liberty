#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa375);

PROC_DECLARE(0x6efa375, internal_6efa375, public_6efa375);
extern "C" NAKED register_t __cdecl internal_6efa375()
{
    __asm
    {
        push edi
        push 0x40
        pop ecx
        xor eax, eax
        mov edi, offset public_6f01400
        rep stosd
        stosb 
        xor eax, eax
        mov edi, offset public_6f012e0
        mov dword ptr ds : [public_6f012d8], eax
        mov dword ptr ds : [public_6f012ec], eax
        mov dword ptr ds : [public_6f01504], eax
        stosd 
        stosd 
        stosd 
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6efa375)
    }
}
