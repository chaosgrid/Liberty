#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b72dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b764e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76bb0);

#define public_6b75a9d _public_6b75a9d
#define public_6b75ad1 _public_6b75ad1
#define public_6b75adf _public_6b75adf
#define public_6b75ae8 _public_6b75ae8
#define public_6b75b00 _public_6b75b00
#define public_6b75b17 _public_6b75b17
#define public_6b75b1b _public_6b75b1b
#define public_6b75b2b _public_6b75b2b
#define public_6b75b2e _public_6b75b2e
#define public_6b75b33 _public_6b75b33
#define public_6b75b4d _public_6b75b4d
#define public_6b75b66 _public_6b75b66
#define public_6b75b75 _public_6b75b75
#define public_6b75b7a _public_6b75b7a
#define public_6b75b88 _public_6b75b88
#define public_6b75b9b _public_6b75b9b
#define public_6b75b9f _public_6b75b9f
#define public_6b75bae _public_6b75bae
#define public_6b75bc3 _public_6b75bc3
#define public_6b75bc6 _public_6b75bc6
#define public_6b75c84 _public_6b75c84
#define public_6b75c87 _public_6b75c87
#define public_6b75c91 _public_6b75c91
#define public_6b75c9d _public_6b75c9d
#define public_6b75cea _public_6b75cea
#define public_6b75cf1 _public_6b75cf1

PROC_DECLARE(0x6b75a70, internal_6b75a70, public_6b75a70);
extern "C" NAKED register_t __cdecl internal_6b75a70()
{
    __asm
    {
        sub esp, 0x144
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x158]
        test edi, edi
        jne public_6b75a9d
        mov eax, dword ptr ss : [esp+0x154]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [eax+0x130]
        add esp, 0x144
        ret 8
        public_6b75a9d : nop
        mov esi, dword ptr ss : [esp+0x154]
        mov eax, dword ptr ds : [esi+0x128]
        test eax, eax
        jne public_6b75c84
        mov edx, dword ptr ds : [edi+0xC]
        test edx, edx
        je public_6b75c84
        mov al, byte ptr ds : [edx]
        test al, al
        je public_6b75adf
        cmp al, 0x5C
        je public_6b75ad1
        cmp al, 0x2F
        je public_6b75ad1
        cmp byte ptr ds : [edx+1], 0x3A
        jne public_6b75adf
        public_6b75ad1 : nop
        push 0x104
        lea ecx, ss:[esp+0x4C]
        jmp public_6b75bae
        public_6b75adf : nop
        mov cl, byte ptr ds : [esi+0xD]
        xor eax, eax
        test cl, cl
        je public_6b75b00
        public_6b75ae8 : nop
        cmp eax, 0x103
        jge public_6b75c84
        mov byte ptr ss : [esp+eax+0x48], cl
        mov cl, byte ptr ds : [esi+eax+0xE]
        inc eax
        test cl, cl
        jne public_6b75ae8
        public_6b75b00 : nop
        lea ecx, ss:[esp+eax+0x48]
        lea eax, ss:[esp+0x48]
        cmp ecx, eax
        je public_6b75b17
        mov al, byte ptr ds : [ecx-1]
        cmp al, 0x5C
        je public_6b75b1b
        cmp al, 0x2F
        je public_6b75b1b
        public_6b75b17 : nop
        mov byte ptr ds : [ecx], 0x5C
        inc ecx
        public_6b75b1b : nop
        cmp byte ptr ds : [edx], 0x2E
        jne public_6b75b88
        mov al, byte ptr ds : [edx+1]
        cmp al, 0x5C
        je public_6b75b2b
        cmp al, 0x2F
        jne public_6b75b2e
        public_6b75b2b : nop
        add edx, 2
        public_6b75b2e : nop
        cmp byte ptr ds : [edx], 0x2E
        jne public_6b75b88
        public_6b75b33 : nop
        cmp byte ptr ds : [edx+1], 0x2E
        jne public_6b75b88
        mov eax, ecx
        lea ebp, ss:[esp+0x48]
        sub eax, ebp
        cmp eax, 2
        jle public_6b75c84
        sub ecx, 2
        public_6b75b4d : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x5C
        je public_6b75b66
        cmp al, 0x2F
        je public_6b75b66
        lea eax, ss:[esp+0x48]
        cmp ecx, eax
        je public_6b75c84
        dec ecx
        jmp public_6b75b4d
        public_6b75b66 : nop
        mov al, byte ptr ds : [edx+2]
        cmp al, 0x5C
        je public_6b75b75
        cmp al, 0x2F
        je public_6b75b75
        xor eax, eax
        jmp public_6b75b7a
        public_6b75b75 : nop
        mov eax, 1
        public_6b75b7a : nop
        and eax, 0xFF
        lea edx, ds:[edx+eax+2]
        cmp byte ptr ds : [edx], 0x2E
        je public_6b75b33
        public_6b75b88 : nop
        lea eax, ss:[esp+0x48]
        cmp ecx, eax
        je public_6b75b9b
        mov al, byte ptr ds : [ecx-1]
        cmp al, 0x5C
        je public_6b75b9f
        cmp al, 0x2F
        je public_6b75b9f
        public_6b75b9b : nop
        mov byte ptr ds : [ecx], 0x5C
        inc ecx
        public_6b75b9f : nop
        lea eax, ss:[esp+0x14C]
        sub eax, ecx
        cmp eax, 1
        jle public_6b75bc3
        push eax
        public_6b75bae : nop
        push edx
        push ecx
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ss : [esp+0x14B], 0
        jmp public_6b75bc6
        public_6b75bc3 : nop
        mov byte ptr ds : [ecx], 0
        public_6b75bc6 : nop
        lea ecx, ss:[esp+0x48]
        push ecx
        call dword ptr ds : [public_6b7903c]
        cmp eax, 0xFFFFFFFF
        je public_6b75c84
        test al, 0x10
        jne public_6b75c84
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [edi+0x1C]
        push edx
        mov edx, dword ptr ds : [edi+0x18]
        push eax
        mov eax, dword ptr ds : [edi+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+0x10]
        push edx
        push eax
        lea edx, ss:[esp+0x5C]
        push ecx
        push edx
        call dword ptr ds : [public_6b79030]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_6b75cf1
        lea ecx, ss:[esp+0x20]
        call public_6b72dc0
        mov edx, dword ptr ss : [esp+0x154]
        mov ecx, 5
        lea esi, ss:[esp+0x1C]
        lea edi, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], ebp
        rep movsd
        lea eax, ss:[esp+0x30]
        lea ecx, ss:[esp+0xC]
        push eax
        push ecx
        lea ecx, ds:[edx+0x134]
        call public_6b764e0
        lea eax, ss:[esp+0x10]
        lea ecx, ss:[esp+0xC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6b76bb0
        lea ecx, ss:[esp+0x38]
        call public_6b72dd0
        lea ecx, ss:[esp+0x20]
        call public_6b72dd0
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jne public_6b75c9d
        mov esi, dword ptr ss : [esp+0x154]
        public_6b75c84 : nop
        or eax, 0xFFFFFFFF
        public_6b75c87 : nop
        mov dword ptr ds : [esi+0x11C], 2
        public_6b75c91 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x144
        ret 8
        public_6b75c9d : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x10], ebp
        test ebp, ebp
        lea esi, ds:[edx+0x10]
        je public_6b75cea
        push 0
        push 0
        push 0
        push 2
        push 0
        push ebp
        call dword ptr ds : [public_6b7902c]
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        je public_6b75cea
        push 0
        push ebp
        call dword ptr ds : [public_6b79028]
        push eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [esi+4]
        push 0
        push 0
        push 4
        push eax
        call dword ptr ds : [public_6b79024]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0x10], 0
        public_6b75cea : nop
        mov esi, dword ptr ss : [esp+0x154]
        public_6b75cf1 : nop
        cmp ebp, 0xFFFFFFFF
        mov eax, ebp
        jne public_6b75c91
        jmp public_6b75c87
        UNREACHABLE_TRAP(0x6b75a70)
    }
}

#undef public_6b75a9d
#undef public_6b75ad1
#undef public_6b75adf
#undef public_6b75ae8
#undef public_6b75b00
#undef public_6b75b17
#undef public_6b75b1b
#undef public_6b75b2b
#undef public_6b75b2e
#undef public_6b75b33
#undef public_6b75b4d
#undef public_6b75b66
#undef public_6b75b75
#undef public_6b75b7a
#undef public_6b75b88
#undef public_6b75b9b
#undef public_6b75b9f
#undef public_6b75bae
#undef public_6b75bc3
#undef public_6b75bc6
#undef public_6b75c84
#undef public_6b75c87
#undef public_6b75c91
#undef public_6b75c9d
#undef public_6b75cea
#undef public_6b75cf1
