#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5999b0);

#define public_5999c0 _public_5999c0

PROC_DECLARE(0x5999b0, internal_5999b0, public_5999b0);
extern "C" NAKED register_t __cdecl internal_5999b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_5999c0
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_5999c0 : nop
        ret 
        UNREACHABLE_TRAP(0x5999b0)
    }
}

#undef public_5999c0
