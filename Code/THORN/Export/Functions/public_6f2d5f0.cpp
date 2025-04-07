#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d5f0);

#define public_6f2d605 _public_6f2d605

PROC_DECLARE(0x6f2d5f0, internal_6f2d5f0, public_6f2d5f0);
extern "C" NAKED register_t __cdecl internal_6f2d5f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f2d605
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6f2d605 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f2d5f0)
    }
}

#undef public_6f2d605
