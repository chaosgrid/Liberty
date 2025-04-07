#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6236fef _public_6236fef
#define public_6237008 _public_6237008

PROC_DECLARE(0x6236fe0, internal_6236fe0, public_6236fe0);
extern "C" NAKED register_t __cdecl internal_6236fe0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6236fef
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6236fef : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6237008
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6237008 : nop
        ret 4
        UNREACHABLE_TRAP(0x6236fe0)
    }
}

#undef public_6236fef
#undef public_6237008
