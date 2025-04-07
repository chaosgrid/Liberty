#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2830);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f28ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f28b60 _public_6f28b60
#define public_6f28b68 _public_6f28b68
#define public_6f28b98 _public_6f28b98
#define public_6f28bb0 _public_6f28bb0
#define public_6f28bc9 _public_6f28bc9
#define public_6f28c1e _public_6f28c1e
#define public_6f28c23 _public_6f28c23
#define public_6f28c34 _public_6f28c34
#define public_6f28cb2 _public_6f28cb2
#define public_6f28d1a _public_6f28d1a
#define public_6f28d47 _public_6f28d47
#define public_6f28d4d _public_6f28d4d
#define public_6f28d50 _public_6f28d50
#define public_6f28d62 _public_6f28d62

PROC_DECLARE(0x6f28ae0, internal_6f28ae0, public_6f28ae0);
extern "C" NAKED register_t __cdecl internal_6f28ae0()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        mov ebp, ecx
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6efd1a0
        add esp, 8
        test eax, eax
        mov dword ptr ss : [ebp+0x10C], eax
        je public_6f28d62
        mov edx, dword ptr ds : [eax+0x38]
        test edx, edx
        je public_6f28d62
        mov ecx, dword ptr ds : [eax+0x3C]
        sub ecx, edx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        je public_6f28d62
        mov ebx, 1
        inc edx
        cmp edx, ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x1C], edx
        jl public_6f28d62
        push edi
        jmp public_6f28b68
        public_6f28b60 : nop
        mov esi, dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f28b68 : nop
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f28d50
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], eax
        mov byte ptr ss : [esp+0x28], al
        jne public_6f28b98
        mov byte ptr ss : [esp+0x28], al
        jmp public_6f28bc9
        public_6f28b98 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f28bb0
        mov eax, 0x2F
        public_6f28bb0 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x28]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x28], 0
        public_6f28bc9 : nop
        mov ecx, dword ptr ss : [ebp+0x118]
        mov edx, dword ptr ss : [ebp+0x11C]
        lea esi, ss:[ebp+0x110]
        mov dword ptr ss : [esp+0x24], eax
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, ecx
        jae public_6f28cb2
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f28c1e
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 1
        mov ebx, edx
        ja public_6f28c23
        public_6f28c1e : nop
        mov ebx, 1
        public_6f28c23 : nop
        mov ecx, esi
        call public_6ed2800
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_6f28c34
        xor eax, eax
        public_6f28c34 : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push edx
        mov ecx, esi
        call public_6f28e30
        lea ecx, ss:[esp+0x24]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        call public_6ed2830
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+8]
        add edx, 0x34
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6f28e30
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        imul ebp, 0x34
        add ebp, ebx
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], ebp
        call public_6ed2800
        inc eax
        imul eax, 0x34
        add eax, ebx
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x10]
        jmp public_6f28d4d
        public_6f28cb2 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f28d1a
        lea edx, ds:[edi+0x34]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f28e30
        mov ebp, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push ebp
        mov ecx, esi
        call public_6ed2830
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        push edi
        call public_6f28e70
        add esp, 0xC
        jmp public_6f28d47
        public_6f28d1a : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFCC
        push ecx
        mov ecx, esi
        call public_6f28e30
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFCC
        push eax
        push edi
        call public_6f28ee0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ds:[edi+0x34]
        push ecx
        push edi
        call public_6f28e70
        add esp, 0x18
        public_6f28d47 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x34
        public_6f28d4d : nop
        mov dword ptr ds : [esi+8], eax
        public_6f28d50 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc ebx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jle public_6f28b60
        pop edi
        public_6f28d62 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x6f28ae0)
    }
}

#undef public_6f28b60
#undef public_6f28b68
#undef public_6f28b98
#undef public_6f28bb0
#undef public_6f28bc9
#undef public_6f28c1e
#undef public_6f28c23
#undef public_6f28c34
#undef public_6f28cb2
#undef public_6f28d1a
#undef public_6f28d47
#undef public_6f28d4d
#undef public_6f28d50
#undef public_6f28d62
