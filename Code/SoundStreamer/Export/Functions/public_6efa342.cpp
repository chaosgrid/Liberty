#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa342);

#define public_6efa35d _public_6efa35d
#define public_6efa363 _public_6efa363
#define public_6efa369 _public_6efa369
#define public_6efa36f _public_6efa36f

PROC_DECLARE(0x6efa342, internal_6efa342, public_6efa342);
extern "C" NAKED register_t __cdecl internal_6efa342()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0x3A4
        je public_6efa36f
        sub eax, 4
        je public_6efa369
        sub eax, 0xD
        je public_6efa363
        dec eax
        je public_6efa35d
        xor eax, eax
        ret 
        public_6efa35d : nop
        mov eax, 0x404
        ret 
        public_6efa363 : nop
        mov eax, 0x412
        ret 
        public_6efa369 : nop
        mov eax, 0x804
        ret 
        public_6efa36f : nop
        mov eax, 0x411
        ret 
        UNREACHABLE_TRAP(0x6efa342)
    }
}

#undef public_6efa35d
#undef public_6efa363
#undef public_6efa369
#undef public_6efa36f
