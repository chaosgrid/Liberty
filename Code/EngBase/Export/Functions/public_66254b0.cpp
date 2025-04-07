#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66254b0);

#define public_66254c6 _public_66254c6

PROC_DECLARE(0x66254b0, internal_66254b0, public_66254b0);
extern "C" NAKED register_t __cdecl internal_66254b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_66254c6
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_66254c6 : nop
        ret 
        UNREACHABLE_TRAP(0x66254b0)
    }
}

#undef public_66254c6
