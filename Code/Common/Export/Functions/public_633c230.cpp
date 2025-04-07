#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633c230);

#define public_633c260 _public_633c260
#define public_633c276 _public_633c276
#define public_633c280 _public_633c280
#define public_633c290 _public_633c290
#define public_633c295 _public_633c295
#define public_633c29b _public_633c29b
#define public_633c29d _public_633c29d

PROC_DECLARE(0x633c230, internal_633c230, public_633c230);
extern "C" NAKED register_t __cdecl internal_633c230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658a840]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ds : [public_658a820], ecx
        je public_633c29d
        mov edx, dword ptr ds : [ecx+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x81]
        test bl, bl
        lea eax, ds:[ecx+0x10]
        jne public_633c276
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        jne public_633c295
        mov edi, edi
        public_633c260 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x81]
        test bl, bl
        je public_633c260
        mov dword ptr ds : [public_658a820], edx
        pop ebx
        ret 
        public_633c276 : nop
        mov edx, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_633c290
        mov edi, edi
        public_633c280 : nop
        mov ecx, edx
        mov dword ptr ds : [public_658a820], ecx
        mov edx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        je public_633c280
        public_633c290 : nop
        cmp dword ptr ds : [ecx+8], edx
        je public_633c29b
        public_633c295 : nop
        mov dword ptr ds : [public_658a820], edx
        public_633c29b : nop
        pop ebx
        ret 
        public_633c29d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x633c230)
    }
}

#undef public_633c260
#undef public_633c276
#undef public_633c280
#undef public_633c290
#undef public_633c295
#undef public_633c29b
#undef public_633c29d
