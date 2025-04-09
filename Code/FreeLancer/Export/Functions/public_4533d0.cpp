#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411120);

#define public_4533e7 _public_4533e7

PROC_DECLARE(0x4533d0, internal_4533d0, public_4533d0);
extern "C" NAKED register_t __cdecl internal_4533d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x58]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_4533e7
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_411120
        public_4533e7 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x4533d0)
    }
}

#undef public_4533e7
