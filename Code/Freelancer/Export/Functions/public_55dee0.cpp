#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e7c0);
CLANG_FORWARD_PROC_SYMBOL(public_55e800);
CLANG_FORWARD_PROC_SYMBOL(public_55e8b0);
CLANG_FORWARD_PROC_SYMBOL(public_58f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_55df6d _public_55df6d
#define public_55df72 _public_55df72
#define public_55df7a _public_55df7a
#define public_55df8f _public_55df8f
#define public_55df9c _public_55df9c
#define public_55dfb5 _public_55dfb5
#define public_55dfc9 _public_55dfc9
#define public_55e030 _public_55e030
#define public_55e091 _public_55e091
#define public_55e0b8 _public_55e0b8
#define public_55e0d0 _public_55e0d0
#define public_55e0e5 _public_55e0e5
#define public_55e0f0 _public_55e0f0
#define public_55e104 _public_55e104

PROC_DECLARE(0x55dee0, internal_55dee0, public_55dee0);
extern "C" NAKED register_t __cdecl internal_55dee0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+8], edx
        mov edx, dword ptr ds : [eax]
        push ebx
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push ebp
        lea ebx, ds:[ecx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], edx
        sub esi, ecx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        mov ebp, ecx
        jae public_55e030
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        je public_55df6d
        mov esi, ecx
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov esi, edx
        ja public_55df72
        public_55df6d : nop
        mov esi, 1
        public_55df72 : nop
        test edi, edi
        jne public_55df7a
        xor edx, edx
        jmp public_55df8f
        public_55df7a : nop
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_55df8f : nop
        lea eax, ds:[edx+esi]
        test eax, eax
        mov dword ptr ss : [esp+0x30], eax
        jge public_55df9c
        xor eax, eax
        public_55df9c : nop
        imul eax, 0x1C
        push eax
        call public_5b7e84
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x34], eax
        mov edi, eax
        je public_55dfc9
        public_55dfb5 : nop
        push esi
        push edi
        call public_55e8b0
        add esi, 0x1C
        add esp, 8
        add edi, 0x1C
        cmp esi, ebp
        jne public_55dfb5
        public_55dfc9 : nop
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push edi
        mov ecx, ebx
        call public_55e800
        mov eax, dword ptr ds : [ebx+8]
        add edi, 0x1C
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_55e7c0
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_53aaa0
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x38]
        imul eax, 0x1C
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_58f9e0
        inc eax
        imul eax, 0x1C
        pop edi
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_55e030 : nop
        mov esi, ecx
        sub esi, ebp
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_55e0b8
        lea edx, ss:[ebp+0x1C]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_55e7c0
        mov esi, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_55e800
        mov edx, dword ptr ds : [ebx+8]
        cmp ebp, edx
        mov eax, ebp
        je public_55e104
        public_55e091 : nop
        mov edi, eax
        add eax, 0x1C
        cmp eax, edx
        mov ecx, 7
        lea esi, ss:[esp+0x10]
        rep movsd
        jne public_55e091
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x1C
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_55e0b8 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE4
        push ecx
        mov ecx, ebx
        call public_55e7c0
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x1C]
        cmp ebp, eax
        je public_55e0e5
        nop 
        public_55e0d0 : nop
        sub eax, 0x1C
        sub edx, 0x1C
        cmp eax, ebp
        mov ecx, 7
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_55e0d0
        public_55e0e5 : nop
        lea edx, ss:[ebp+0x1C]
        cmp ebp, edx
        mov eax, ebp
        je public_55e104
        mov edi, edi
        public_55e0f0 : nop
        mov edi, eax
        add eax, 0x1C
        cmp eax, edx
        mov ecx, 7
        lea esi, ss:[esp+0x10]
        rep movsd
        jne public_55e0f0
        public_55e104 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        pop esi
        add eax, 0x1C
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x55dee0)
    }
}

#undef public_55df6d
#undef public_55df72
#undef public_55df7a
#undef public_55df8f
#undef public_55df9c
#undef public_55dfb5
#undef public_55dfc9
#undef public_55e030
#undef public_55e091
#undef public_55e0b8
#undef public_55e0d0
#undef public_55e0e5
#undef public_55e0f0
#undef public_55e104
