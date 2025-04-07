#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62696a2 _public_62696a2
#define public_62696a7 _public_62696a7
#define public_62696af _public_62696af
#define public_62696b4 _public_62696b4
#define public_62696bf _public_62696bf
#define public_62696de _public_62696de
#define public_62696e2 _public_62696e2
#define public_62696fe _public_62696fe
#define public_6269763 _public_6269763
#define public_6269781 _public_6269781
#define public_62697c0 _public_62697c0
#define public_62697e7 _public_62697e7
#define public_6269800 _public_6269800
#define public_6269815 _public_6269815
#define public_6269822 _public_6269822
#define public_6269834 _public_6269834

PROC_DECLARE(0x6269670, internal_6269670, public_6269670);
extern "C" NAKED register_t __cdecl internal_6269670()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        sub ecx, eax
        sar ecx, 5
        cmp ecx, 1
        push esi
        push edi
        mov ebp, eax
        jae public_6269781
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_62696a2
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_62696a7
        public_62696a2 : nop
        mov ecx, 1
        public_62696a7 : nop
        test edx, edx
        jne public_62696af
        xor eax, eax
        jmp public_62696b4
        public_62696af : nop
        sub eax, edx
        sar eax, 5
        public_62696b4 : nop
        lea esi, ds:[eax+ecx]
        test esi, esi
        mov eax, esi
        jge public_62696bf
        xor eax, eax
        public_62696bf : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ss : [esp+0x18], eax
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_62696fe
        jmp public_62696e2
        public_62696de : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_62696e2 : nop
        push eax
        push edi
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0x20
        add esp, 8
        add edi, 0x20
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jne public_62696de
        public_62696fe : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push 1
        push edi
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        add edi, 0x20
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+4]
        shl esi, 5
        add esi, edx
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6269763
        xor ecx, ecx
        inc ecx
        pop edi
        shl ecx, 5
        pop esi
        add ecx, edx
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 8
        ret 4
        public_6269763 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 5
        inc ecx
        pop edi
        shl ecx, 5
        pop esi
        add ecx, edx
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 8
        ret 4
        public_6269781 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_62697e7
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6269834
        public_62697c0 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_62697c0
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x20
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 8
        ret 4
        public_62697e7 : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_6269815
        lea esp, ss:[esp]
        public_6269800 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6269800
        public_6269815 : nop
        lea edx, ss:[ebp+0x20]
        cmp ebp, edx
        mov eax, ebp
        je public_6269834
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6269822 : nop
        mov edi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        mov esi, ebp
        rep movsd
        jne public_6269822
        public_6269834 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x20
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6269670)
    }
}

#undef public_62696a2
#undef public_62696a7
#undef public_62696af
#undef public_62696b4
#undef public_62696bf
#undef public_62696de
#undef public_62696e2
#undef public_62696fe
#undef public_6269763
#undef public_6269781
#undef public_62697c0
#undef public_62697e7
#undef public_6269800
#undef public_6269815
#undef public_6269822
#undef public_6269834
