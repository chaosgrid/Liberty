#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcaf0);

#define public_6efcb00 _public_6efcb00
#define public_6efcb08 _public_6efcb08
#define public_6efcb10 _public_6efcb10

PROC_DECLARE(0x6efcaf0, internal_6efcaf0, public_6efcaf0);
extern "C" NAKED register_t __cdecl internal_6efcaf0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x38]
        mov ecx, dword ptr ds : [ecx+0x3C]
        xor eax, eax
        cmp edx, ecx
        je public_6efcb10
        push ebx
        lea ecx, ds:[ecx]
        public_6efcb00 : nop
        mov bl, byte ptr ds : [edx+0x30]
        test bl, bl
        jne public_6efcb08
        inc eax
        public_6efcb08 : nop
        add edx, 0x34
        cmp edx, ecx
        jne public_6efcb00
        pop ebx
        public_6efcb10 : nop
        ret 
        UNREACHABLE_TRAP(0x6efcaf0)
    }
}

#undef public_6efcb00
#undef public_6efcb08
#undef public_6efcb10
