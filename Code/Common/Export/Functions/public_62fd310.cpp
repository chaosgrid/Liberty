#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd310);

#define public_62fd32c _public_62fd32c

PROC_DECLARE(0x62fd310, internal_62fd310, public_62fd310);
extern "C" NAKED register_t __cdecl internal_62fd310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_62fd32c
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_62fd32c : nop
        ret 
        UNREACHABLE_TRAP(0x62fd310)
    }
}

#undef public_62fd32c
