#include "Movie-PCH.h"


#define public_6ad623c _public_6ad623c
#define public_6ad6242 _public_6ad6242
#define public_6ad6248 _public_6ad6248
#define public_6ad624e _public_6ad624e

PROC_DECLARE(0x6ad6221, internal_6ad6221, public_6ad6221);
extern "C" NAKED register_t __cdecl internal_6ad6221()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0x3A4
        je public_6ad624e
        sub eax, 4
        je public_6ad6248
        sub eax, 0xD
        je public_6ad6242
        dec eax
        je public_6ad623c
        xor eax, eax
        ret 
        public_6ad623c : nop
        mov eax, 0x404
        ret 
        public_6ad6242 : nop
        mov eax, 0x412
        ret 
        public_6ad6248 : nop
        mov eax, 0x804
        ret 
        public_6ad624e : nop
        mov eax, 0x411
        ret 
        UNREACHABLE_TRAP(0x6ad6221)
    }
}

#undef public_6ad623c
#undef public_6ad6242
#undef public_6ad6248
#undef public_6ad624e
