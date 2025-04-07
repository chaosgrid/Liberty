#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d115f0 _public_6d115f0
#define public_6d115f9 _public_6d115f9
#define public_6d115fb _public_6d115fb
#define public_6d11610 _public_6d11610
#define public_6d11617 _public_6d11617
#define public_6d1162a _public_6d1162a
#define public_6d11633 _public_6d11633
#define public_6d11637 _public_6d11637
#define public_6d11650 _public_6d11650
#define public_6d11661 _public_6d11661

PROC_DECLARE(0x6d115e0, internal_6d115e0, public_6d115e0);
extern "C" NAKED register_t __cdecl internal_6d115e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        lea esp, ss:[esp]
        public_6d115f0 : nop
        cmp esi, ebx
        jne public_6d115f9
        mov esi, dword ptr ds : [edi+4]
        jmp public_6d115fb
        public_6d115f9 : nop
        mov esi, dword ptr ds : [esi]
        public_6d115fb : nop
        cmp esi, ebx
        je public_6d11610
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_6d115f0
        public_6d11610 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6d11637
        public_6d11617 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d1162a
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6d11633
        public_6d1162a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d11633 : nop
        cmp esi, ebx
        jne public_6d11617
        public_6d11637 : nop
        mov esi, dword ptr ds : [edi+0x10]
        cmp esi, ebx
        mov dword ptr ds : [edi], offset public_6d68324
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        je public_6d11661
        lea ebx, ds:[ebx]
        public_6d11650 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp esi, ebx
        jne public_6d11650
        public_6d11661 : nop
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d115e0)
    }
}

#undef public_6d115f0
#undef public_6d115f9
#undef public_6d115fb
#undef public_6d11610
#undef public_6d11617
#undef public_6d1162a
#undef public_6d11633
#undef public_6d11637
#undef public_6d11650
#undef public_6d11661
