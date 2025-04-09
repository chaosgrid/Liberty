#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);

#define public_4e5fd6 _public_4e5fd6

PROC_DECLARE(0x4e5fc0, internal_4e5fc0, public_4e5fc0);
extern "C" NAKED register_t __cdecl internal_4e5fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4e5fd6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_4e5fd6 : nop
        ret 
        UNREACHABLE_TRAP(0x4e5fc0)
    }
}

#undef public_4e5fd6
