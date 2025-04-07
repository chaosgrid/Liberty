#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6392220);

#define public_6392242 _public_6392242

PROC_DECLARE(0x6392220, internal_6392220, public_6392220);
extern "C" NAKED register_t __cdecl internal_6392220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x800
        jge public_6392242
        mov edx, dword ptr ds : [ecx+eax*4+8]
        test edx, edx
        je public_6392242
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6392242
        mov eax, 1
        ret 4
        public_6392242 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6392220)
    }
}

#undef public_6392242
