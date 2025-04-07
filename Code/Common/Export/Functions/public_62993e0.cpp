#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293210);
CLANG_FORWARD_PROC_SYMBOL(public_62993e0);

#define public_62993fa _public_62993fa

PROC_DECLARE(0x62993e0, internal_62993e0, public_62993e0);
extern "C" NAKED register_t __cdecl internal_62993e0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x50]
        fcomp dword ptr ds : [public_639d2ac]
        fnstsw ax
        test ah, 5
        jp public_62993fa
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x50]
        fstp dword ptr ds : [ecx+0x50]
        public_62993fa : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        jmp public_6293210
        UNREACHABLE_TRAP(0x62993e0)
    }
}

#undef public_62993fa
