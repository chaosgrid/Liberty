#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6ecdc2a _public_6ecdc2a

PROC_DECLARE(0x6ecdc10, internal_6ecdc10, public_6ecdc10);
extern "C" NAKED register_t __cdecl internal_6ecdc10()
{
    __asm
    {
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[eax+ecx*8+4]
        test eax, eax
        jne public_6ecdc2a
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6ecdc2a : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ecdc10)
    }
}

#undef public_6ecdc2a
