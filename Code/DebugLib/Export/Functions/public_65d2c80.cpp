#include "DebugLib-PCH.h"


#define public_65d2c8f _public_65d2c8f
#define public_65d2ca6 _public_65d2ca6

PROC_DECLARE(0x65d2c80, internal_65d2c80, public_65d2c80);
extern "C" NAKED register_t __cdecl internal_65d2c80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jbe public_65d2c8f
        dec eax
        mov dword ptr ds : [ecx+0xC], eax
        public_65d2c8f : nop
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_65d2ca6
        mov dword ptr ds : [ecx+0xC], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x1C]
        xor eax, eax
        public_65d2ca6 : nop
        ret 4
        UNREACHABLE_TRAP(0x65d2c80)
    }
}

#undef public_65d2c8f
#undef public_65d2ca6
