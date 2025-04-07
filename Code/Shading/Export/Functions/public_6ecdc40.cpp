#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6ecdc5a _public_6ecdc5a

PROC_DECLARE(0x6ecdc40, internal_6ecdc40, public_6ecdc40);
extern "C" NAKED register_t __cdecl internal_6ecdc40()
{
    __asm
    {
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[eax+ecx*8+4]
        test eax, eax
        jne public_6ecdc5a
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6ecdc5a : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ecdc40)
    }
}

#undef public_6ecdc5a
