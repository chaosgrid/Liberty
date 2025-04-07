#include "Common-PCH.h"


#define public_62b4aa3 _public_62b4aa3
#define public_62b4ab1 _public_62b4ab1
#define public_62b4ab8 _public_62b4ab8

PROC_DECLARE(0x62b4a90, internal_62b4a90, public_62b4a90);
extern "C" NAKED register_t __cdecl internal_62b4a90()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1D4]
        push esi
        mov esi, dword ptr ds : [ecx+0x1D8]
        xor eax, eax
        cmp edx, esi
        je public_62b4ab8
        public_62b4aa3 : nop
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_62b4ab1
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_62b4ab1
        inc eax
        public_62b4ab1 : nop
        add edx, 8
        cmp edx, esi
        jne public_62b4aa3
        public_62b4ab8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b4a90)
    }
}

#undef public_62b4aa3
#undef public_62b4ab1
#undef public_62b4ab8
