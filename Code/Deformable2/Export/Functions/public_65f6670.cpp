#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6670);

#define public_65f668c _public_65f668c

PROC_DECLARE(0x65f6670, internal_65f6670, public_65f6670);
extern "C" NAKED register_t __cdecl internal_65f6670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_65f668c
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_65f668c : nop
        ret 
        UNREACHABLE_TRAP(0x65f6670)
    }
}

#undef public_65f668c
