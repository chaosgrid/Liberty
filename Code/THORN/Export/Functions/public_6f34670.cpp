#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224e0);

#define public_6f3468b _public_6f3468b

PROC_DECLARE(0x6f34670, internal_6f34670, public_6f34670);
extern "C" NAKED register_t __cdecl internal_6f34670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f3468b
        call public_6f224e0
        mov ecx, dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        ret 8
        public_6f3468b : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6f34670)
    }
}

#undef public_6f3468b
