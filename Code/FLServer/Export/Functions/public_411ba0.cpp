#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411ba0);

#define public_411bb6 _public_411bb6

PROC_DECLARE(0x411ba0, internal_411ba0, public_411ba0);
extern "C" NAKED register_t __cdecl internal_411ba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_411bb6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_411bb6 : nop
        ret 
        UNREACHABLE_TRAP(0x411ba0)
    }
}

#undef public_411bb6
