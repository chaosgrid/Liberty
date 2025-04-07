#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c223f0);

#define public_6c22406 _public_6c22406

PROC_DECLARE(0x6c223f0, internal_6c223f0, public_6c223f0);
extern "C" NAKED register_t __cdecl internal_6c223f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6c22406
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6c22406 : nop
        ret 
        UNREACHABLE_TRAP(0x6c223f0)
    }
}

#undef public_6c22406
