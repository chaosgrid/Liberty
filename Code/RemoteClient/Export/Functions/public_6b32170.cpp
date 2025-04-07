#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b32170);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3217f _public_6b3217f

PROC_DECLARE(0x6b32170, internal_6b32170, public_6b32170);
extern "C" NAKED register_t __cdecl internal_6b32170()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        shl eax, 2
        test eax, eax
        jge public_6b3217f
        xor eax, eax
        public_6b3217f : nop
        push eax
        call public_6b6a134
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b32170)
    }
}

#undef public_6b3217f
