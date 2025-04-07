#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347d20);
CLANG_FORWARD_PROC_SYMBOL(public_63527e0);

#define public_6347d3c _public_6347d3c

PROC_DECLARE(0x6347d20, internal_6347d20, public_6347d20);
extern "C" NAKED register_t __cdecl internal_6347d20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        and eax, 0xC
        cmp al, 4
        jne public_6347d3c
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [ecx+0x5C]
        push eax
        call public_63527e0
        ret 4
        public_6347d3c : nop
        mov dword ptr ds : [ecx+0x5C], 0
        ret 4
        UNREACHABLE_TRAP(0x6347d20)
    }
}

#undef public_6347d3c
