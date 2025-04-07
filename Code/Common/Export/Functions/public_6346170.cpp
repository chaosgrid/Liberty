#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346170);
CLANG_FORWARD_PROC_SYMBOL(public_63470e0);
CLANG_FORWARD_PROC_SYMBOL(public_634bb90);

#define public_6346181 _public_6346181

PROC_DECLARE(0x6346170, internal_6346170, public_6346170);
extern "C" NAKED register_t __cdecl internal_6346170()
{
    __asm
    {
        cmp byte ptr ds : [ecx+0x78], 8
        je public_6346181
        mov ecx, dword ptr ds : [ecx+0x98]
        jmp public_63470e0
        public_6346181 : nop
        mov eax, dword ptr ds : [ecx+0x9C]
        mov ecx, dword ptr ds : [ecx+0x18]
        push eax
        call public_634bb90
        ret 
        UNREACHABLE_TRAP(0x6346170)
    }
}

#undef public_6346181
