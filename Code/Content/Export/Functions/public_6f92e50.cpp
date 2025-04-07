#include "Content-PCH.h"


#define public_6f92e60 _public_6f92e60
#define public_6f92e71 _public_6f92e71
#define public_6f92e78 _public_6f92e78

PROC_DECLARE(0x6f92e50, internal_6f92e50, public_6f92e50);
extern "C" NAKED register_t __cdecl internal_6f92e50()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x40]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi]
        xor eax, eax
        cmp ecx, esi
        je public_6f92e78
        push ebx
        public_6f92e60 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [edx+4]
        test bl, bl
        je public_6f92e71
        cmp dword ptr ds : [edx+0x3C], 2
        jne public_6f92e71
        inc eax
        public_6f92e71 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6f92e60
        pop ebx
        public_6f92e78 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f92e50)
    }
}

#undef public_6f92e60
#undef public_6f92e71
#undef public_6f92e78
