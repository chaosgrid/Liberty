#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62961f0);

#define public_629620a _public_629620a

PROC_DECLARE(0x62961f0, internal_62961f0, public_62961f0);
extern "C" NAKED register_t __cdecl internal_62961f0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_629620a
        mov eax, dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax+0x88]
        public_629620a : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [ecx+0x70]
        ret 4
        UNREACHABLE_TRAP(0x62961f0)
    }
}

#undef public_629620a
