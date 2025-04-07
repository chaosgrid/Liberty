#include "Server-PCH.h"


#define public_6d5c3c2 _public_6d5c3c2
#define public_6d5c3f0 _public_6d5c3f0
#define public_6d5c3fd _public_6d5c3fd
#define public_6d5c405 _public_6d5c405
#define public_6d5c40f _public_6d5c40f
#define public_6d5c416 _public_6d5c416
#define public_6d5c41a _public_6d5c41a
#define public_6d5c420 _public_6d5c420

PROC_DECLARE(0x6d5c3b0, internal_6d5c3b0, public_6d5c3b0);
extern "C" NAKED register_t __cdecl internal_6d5c3b0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push ebx
        push esi
        push edi
        je public_6d5c41a
        mov esi, dword ptr ds : [public_6d90260]
        public_6d5c3c2 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0x418
        mov edi, dword ptr ds : [ecx+esi-0xC]
        test edi, edi
        lea ecx, ds:[ecx+esi-0x418]
        jne public_6d5c420
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6d5c3fd
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_6d5c416
        nop 
        public_6d5c3f0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6d5c3f0
        jmp public_6d5c416
        public_6d5c3fd : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5c40f
        public_6d5c405 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5c405
        public_6d5c40f : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5c416
        mov eax, ecx
        public_6d5c416 : nop
        cmp eax, edx
        jne public_6d5c3c2
        public_6d5c41a : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d5c420 : nop
        mov eax, dword ptr ds : [ecx+0x40C]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5c3b0)
    }
}

#undef public_6d5c3c2
#undef public_6d5c3f0
#undef public_6d5c3fd
#undef public_6d5c405
#undef public_6d5c40f
#undef public_6d5c416
#undef public_6d5c41a
#undef public_6d5c420
