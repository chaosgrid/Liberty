#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12df0);

#define public_6d12e10 _public_6d12e10
#define public_6d12e30 _public_6d12e30
#define public_6d12e31 _public_6d12e31
#define public_6d12e46 _public_6d12e46
#define public_6d12e53 _public_6d12e53
#define public_6d12e60 _public_6d12e60
#define public_6d12e6a _public_6d12e6a
#define public_6d12e71 _public_6d12e71
#define public_6d12e77 _public_6d12e77

PROC_DECLARE(0x6d12df0, internal_6d12df0, public_6d12df0);
extern "C" NAKED register_t __cdecl internal_6d12df0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax]
        add edi, 0x10
        xor ebp, ebp
        cmp esi, eax
        je public_6d12e77
        push ebx
        mov ebx, dword ptr ds : [public_6d64774]
        nop 
        lea esp, ss:[esp]
        public_6d12e10 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d12e31
        mov ecx, dword ptr ds : [eax+0x4C]
        test ecx, ecx
        jne public_6d12e31
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d12e30
        cmp eax, 1
        jne public_6d12e31
        public_6d12e30 : nop
        inc ebp
        public_6d12e31 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6d12e53
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6d12e71
        public_6d12e46 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        je public_6d12e46
        jmp public_6d12e71
        public_6d12e53 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d12e6a
        nop 
        lea esp, ss:[esp]
        public_6d12e60 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d12e60
        public_6d12e6a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d12e71
        mov esi, eax
        public_6d12e71 : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_6d12e10
        pop ebx
        public_6d12e77 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d12df0)
    }
}

#undef public_6d12e10
#undef public_6d12e30
#undef public_6d12e31
#undef public_6d12e46
#undef public_6d12e53
#undef public_6d12e60
#undef public_6d12e6a
#undef public_6d12e71
#undef public_6d12e77
