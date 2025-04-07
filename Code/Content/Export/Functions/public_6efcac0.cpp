#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcac0);

#define public_6efcad0 _public_6efcad0
#define public_6efcad8 _public_6efcad8
#define public_6efcae0 _public_6efcae0

PROC_DECLARE(0x6efcac0, internal_6efcac0, public_6efcac0);
extern "C" NAKED register_t __cdecl internal_6efcac0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x38]
        mov ecx, dword ptr ds : [ecx+0x3C]
        xor eax, eax
        cmp edx, ecx
        je public_6efcae0
        push ebx
        lea ecx, ds:[ecx]
        public_6efcad0 : nop
        mov bl, byte ptr ds : [edx+0x30]
        test bl, bl
        je public_6efcad8
        inc eax
        public_6efcad8 : nop
        add edx, 0x34
        cmp edx, ecx
        jne public_6efcad0
        pop ebx
        public_6efcae0 : nop
        ret 
        UNREACHABLE_TRAP(0x6efcac0)
    }
}

#undef public_6efcad0
#undef public_6efcad8
#undef public_6efcae0
