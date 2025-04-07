#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62c0c5a _public_62c0c5a
#define public_62c0c5c _public_62c0c5c
#define public_62c0c9c _public_62c0c9c
#define public_62c0ca4 _public_62c0ca4
#define public_62c0caf _public_62c0caf
#define public_62c0cb7 _public_62c0cb7
#define public_62c0cc4 _public_62c0cc4
#define public_62c0cdd _public_62c0cdd
#define public_62c0cfa _public_62c0cfa
#define public_62c0d16 _public_62c0d16
#define public_62c0d1e _public_62c0d1e
#define public_62c0d26 _public_62c0d26
#define public_62c0d2e _public_62c0d2e
#define public_62c0d36 _public_62c0d36
#define public_62c0d46 _public_62c0d46
#define public_62c0d4e _public_62c0d4e
#define public_62c0d60 _public_62c0d60
#define public_62c0d75 _public_62c0d75
#define public_62c0d85 _public_62c0d85
#define public_62c0d9d _public_62c0d9d
#define public_62c0dba _public_62c0dba
#define public_62c0dd6 _public_62c0dd6
#define public_62c0dea _public_62c0dea
#define public_62c0df2 _public_62c0df2
#define public_62c0df8 _public_62c0df8
#define public_62c0e1d _public_62c0e1d
#define public_62c0e26 _public_62c0e26

PROC_DECLARE(0x62c0c00, internal_62c0c00, public_62c0c00);
extern "C" NAKED register_t __cdecl internal_62c0c00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        push ebp
        push esi
        mov esi, 0xFFFFFFFD
        je public_62c0e26
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c0e26
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call public_629b720
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov ebp, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62c0c5a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_62c0c5c
        public_62c0c5a : nop
        xor eax, eax
        public_62c0c5c : nop
        test ebp, ebp
        je public_62c0e26
        test eax, eax
        je public_62c0e26
        push eax
        mov ecx, ebp
        call public_629f8c0
        cmp eax, 2
        jne public_62c0e26
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        add ebp, 0x82C
        cmp edi, ebp
        je public_62c0e1d
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_62c0c9c
        xor edx, edx
        jmp public_62c0ca4
        public_62c0c9c : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 5
        public_62c0ca4 : nop
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_62c0caf
        xor ecx, ecx
        jmp public_62c0cb7
        public_62c0caf : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, esi
        sar ecx, 5
        public_62c0cb7 : nop
        cmp edx, ecx
        ja public_62c0d16
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov edx, esi
        je public_62c0cdd
        public_62c0cc4 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_62c0cc4
        mov edi, dword ptr ss : [esp+0x18]
        public_62c0cdd : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_62c0cfa
        mov ecx, dword ptr ds : [edi+4]
        xor eax, eax
        shl eax, 5
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        public_62c0cfa : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [edi+4]
        sar eax, 5
        shl eax, 5
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        public_62c0d16 : nop
        test eax, eax
        jne public_62c0d1e
        xor edx, edx
        jmp public_62c0d26
        public_62c0d1e : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 5
        public_62c0d26 : nop
        test esi, esi
        jne public_62c0d2e
        xor ecx, ecx
        jmp public_62c0d36
        public_62c0d2e : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, esi
        sar ecx, 5
        public_62c0d36 : nop
        cmp edx, ecx
        ja public_62c0dd6
        test esi, esi
        jne public_62c0d46
        xor ecx, ecx
        jmp public_62c0d4e
        public_62c0d46 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, esi
        sar ecx, 5
        public_62c0d4e : nop
        shl ecx, 5
        add ecx, eax
        mov edx, ecx
        cmp eax, edx
        mov ebx, esi
        je public_62c0d75
        nop 
        lea esp, ss:[esp]
        public_62c0d60 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp eax, edx
        rep movsd
        jne public_62c0d60
        public_62c0d75 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edx, ebx
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edx
        je public_62c0d9d
        public_62c0d85 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_62c0d85
        mov ecx, dword ptr ss : [esp+0x18]
        public_62c0d9d : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_62c0dba
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        pop edi
        shl eax, 5
        pop ebx
        add eax, edx
        pop esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop ebp
        ret 8
        public_62c0dba : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, edx
        mov edx, dword ptr ds : [ecx+4]
        sar eax, 5
        pop edi
        shl eax, 5
        pop ebx
        add eax, edx
        pop esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        pop ebp
        ret 8
        public_62c0dd6 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_62c0dea
        xor eax, eax
        jmp public_62c0df2
        public_62c0dea : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 5
        public_62c0df2 : nop
        test eax, eax
        jge public_62c0df8
        xor eax, eax
        public_62c0df8 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, edi
        call public_626a570
        mov dword ptr ds : [edi+0xC], eax
        mov dword ptr ds : [edi+8], eax
        public_62c0e1d : nop
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        public_62c0e26 : nop
        mov eax, esi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x62c0c00)
    }
}

#undef public_62c0c5a
#undef public_62c0c5c
#undef public_62c0c9c
#undef public_62c0ca4
#undef public_62c0caf
#undef public_62c0cb7
#undef public_62c0cc4
#undef public_62c0cdd
#undef public_62c0cfa
#undef public_62c0d16
#undef public_62c0d1e
#undef public_62c0d26
#undef public_62c0d2e
#undef public_62c0d36
#undef public_62c0d46
#undef public_62c0d4e
#undef public_62c0d60
#undef public_62c0d75
#undef public_62c0d85
#undef public_62c0d9d
#undef public_62c0dba
#undef public_62c0dd6
#undef public_62c0dea
#undef public_62c0df2
#undef public_62c0df8
#undef public_62c0e1d
#undef public_62c0e26
