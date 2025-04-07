#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);
CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f792f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7935b _public_6f7935b
#define public_6f79360 _public_6f79360
#define public_6f79368 _public_6f79368
#define public_6f7937b _public_6f7937b
#define public_6f79388 _public_6f79388
#define public_6f793a1 _public_6f793a1
#define public_6f793b5 _public_6f793b5
#define public_6f79413 _public_6f79413
#define public_6f79470 _public_6f79470
#define public_6f79486 _public_6f79486
#define public_6f794a0 _public_6f794a0
#define public_6f794b5 _public_6f794b5
#define public_6f794c0 _public_6f794c0
#define public_6f794d2 _public_6f794d2
#define public_6f794d8 _public_6f794d8

PROC_DECLARE(0x6f792f0, internal_6f792f0, public_6f792f0);
extern "C" NAKED register_t __cdecl internal_6f792f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        mov ecx, dword ptr ds : [ebx+8]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        jae public_6f79413
        test esi, esi
        je public_6f7935b
        mov edx, ecx
        sub edx, esi
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6f79360
        public_6f7935b : nop
        mov edi, 1
        public_6f79360 : nop
        test esi, esi
        jne public_6f79368
        xor edx, edx
        jmp public_6f7937b
        public_6f79368 : nop
        sub ecx, esi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7937b : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f79388
        xor eax, eax
        public_6f79388 : nop
        imul eax, 0x44
        push eax
        call public_6fa912a
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6f793b5
        public_6f793a1 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebp
        jne public_6f793a1
        public_6f793b5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6f31000
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x44
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_6f30960
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_6ea1490
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        imul eax, 0x44
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6f2fb70
        inc eax
        imul eax, 0x44
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6f794d8
        public_6f79413 : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x78787879
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f79486
        lea edx, ss:[ebp+0x44]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6f30960
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_6f7b1a0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6f794d2
        mov edi, edi
        public_6f79470 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x44
        cmp ebp, eax
        mov ecx, 0x11
        rep movsd
        jne public_6f79470
        jmp public_6f794d2
        public_6f79486 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFBC
        push ecx
        mov ecx, ebx
        call public_6f30960
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x44]
        cmp ebp, eax
        je public_6f794b5
        lea ecx, ds:[ecx]
        public_6f794a0 : nop
        sub eax, 0x44
        sub edx, 0x44
        cmp eax, ebp
        mov ecx, 0x11
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f794a0
        public_6f794b5 : nop
        lea eax, ss:[ebp+0x44]
        cmp ebp, eax
        je public_6f794d2
        mov edx, dword ptr ss : [esp+0x20]
        public_6f794c0 : nop
        mov edi, ebp
        add ebp, 0x44
        cmp ebp, eax
        mov ecx, 0x11
        mov esi, edx
        rep movsd
        jne public_6f794c0
        public_6f794d2 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x44
        public_6f794d8 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x44
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f792f0)
    }
}

#undef public_6f7935b
#undef public_6f79360
#undef public_6f79368
#undef public_6f7937b
#undef public_6f79388
#undef public_6f793a1
#undef public_6f793b5
#undef public_6f79413
#undef public_6f79470
#undef public_6f79486
#undef public_6f794a0
#undef public_6f794b5
#undef public_6f794c0
#undef public_6f794d2
#undef public_6f794d8
