#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489dc0);

#define public_489dde _public_489dde

PROC_DECLARE(0x489dc0, internal_489dc0, public_489dc0);
extern "C" NAKED register_t __cdecl internal_489dc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_489dde
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_489dde : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x489dc0)
    }
}

#undef public_489dde
