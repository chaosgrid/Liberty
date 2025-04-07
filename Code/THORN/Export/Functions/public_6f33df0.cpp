#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33df0);

#define public_6f33e12 _public_6f33e12

PROC_DECLARE(0x6f33df0, internal_6f33df0, public_6f33df0);
extern "C" NAKED register_t __cdecl internal_6f33df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f33e12
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        public_6f33e12 : nop
        ret 
        UNREACHABLE_TRAP(0x6f33df0)
    }
}

#undef public_6f33e12
