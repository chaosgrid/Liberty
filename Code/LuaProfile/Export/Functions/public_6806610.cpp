#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806610);
CLANG_FORWARD_PROC_SYMBOL(public_6806640);

#define public_680661b _public_680661b

PROC_DECLARE(0x6806610, internal_6806610, public_6806610);
extern "C" NAKED register_t __cdecl internal_6806610()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jne public_680661b
        xor eax, eax
        ret 
        public_680661b : nop
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+8], offset _public_6806640
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x6806610)
    }
}

#undef public_680661b
