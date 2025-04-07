#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa2f8);

#define public_6efa318 _public_6efa318
#define public_6efa32d _public_6efa32d
#define public_6efa341 _public_6efa341

PROC_DECLARE(0x6efa2f8, internal_6efa2f8, public_6efa2f8);
extern "C" NAKED register_t __cdecl internal_6efa2f8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        and dword ptr ds : [public_6f01284], 0
        cmp eax, 0xFFFFFFFE
        jne public_6efa318
        mov dword ptr ds : [public_6f01284], 1
        jmp dword ptr ds : [public_6efc024]
        public_6efa318 : nop
        cmp eax, 0xFFFFFFFD
        jne public_6efa32d
        mov dword ptr ds : [public_6f01284], 1
        jmp dword ptr ds : [public_6efc028]
        public_6efa32d : nop
        cmp eax, 0xFFFFFFFC
        jne public_6efa341
        mov eax, dword ptr ds : [public_6f012b8]
        mov dword ptr ds : [public_6f01284], 1
        public_6efa341 : nop
        ret 
        UNREACHABLE_TRAP(0x6efa2f8)
    }
}

#undef public_6efa318
#undef public_6efa32d
#undef public_6efa341
