#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71980);

#define public_6b7198a _public_6b7198a
#define public_6b7199f _public_6b7199f
#define public_6b719a6 _public_6b719a6

PROC_DECLARE(0x6b71980, internal_6b71980, public_6b71980);
extern "C" NAKED register_t __cdecl internal_6b71980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax]
        test cl, cl
        je public_6b7199f
        public_6b7198a : nop
        cmp cl, 0x5C
        je public_6b7199f
        cmp cl, 0x2F
        je public_6b7199f
        mov cl, byte ptr ds : [eax+1]
        inc eax
        test cl, cl
        jne public_6b7198a
        xor eax, eax
        ret 
        public_6b7199f : nop
        cmp byte ptr ds : [eax], 0
        jne public_6b719a6
        xor eax, eax
        public_6b719a6 : nop
        ret 
        UNREACHABLE_TRAP(0x6b71980)
    }
}

#undef public_6b7198a
#undef public_6b7199f
#undef public_6b719a6
