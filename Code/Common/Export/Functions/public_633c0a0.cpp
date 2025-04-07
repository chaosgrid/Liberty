#include "Common-PCH.h"


#define public_633c0d0 _public_633c0d0
#define public_633c0e6 _public_633c0e6
#define public_633c0f0 _public_633c0f0
#define public_633c100 _public_633c100
#define public_633c105 _public_633c105
#define public_633c10b _public_633c10b
#define public_633c10d _public_633c10d

PROC_DECLARE(0x633c0a0, internal_633c0a0, public_633c0a0);
extern "C" NAKED register_t __cdecl internal_633c0a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658a824]
        cmp ecx, dword ptr ds : [public_658a82c]
        je public_633c10d
        mov edx, dword ptr ds : [ecx+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xA9]
        test bl, bl
        lea eax, ds:[ecx+0x10]
        jne public_633c0e6
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        jne public_633c105
        nop 
        lea esp, ss:[esp]
        public_633c0d0 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        je public_633c0d0
        mov dword ptr ds : [public_658a824], edx
        pop ebx
        ret 
        public_633c0e6 : nop
        mov edx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_633c100
        mov edi, edi
        public_633c0f0 : nop
        mov ecx, edx
        mov dword ptr ds : [public_658a824], ecx
        mov edx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        je public_633c0f0
        public_633c100 : nop
        cmp dword ptr ds : [ecx+8], edx
        je public_633c10b
        public_633c105 : nop
        mov dword ptr ds : [public_658a824], edx
        public_633c10b : nop
        pop ebx
        ret 
        public_633c10d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x633c0a0)
    }
}

#undef public_633c0d0
#undef public_633c0e6
#undef public_633c0f0
#undef public_633c100
#undef public_633c105
#undef public_633c10b
#undef public_633c10d
