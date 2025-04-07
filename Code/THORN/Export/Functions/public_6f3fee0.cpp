#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fee0);

#define public_6f3feff _public_6f3feff

PROC_DECLARE(0x6f3fee0, internal_6f3fee0, public_6f3fee0);
extern "C" NAKED register_t __cdecl internal_6f3fee0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        xor al, al
        test ecx, ecx
        je public_6f3feff
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        test edx, edx
        je public_6f3feff
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, dword ptr ds : [edx+8]
        setb al
        public_6f3feff : nop
        ret 8
        UNREACHABLE_TRAP(0x6f3fee0)
    }
}

#undef public_6f3feff
