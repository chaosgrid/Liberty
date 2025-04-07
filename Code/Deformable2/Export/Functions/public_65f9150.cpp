#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9150);

#define public_65f9163 _public_65f9163

PROC_DECLARE(0x65f9150, internal_65f9150, public_65f9150);
extern "C" NAKED register_t __cdecl internal_65f9150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        je public_65f9163
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65f9163 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f9150)
    }
}

#undef public_65f9163
