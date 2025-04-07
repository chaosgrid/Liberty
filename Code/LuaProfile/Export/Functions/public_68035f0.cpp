#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68035f0);

#define public_6803611 _public_6803611

PROC_DECLARE(0x68035f0, internal_68035f0, public_68035f0);
extern "C" NAKED register_t __cdecl internal_68035f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_6803611
        mov ecx, dword ptr ds : [public_680e604]
        cmp eax, dword ptr ds : [ecx+0x70]
        jge public_6803611
        mov ecx, dword ptr ds : [ecx+0x6C]
        lea eax, ds:[eax+eax*2]
        mov dword ptr ds : [ecx+eax*8+0x10], 2
        public_6803611 : nop
        ret 
        UNREACHABLE_TRAP(0x68035f0)
    }
}

#undef public_6803611
