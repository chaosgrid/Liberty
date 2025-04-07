#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fdf0);

#define public_6f4fdfd _public_6f4fdfd
#define public_6f4fe03 _public_6f4fe03

PROC_DECLARE(0x6f4fdf0, internal_6f4fdf0, public_6f4fdf0);
extern "C" NAKED register_t __cdecl internal_6f4fdf0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, 8
        cmp ecx, eax
        jb public_6f4fe03
        public_6f4fdfd : nop
        shl eax, 1
        cmp eax, ecx
        jbe public_6f4fdfd
        public_6f4fe03 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4fdf0)
    }
}

#undef public_6f4fdfd
#undef public_6f4fe03
