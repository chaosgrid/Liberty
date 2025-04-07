#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f03530);
CLANG_FORWARD_PROC_SYMBOL(public_6f03550);
CLANG_FORWARD_PROC_SYMBOL(public_6f036c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f03d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f03ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f03b99 _public_6f03b99
#define public_6f03baa _public_6f03baa
#define public_6f03bc4 _public_6f03bc4
#define public_6f03bdb _public_6f03bdb
#define public_6f03c0e _public_6f03c0e
#define public_6f03c12 _public_6f03c12
#define public_6f03c24 _public_6f03c24
#define public_6f03c68 _public_6f03c68
#define public_6f03c7e _public_6f03c7e
#define public_6f03c9e _public_6f03c9e
#define public_6f03ca9 _public_6f03ca9
#define public_6f03cbe _public_6f03cbe
#define public_6f03cde _public_6f03cde
#define public_6f03cef _public_6f03cef
#define public_6f03d1c _public_6f03d1c
#define public_6f03d32 _public_6f03d32
#define public_6f03d3e _public_6f03d3e
#define public_6f03d47 _public_6f03d47
#define public_6f03d4f _public_6f03d4f
#define public_6f03d5b _public_6f03d5b
#define public_6f03d7a _public_6f03d7a

PROC_DECLARE(0x6f03b80, internal_6f03b80, public_6f03b80);
extern "C" NAKED register_t __cdecl internal_6f03b80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+8], esi
        mov ebp, ecx
        jae public_6f03b99
        call dword ptr ds : [public_6fb32e4]
        public_6f03b99 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, eax
        sub ebx, esi
        cmp ecx, ebx
        jae public_6f03baa
        mov ebx, ecx
        public_6f03baa : nop
        cmp ebp, edi
        jne public_6f03c68
        mov eax, dword ptr ss : [ebp+8]
        add ebx, esi
        or edi, 0xFFFFFFFF
        cmp eax, ebx
        jae public_6f03bc4
        call dword ptr ds : [public_6fb32e4]
        public_6f03bc4 : nop
        mov ecx, ebp
        call public_6f03ec0
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, 0xFFFFFFFF
        jae public_6f03bdb
        mov edi, eax
        test edi, edi
        jbe public_6f03c12
        public_6f03bdb : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, ebx
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6fb3388]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_6f03550
        test al, al
        je public_6f03c0e
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+eax], 0
        public_6f03c0e : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_6f03c12 : nop
        mov ecx, ebp
        mov edi, esi
        call public_6f03ec0
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        jae public_6f03c24
        mov edi, eax
        public_6f03c24 : nop
        test edi, edi
        jbe public_6f03d7a
        mov ecx, dword ptr ss : [ebp+4]
        sub eax, edi
        push eax
        lea edx, ds:[ecx+edi]
        push edx
        push ecx
        call dword ptr ds : [public_6fb3388]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_6f03550
        test al, al
        je public_6f03d7a
        push esi
        mov ecx, ebp
        call public_6f03530
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f03c68 : nop
        xor edx, edx
        cmp ebx, edx
        jbe public_6f03cde
        cmp ebx, eax
        jne public_6f03cde
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f03c7e
        mov eax, offset public_6fb8014
        public_6f03c7e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f03cde
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        je public_6f03ca9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f03c9e
        cmp cl, 0xFF
        je public_6f03c9e
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f03ca9
        public_6f03c9e : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        xor edx, edx
        public_6f03ca9 : nop
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        jne public_6f03cbe
        mov eax, offset public_6fb8014
        public_6f03cbe : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        inc cl
        pop esi
        mov byte ptr ds : [eax-1], cl
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f03cde : nop
        mov ecx, ebp
        call public_6f03d90
        cmp eax, ebx
        jae public_6f03cef
        call dword ptr ds : [public_6fb32dc]
        public_6f03cef : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        je public_6f03d1c
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f03d1c
        cmp cl, 0xFF
        je public_6f03d1c
        test ebx, ebx
        jne public_6f03d47
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, ebp
        call public_6f02b10
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f03d1c : nop
        test ebx, ebx
        jne public_6f03d32
        push 1
        mov ecx, ebp
        call public_6f02b10
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6f03d32 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f03d3e
        cmp eax, ebx
        jae public_6f03d4f
        public_6f03d3e : nop
        push 1
        mov ecx, ebp
        call public_6f02b10
        public_6f03d47 : nop
        mov ecx, ebp
        push ebx
        call public_6f036c0
        public_6f03d4f : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f03d5b
        mov eax, offset public_6fb8014
        public_6f03d5b : nop
        mov edi, dword ptr ss : [ebp+4]
        add esi, eax
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6f03d7a : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f03b80)
    }
}

#undef public_6f03b99
#undef public_6f03baa
#undef public_6f03bc4
#undef public_6f03bdb
#undef public_6f03c0e
#undef public_6f03c12
#undef public_6f03c24
#undef public_6f03c68
#undef public_6f03c7e
#undef public_6f03c9e
#undef public_6f03ca9
#undef public_6f03cbe
#undef public_6f03cde
#undef public_6f03cef
#undef public_6f03d1c
#undef public_6f03d32
#undef public_6f03d3e
#undef public_6f03d47
#undef public_6f03d4f
#undef public_6f03d5b
#undef public_6f03d7a
