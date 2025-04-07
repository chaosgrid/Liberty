#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de06e);

#define public_65de08e _public_65de08e
#define public_65de0a3 _public_65de0a3
#define public_65de0b7 _public_65de0b7

PROC_DECLARE(0x65de06e, internal_65de06e, public_65de06e);
extern "C" NAKED register_t __cdecl internal_65de06e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        and dword ptr ds : [public_65e6400], 0
        cmp eax, 0xFFFFFFFE
        jne public_65de08e
        mov dword ptr ds : [public_65e6400], 1
        jmp dword ptr ds : [public_65e1100]
        public_65de08e : nop
        cmp eax, 0xFFFFFFFD
        jne public_65de0a3
        mov dword ptr ds : [public_65e6400], 1
        jmp dword ptr ds : [public_65e1108]
        public_65de0a3 : nop
        cmp eax, 0xFFFFFFFC
        jne public_65de0b7
        mov eax, dword ptr ds : [public_65e63f8]
        mov dword ptr ds : [public_65e6400], 1
        public_65de0b7 : nop
        ret 
        UNREACHABLE_TRAP(0x65de06e)
    }
}

#undef public_65de08e
#undef public_65de0a3
#undef public_65de0b7
