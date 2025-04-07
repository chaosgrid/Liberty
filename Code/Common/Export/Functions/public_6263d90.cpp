#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6263dad _public_6263dad
#define public_6263db5 _public_6263db5
#define public_6263dc0 _public_6263dc0
#define public_6263dc8 _public_6263dc8
#define public_6263dd5 _public_6263dd5
#define public_6263dee _public_6263dee
#define public_6263e0b _public_6263e0b
#define public_6263e27 _public_6263e27
#define public_6263e2f _public_6263e2f
#define public_6263e37 _public_6263e37
#define public_6263e3f _public_6263e3f
#define public_6263e47 _public_6263e47
#define public_6263e57 _public_6263e57
#define public_6263e5f _public_6263e5f
#define public_6263e70 _public_6263e70
#define public_6263e89 _public_6263e89
#define public_6263e95 _public_6263e95
#define public_6263ea9 _public_6263ea9
#define public_6263eca _public_6263eca
#define public_6263ee6 _public_6263ee6
#define public_6263efa _public_6263efa
#define public_6263f02 _public_6263f02
#define public_6263f08 _public_6263f08
#define public_6263f2d _public_6263f2d

PROC_DECLARE(0x6263d90, internal_6263d90, public_6263d90);
extern "C" NAKED register_t __cdecl internal_6263d90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        cmp ebp, edi
        je public_6263f2d
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6263dad
        xor edx, edx
        jmp public_6263db5
        public_6263dad : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        sar edx, 5
        public_6263db5 : nop
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6263dc0
        xor ecx, ecx
        jmp public_6263dc8
        public_6263dc0 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        sar ecx, 5
        public_6263dc8 : nop
        cmp edx, ecx
        ja public_6263e27
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov edx, esi
        je public_6263dee
        public_6263dd5 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_6263dd5
        mov edi, dword ptr ss : [esp+0x14]
        public_6263dee : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6263e0b
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        shl eax, 5
        pop edi
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        public_6263e0b : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        sar eax, 5
        shl eax, 5
        pop edi
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        public_6263e27 : nop
        test eax, eax
        jne public_6263e2f
        xor edx, edx
        jmp public_6263e37
        public_6263e2f : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        sar edx, 5
        public_6263e37 : nop
        test esi, esi
        jne public_6263e3f
        xor ecx, ecx
        jmp public_6263e47
        public_6263e3f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, esi
        sar ecx, 5
        public_6263e47 : nop
        cmp edx, ecx
        ja public_6263ee6
        test esi, esi
        jne public_6263e57
        xor ecx, ecx
        jmp public_6263e5f
        public_6263e57 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        sar ecx, 5
        public_6263e5f : nop
        shl ecx, 5
        add ecx, eax
        mov edx, ecx
        cmp eax, edx
        mov ebx, esi
        je public_6263e89
        lea esp, ss:[esp]
        public_6263e70 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x20
        mov ecx, 8
        add ebx, 0x20
        cmp eax, edx
        rep movsd
        jne public_6263e70
        mov edi, dword ptr ss : [esp+0x14]
        public_6263e89 : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp edx, ebx
        mov edi, dword ptr ss : [ebp+8]
        mov esi, edx
        je public_6263ea9
        public_6263e95 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_6263e95
        public_6263ea9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6263eca
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        shl eax, 5
        pop edi
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        public_6263eca : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        sar eax, 5
        shl eax, 5
        pop edi
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        public_6263ee6 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6263efa
        xor eax, eax
        jmp public_6263f02
        public_6263efa : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 5
        public_6263f02 : nop
        test eax, eax
        jge public_6263f08
        xor eax, eax
        public_6263f08 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_626a570
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp+8], eax
        public_6263f2d : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6263d90)
    }
}

#undef public_6263dad
#undef public_6263db5
#undef public_6263dc0
#undef public_6263dc8
#undef public_6263dd5
#undef public_6263dee
#undef public_6263e0b
#undef public_6263e27
#undef public_6263e2f
#undef public_6263e37
#undef public_6263e3f
#undef public_6263e47
#undef public_6263e57
#undef public_6263e5f
#undef public_6263e70
#undef public_6263e89
#undef public_6263e95
#undef public_6263ea9
#undef public_6263eca
#undef public_6263ee6
#undef public_6263efa
#undef public_6263f02
#undef public_6263f08
#undef public_6263f2d
