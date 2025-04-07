#include "Alchemy-PCH.h"


#define public_622281f _public_622281f
#define public_6222836 _public_6222836

PROC_DECLARE(0x6222810, internal_6222810, public_6222810);
extern "C" NAKED register_t __cdecl internal_6222810()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        jbe public_622281f
        dec eax
        mov dword ptr ds : [ecx+0x20], eax
        public_622281f : nop
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        jne public_6222836
        mov dword ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x44]
        xor eax, eax
        public_6222836 : nop
        ret 4
        UNREACHABLE_TRAP(0x6222810)
    }
}

#undef public_622281f
#undef public_6222836
