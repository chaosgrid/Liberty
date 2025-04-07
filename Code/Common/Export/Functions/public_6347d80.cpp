#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347d80);
CLANG_FORWARD_PROC_SYMBOL(public_6349490);
CLANG_FORWARD_PROC_SYMBOL(public_63494f0);

#define public_6347d9a _public_6347d9a
#define public_6347d9b _public_6347d9b

PROC_DECLARE(0x6347d80, internal_6347d80, public_6347d80);
extern "C" NAKED register_t __cdecl internal_6347d80()
{
    __asm
    {
        test byte ptr ds : [ecx], 0xC
        jne public_6347d9a
        cmp byte ptr ds : [ecx+0x60], 8
        jne public_6347d9b
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+0x15C]
        push eax
        call public_6349490
        public_6347d9a : nop
        ret 
        public_6347d9b : nop
        mov ecx, dword ptr ds : [ecx+0x15C]
        jmp public_63494f0
        UNREACHABLE_TRAP(0x6347d80)
    }
}

#undef public_6347d9a
#undef public_6347d9b
