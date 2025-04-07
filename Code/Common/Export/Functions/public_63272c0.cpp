#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63272c0);

#define public_63272d5 _public_63272d5

PROC_DECLARE(0x63272c0, internal_63272c0, public_63272c0);
extern "C" NAKED register_t __cdecl internal_63272c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_63272d5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_63272d5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63272c0)
    }
}

#undef public_63272d5
