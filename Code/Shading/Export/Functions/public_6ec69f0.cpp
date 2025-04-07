#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec69f0);

#define public_6ec6a06 _public_6ec6a06

PROC_DECLARE(0x6ec69f0, internal_6ec69f0, public_6ec69f0);
extern "C" NAKED register_t __cdecl internal_6ec69f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ec6a06
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6ec6a06 : nop
        ret 
        UNREACHABLE_TRAP(0x6ec69f0)
    }
}

#undef public_6ec6a06
