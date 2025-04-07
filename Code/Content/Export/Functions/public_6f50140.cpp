#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50140);

#define public_6f5015a _public_6f5015a

PROC_DECLARE(0x6f50140, internal_6f50140, public_6f50140);
extern "C" NAKED register_t __cdecl internal_6f50140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f5015a
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6f5015a
        mov eax, 1
        ret 4
        public_6f5015a : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f50140)
    }
}

#undef public_6f5015a
