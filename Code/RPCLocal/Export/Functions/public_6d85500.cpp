#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);

#define public_6d85516 _public_6d85516

PROC_DECLARE(0x6d85500, internal_6d85500, public_6d85500);
extern "C" NAKED register_t __cdecl internal_6d85500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6d85516
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        public_6d85516 : nop
        ret 
        UNREACHABLE_TRAP(0x6d85500)
    }
}

#undef public_6d85516
