#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f229f0);

#define public_6f22a0b _public_6f22a0b

PROC_DECLARE(0x6f229f0, internal_6f229f0, public_6f229f0);
extern "C" NAKED register_t __cdecl internal_6f229f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [ecx+0x10]
        jae public_6f22a0b
        mov ecx, dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 8
        public_6f22a0b : nop
        mov eax, 0xFFFFFFFE
        ret 8
        UNREACHABLE_TRAP(0x6f229f0)
    }
}

#undef public_6f22a0b
