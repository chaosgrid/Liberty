#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74190);

#define public_6b741ae _public_6b741ae

PROC_DECLARE(0x6b74190, internal_6b74190, public_6b74190);
extern "C" NAKED register_t __cdecl internal_6b74190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b741ae
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_6b791f4
        public_6b741ae : nop
        ret 
        UNREACHABLE_TRAP(0x6b74190)
    }
}

#undef public_6b741ae
