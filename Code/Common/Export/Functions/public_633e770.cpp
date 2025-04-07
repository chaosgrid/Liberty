#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_633e770);
CLANG_FORWARD_PROC_SYMBOL(public_633f540);
CLANG_FORWARD_PROC_SYMBOL(public_6340be0);
CLANG_FORWARD_PROC_SYMBOL(public_6341030);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_633e7af _public_633e7af
#define public_633e7b4 _public_633e7b4
#define public_633e7bc _public_633e7bc
#define public_633e7c1 _public_633e7c1
#define public_633e7cd _public_633e7cd
#define public_633e7e6 _public_633e7e6
#define public_633e7fa _public_633e7fa
#define public_633e858 _public_633e858
#define public_633e897 _public_633e897
#define public_633e8ad _public_633e8ad
#define public_633e8c2 _public_633e8c2
#define public_633e8d7 _public_633e8d7
#define public_633e8e2 _public_633e8e2
#define public_633e8f4 _public_633e8f4
#define public_633e8fa _public_633e8fa

PROC_DECLARE(0x633e770, internal_633e770, public_633e770);
extern "C" NAKED register_t __cdecl internal_633e770()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        sub eax, edx
        sar eax, 5
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, 1
        push esi
        push edi
        jae public_633e858
        test edx, edx
        je public_633e7af
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_633e7b4
        public_633e7af : nop
        mov ecx, 1
        public_633e7b4 : nop
        test edx, edx
        jne public_633e7bc
        xor eax, eax
        jmp public_633e7c1
        public_633e7bc : nop
        sub eax, edx
        sar eax, 5
        public_633e7c1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_633e7cd
        xor eax, eax
        public_633e7cd : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_633e7fa
        public_633e7e6 : nop
        push esi
        push edi
        call public_6341030
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_633e7e6
        public_633e7fa : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6341030
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x20
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_633f540
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_633e8fa
        public_633e858 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_633e8ad
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call public_633f540
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebx
        call public_6340be0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_633e8f4
        public_633e897 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_633e897
        jmp public_633e8f4
        public_633e8ad : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_633f540
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_633e8d7
        public_633e8c2 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_633e8c2
        public_633e8d7 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_633e8f4
        mov edx, dword ptr ss : [esp+0x20]
        public_633e8e2 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        mov esi, edx
        rep movsd
        jne public_633e8e2
        public_633e8f4 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_633e8fa : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        shl eax, 5
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x633e770)
    }
}

#undef public_633e7af
#undef public_633e7b4
#undef public_633e7bc
#undef public_633e7c1
#undef public_633e7cd
#undef public_633e7e6
#undef public_633e7fa
#undef public_633e858
#undef public_633e897
#undef public_633e8ad
#undef public_633e8c2
#undef public_633e8d7
#undef public_633e8e2
#undef public_633e8f4
#undef public_633e8fa
