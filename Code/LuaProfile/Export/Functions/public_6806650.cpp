#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806650);

#define public_680665b _public_680665b

PROC_DECLARE(0x6806650, internal_6806650, public_6806650);
extern "C" NAKED register_t __cdecl internal_6806650()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jne public_680665b
        xor eax, eax
        ret 
        public_680665b : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea edx, ds:[eax+0x14]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], offset public_6806680
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x6806650)
    }
}

#undef public_680665b
