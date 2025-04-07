#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63569c0);

#define public_63569dc _public_63569dc

PROC_DECLARE(0x63569c0, internal_63569c0, public_63569c0);
extern "C" NAKED register_t __cdecl internal_63569c0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_63569dc
        cmp byte ptr ds : [edi], 0
        je public_63569dc
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        pop edi
        ret 
        public_63569dc : nop
        xor eax, eax
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63569c0)
    }
}

#undef public_63569dc
