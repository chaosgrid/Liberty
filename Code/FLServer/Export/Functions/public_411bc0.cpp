#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411bc0);

#define public_411bd6 _public_411bd6

PROC_DECLARE(0x411bc0, internal_411bc0, public_411bc0);
extern "C" NAKED register_t __cdecl internal_411bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_411bd6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_411bd6 : nop
        ret 
        UNREACHABLE_TRAP(0x411bc0)
    }
}

#undef public_411bd6
