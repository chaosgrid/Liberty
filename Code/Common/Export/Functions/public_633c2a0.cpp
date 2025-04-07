#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633c2a0);

#define public_633c2d0 _public_633c2d0
#define public_633c2e6 _public_633c2e6
#define public_633c2f0 _public_633c2f0
#define public_633c300 _public_633c300
#define public_633c305 _public_633c305
#define public_633c30b _public_633c30b
#define public_633c30d _public_633c30d

PROC_DECLARE(0x633c2a0, internal_633c2a0, public_633c2a0);
extern "C" NAKED register_t __cdecl internal_633c2a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_658a820]
        cmp ecx, dword ptr ds : [public_658a840]
        je public_633c30d
        mov edx, dword ptr ds : [ecx+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x81]
        test bl, bl
        lea eax, ds:[ecx+0x10]
        jne public_633c2e6
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        jne public_633c305
        nop 
        lea esp, ss:[esp]
        public_633c2d0 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        je public_633c2d0
        mov dword ptr ds : [public_658a820], edx
        pop ebx
        ret 
        public_633c2e6 : nop
        mov edx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_633c300
        mov edi, edi
        public_633c2f0 : nop
        mov ecx, edx
        mov dword ptr ds : [public_658a820], ecx
        mov edx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        je public_633c2f0
        public_633c300 : nop
        cmp dword ptr ds : [ecx+8], edx
        je public_633c30b
        public_633c305 : nop
        mov dword ptr ds : [public_658a820], edx
        public_633c30b : nop
        pop ebx
        ret 
        public_633c30d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x633c2a0)
    }
}

#undef public_633c2d0
#undef public_633c2e6
#undef public_633c2f0
#undef public_633c300
#undef public_633c305
#undef public_633c30b
#undef public_633c30d
