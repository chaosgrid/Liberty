#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);

#define public_6801d08 _public_6801d08

PROC_DECLARE(0x6801cf0, internal_6801cf0, public_6801cf0);
extern "C" NAKED register_t __cdecl internal_6801cf0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jle public_6801d08
        mov eax, dword ptr ds : [public_680e604]
        cmp ecx, dword ptr ds : [eax+0x14]
        jg public_6801d08
        mov eax, dword ptr ds : [eax+0x10]
        add eax, ecx
        ret 
        public_6801d08 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6801cf0)
    }
}

#undef public_6801d08
