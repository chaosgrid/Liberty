#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48d20);

#define public_6d48d41 _public_6d48d41

PROC_DECLARE(0x6d48d20, internal_6d48d20, public_6d48d20);
extern "C" NAKED register_t __cdecl internal_6d48d20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d48d41
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [esi+0x348]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        call dword ptr ds : [eax+0x24]
        public_6d48d41 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d48d20)
    }
}

#undef public_6d48d41
