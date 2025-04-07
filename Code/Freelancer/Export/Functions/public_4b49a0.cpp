#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b49a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4e50);
CLANG_FORWARD_PROC_SYMBOL(public_4b4e90);
CLANG_FORWARD_PROC_SYMBOL(public_4b4ec0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_587380);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4b49df _public_4b49df
#define public_4b49e4 _public_4b49e4
#define public_4b49ec _public_4b49ec
#define public_4b49f1 _public_4b49f1
#define public_4b49fd _public_4b49fd
#define public_4b4a16 _public_4b4a16
#define public_4b4a2a _public_4b4a2a
#define public_4b4a88 _public_4b4a88
#define public_4b4ac7 _public_4b4ac7
#define public_4b4add _public_4b4add
#define public_4b4af2 _public_4b4af2
#define public_4b4b07 _public_4b4b07
#define public_4b4b12 _public_4b4b12
#define public_4b4b24 _public_4b4b24
#define public_4b4b2a _public_4b4b2a

PROC_DECLARE(0x4b49a0, internal_4b49a0, public_4b49a0);
extern "C" NAKED register_t __cdecl internal_4b49a0()
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
        jae public_4b4a88
        test edx, edx
        je public_4b49df
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_4b49e4
        public_4b49df : nop
        mov ecx, 1
        public_4b49e4 : nop
        test edx, edx
        jne public_4b49ec
        xor eax, eax
        jmp public_4b49f1
        public_4b49ec : nop
        sub eax, edx
        sar eax, 5
        public_4b49f1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_4b49fd
        xor eax, eax
        public_4b49fd : nop
        shl eax, 5
        push eax
        call public_5b7e84
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_4b4a2a
        public_4b4a16 : nop
        push esi
        push edi
        call public_4b4ec0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_4b4a16
        public_4b4a2a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_4b4ec0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x20
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_4b4e50
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_53aaa0
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_587380
        inc eax
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_4b4b2a
        public_4b4a88 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_4b4add
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call public_4b4e50
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
        call public_4b4e90
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_4b4b24
        public_4b4ac7 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_4b4ac7
        jmp public_4b4b24
        public_4b4add : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_4b4e50
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_4b4b07
        public_4b4af2 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_4b4af2
        public_4b4b07 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_4b4b24
        mov edx, dword ptr ss : [esp+0x20]
        public_4b4b12 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        mov esi, edx
        rep movsd
        jne public_4b4b12
        public_4b4b24 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_4b4b2a : nop
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
        UNREACHABLE_TRAP(0x4b49a0)
    }
}

#undef public_4b49df
#undef public_4b49e4
#undef public_4b49ec
#undef public_4b49f1
#undef public_4b49fd
#undef public_4b4a16
#undef public_4b4a2a
#undef public_4b4a88
#undef public_4b4ac7
#undef public_4b4add
#undef public_4b4af2
#undef public_4b4b07
#undef public_4b4b12
#undef public_4b4b24
#undef public_4b4b2a
