#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804f80);

#define public_6804f8f _public_6804f8f

PROC_DECLARE(0x6804f80, internal_6804f80, public_6804f80);
extern "C" NAKED register_t __cdecl internal_6804f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFA
        jge public_6804f8f
        mov eax, 1
        ret 
        public_6804f8f : nop
        mov edx, dword ptr ss : [esp+8]
        lea eax, ds:[eax+eax*8]
        shl eax, 1
        mov ecx, offset public_680d610
        sub ecx, eax
        movsx eax, byte ptr ds : [ecx+edx]
        ret 
        UNREACHABLE_TRAP(0x6804f80)
    }
}

#undef public_6804f8f
