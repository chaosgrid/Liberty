#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49c30);

#define public_6f49c40 _public_6f49c40

PROC_DECLARE(0x6f49c30, internal_6f49c30, public_6f49c30);
extern "C" NAKED register_t __cdecl internal_6f49c30()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f49c40
        mov eax, dword ptr ds : [eax+0x10]
        ret 
        public_6f49c40 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f49c30)
    }
}

#undef public_6f49c40
