#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33e20);

#define public_6f33e36 _public_6f33e36

PROC_DECLARE(0x6f33e20, internal_6f33e20, public_6f33e20);
extern "C" NAKED register_t __cdecl internal_6f33e20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f33e36
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6f33e36 : nop
        ret 
        UNREACHABLE_TRAP(0x6f33e20)
    }
}

#undef public_6f33e36
