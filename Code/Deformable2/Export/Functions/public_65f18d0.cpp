#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f18d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f1df0);

#define public_65f18fb _public_65f18fb

PROC_DECLARE(0x65f18d0, internal_65f18d0, public_65f18d0);
extern "C" NAKED register_t __cdecl internal_65f18d0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6601110
        mov dword ptr ds : [ecx+4], offset public_66010dc
        call public_65f1df0
        mov eax, dword ptr ds : [public_6603128]
        test eax, eax
        je public_65f18fb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6603128], 0
        public_65f18fb : nop
        ret 
        UNREACHABLE_TRAP(0x65f18d0)
    }
}

#undef public_65f18fb
