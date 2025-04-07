#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63557c0);

#define public_63557c4 _public_63557c4
#define public_63557d1 _public_63557d1

PROC_DECLARE(0x63557c0, internal_63557c0, public_63557c0);
extern "C" NAKED register_t __cdecl internal_63557c0()
{
    __asm
    {
        test ecx, ecx
        je public_63557d1
        public_63557c4 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+0x1B0]
        test ecx, ecx
        jne public_63557c4
        ret 
        public_63557d1 : nop
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x63557c0)
    }
}

#undef public_63557c4
#undef public_63557d1
