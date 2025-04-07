#include "Server-PCH.h"


#define public_6d5c342 _public_6d5c342
#define public_6d5c370 _public_6d5c370
#define public_6d5c37d _public_6d5c37d
#define public_6d5c385 _public_6d5c385
#define public_6d5c38f _public_6d5c38f
#define public_6d5c396 _public_6d5c396
#define public_6d5c39a _public_6d5c39a
#define public_6d5c3a0 _public_6d5c3a0

PROC_DECLARE(0x6d5c330, internal_6d5c330, public_6d5c330);
extern "C" NAKED register_t __cdecl internal_6d5c330()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebx
        push esi
        push edi
        je public_6d5c39a
        mov esi, dword ptr ds : [public_6d90260]
        public_6d5c342 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0x418
        mov edi, dword ptr ds : [ecx+esi-0x10]
        test edi, edi
        lea ecx, ds:[ecx+esi-0x418]
        jne public_6d5c3a0
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6d5c37d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6d5c396
        nop 
        public_6d5c370 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6d5c370
        jmp public_6d5c396
        public_6d5c37d : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5c38f
        public_6d5c385 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5c385
        public_6d5c38f : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5c396
        mov eax, ecx
        public_6d5c396 : nop
        cmp eax, edx
        jne public_6d5c342
        public_6d5c39a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d5c3a0 : nop
        mov eax, dword ptr ds : [ecx+0x408]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5c330)
    }
}

#undef public_6d5c342
#undef public_6d5c370
#undef public_6d5c37d
#undef public_6d5c385
#undef public_6d5c38f
#undef public_6d5c396
#undef public_6d5c39a
#undef public_6d5c3a0
