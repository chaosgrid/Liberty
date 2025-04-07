#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3af1);

#define public_6ad3aff _public_6ad3aff

PROC_DECLARE(0x6ad3af1, internal_6ad3af1, public_6ad3af1);
extern "C" NAKED register_t __cdecl internal_6ad3af1()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push 3
        sub ecx, eax
        pop edx
        public_6ad3aff : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], esi
        add eax, 4
        dec edx
        jne public_6ad3aff
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad3af1)
    }
}

#undef public_6ad3aff
