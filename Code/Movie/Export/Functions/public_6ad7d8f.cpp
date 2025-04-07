#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad7d8f);

#define public_6ad7d9f _public_6ad7d9f
#define public_6ad7dac _public_6ad7dac
#define public_6ad7db7 _public_6ad7db7

PROC_DECLARE(0x6ad7d8f, internal_6ad7d8f, public_6ad7d8f);
extern "C" NAKED register_t __cdecl internal_6ad7d8f()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        lea ecx, ds:[edx-1]
        je public_6ad7dac
        public_6ad7d9f : nop
        cmp byte ptr ds : [eax], 0
        je public_6ad7dac
        inc eax
        mov esi, ecx
        dec ecx
        test esi, esi
        jne public_6ad7d9f
        public_6ad7dac : nop
        cmp byte ptr ds : [eax], 0
        pop esi
        jne public_6ad7db7
        sub eax, dword ptr ss : [esp+4]
        ret 
        public_6ad7db7 : nop
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ad7d8f)
    }
}

#undef public_6ad7d9f
#undef public_6ad7dac
#undef public_6ad7db7
