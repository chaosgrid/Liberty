#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62040ff _public_62040ff
#define public_6204118 _public_6204118

PROC_DECLARE(0x62040f0, internal_62040f0, public_62040f0);
extern "C" NAKED register_t __cdecl internal_62040f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_62040ff
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_62040ff : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6204118
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6204118 : nop
        ret 4
        UNREACHABLE_TRAP(0x62040f0)
    }
}

#undef public_62040ff
#undef public_6204118
