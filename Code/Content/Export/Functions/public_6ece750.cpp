#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb8d10);

#define public_6ece76f _public_6ece76f

PROC_DECLARE(0x6ece750, internal_6ece750, public_6ece750);
extern "C" NAKED register_t __cdecl internal_6ece750()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
        call dword ptr ds : [public_6fb3420]
        add esp, 4
        test eax, eax
        jne public_6ece76f
        mov ecx, dword ptr ds : [esi+4]
        call public_6eb8d10
        public_6ece76f : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ece750)
    }
}

#undef public_6ece76f
