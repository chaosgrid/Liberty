#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0ab0);

#define public_6ed0abe _public_6ed0abe
#define public_6ed0ad0 _public_6ed0ad0
#define public_6ed0ad8 _public_6ed0ad8

PROC_DECLARE(0x6ed0ab0, internal_6ed0ab0, public_6ed0ab0);
extern "C" NAKED register_t __cdecl internal_6ed0ab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, offset public_6ed5838
        jne public_6ed0abe
        xor eax, eax
        ret 
        public_6ed0abe : nop
        movzx ecx, byte ptr ds : [eax+1]
        movzx edx, byte ptr ds : [eax+2]
        shl ecx, 8
        add ecx, edx
        jne public_6ed0ad0
        xor eax, eax
        ret 
        public_6ed0ad0 : nop
        cmp byte ptr ds : [eax], 7
        jne public_6ed0ad8
        sub eax, ecx
        ret 
        public_6ed0ad8 : nop
        add eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6ed0ab0)
    }
}

#undef public_6ed0abe
#undef public_6ed0ad0
#undef public_6ed0ad8
