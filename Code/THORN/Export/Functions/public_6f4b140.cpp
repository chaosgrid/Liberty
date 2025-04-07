#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b140);

#define public_6f4b15b _public_6f4b15b
#define public_6f4b161 _public_6f4b161
#define public_6f4b166 _public_6f4b166

PROC_DECLARE(0x6f4b140, internal_6f4b140, public_6f4b140);
extern "C" NAKED register_t __cdecl internal_6f4b140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp eax, 0xFFFFFFF6
        je public_6f4b161
        cmp eax, 0xFFFFFFF7
        je public_6f4b15b
        cmp eax, 0xFFFFFFF8
        jne public_6f4b166
        mov eax, 0xFFFFFFF9
        ret 
        public_6f4b15b : nop
        mov eax, 0xFFFFFFFC
        ret 
        public_6f4b161 : nop
        mov eax, 0xFFFFFFFB
        public_6f4b166 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4b140)
    }
}

#undef public_6f4b15b
#undef public_6f4b161
#undef public_6f4b166
