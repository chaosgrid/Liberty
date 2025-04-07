#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629a210);

#define public_629a22f _public_629a22f
#define public_629a231 _public_629a231

PROC_DECLARE(0x629a210, internal_629a210, public_629a210);
extern "C" NAKED register_t __cdecl internal_629a210()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        test edx, edx
        je public_629a231
        mov ecx, dword ptr ds : [edx+0x14]
        cmp ecx, 0x80
        je public_629a22f
        cmp ecx, 0x20
        je public_629a22f
        cmp ecx, 0x40
        jne public_629a231
        public_629a22f : nop
        mov eax, edx
        public_629a231 : nop
        ret 
        UNREACHABLE_TRAP(0x629a210)
    }
}

#undef public_629a22f
#undef public_629a231
