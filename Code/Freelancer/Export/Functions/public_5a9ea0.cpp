#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5a9ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a9ee2 _public_5a9ee2
#define public_5a9eea _public_5a9eea
#define public_5a9ef5 _public_5a9ef5
#define public_5a9efd _public_5a9efd
#define public_5a9f32 _public_5a9f32
#define public_5a9f45 _public_5a9f45
#define public_5a9fb2 _public_5a9fb2
#define public_5a9fdd _public_5a9fdd
#define public_5a9fff _public_5a9fff
#define public_5aa002 _public_5aa002
#define public_5aa0a1 _public_5aa0a1
#define public_5aa0b2 _public_5aa0b2
#define public_5aa0c9 _public_5aa0c9
#define public_5aa108 _public_5aa108
#define public_5aa119 _public_5aa119
#define public_5aa12e _public_5aa12e
#define public_5aa14a _public_5aa14a
#define public_5aa15e _public_5aa15e
#define public_5aa179 _public_5aa179
#define public_5aa19c _public_5aa19c

PROC_DECLARE(0x5a9ea0, internal_5a9ea0, public_5a9ea0);
extern "C" NAKED register_t __cdecl internal_5a9ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c705c]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c7060]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        mov eax, dword ptr ss : [ebp+0x14]
        lea edi, ss:[ebp+0x18]
        lea esi, ds:[ebx+0x18]
        cmp esi, edi
        mov dword ptr ds : [ebx+0x14], eax
        je public_5aa002
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_5a9ee2
        xor edx, edx
        jmp public_5a9eea
        public_5a9ee2 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        sar edx, 2
        public_5a9eea : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_5a9ef5
        xor eax, eax
        jmp public_5a9efd
        public_5a9ef5 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_5a9efd : nop
        cmp edx, eax
        ja public_5a9f45
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_527820
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_5a9f32
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_5a9fff
        public_5a9f32 : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_5a9fff
        public_5a9f45 : nop
        mov ecx, esi
        call public_40d740
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], eax
        call public_5ad970
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        ja public_5a9fb2
        mov ecx, dword ptr ss : [ebp+0x1C]
        lea edi, ss:[ebp+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, esi
        call public_5ad970
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ds : [edi+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_527820
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_597c70
        mov ecx, edi
        call public_5ad970
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_5aa002
        public_5a9fb2 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        lea edi, ss:[ebp+0x18]
        add esp, 4
        mov ecx, edi
        call public_5ad970
        test eax, eax
        jge public_5a9fdd
        xor eax, eax
        public_5a9fdd : nop
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov dword ptr ds : [esi+0xC], eax
        public_5a9fff : nop
        mov dword ptr ds : [esi+8], eax
        public_5aa002 : nop
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0x28], ecx
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x2C], edx
        mov eax, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x30], eax
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x34], ecx
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], edx
        mov al, byte ptr ss : [ebp+0x3C]
        mov byte ptr ds : [ebx+0x3C], al
        mov cl, byte ptr ss : [ebp+0x3D]
        mov byte ptr ds : [ebx+0x3D], cl
        mov dl, byte ptr ss : [ebp+0x3E]
        mov byte ptr ds : [ebx+0x3E], dl
        mov eax, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ss:[ebp+0x44]
        push eax
        lea ecx, ds:[ebx+0x44]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ss:[ebp+0x54]
        push eax
        lea ecx, ds:[ebx+0x54]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ss:[ebp+0x64]
        push eax
        lea ecx, ds:[ebx+0x64]
        call dword ptr ds : [public_5c6f9c]
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ss : [ebp+0x7C]
        mov ecx, dword ptr ds : [ecx]
        lea esi, ss:[ebp+0x74]
        mov eax, edx
        cmp ecx, eax
        lea edi, ds:[ebx+0x74]
        mov dword ptr ss : [esp+0x14], eax
        jae public_5aa0a1
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, ecx
        public_5aa0a1 : nop
        cmp edi, esi
        jne public_5aa119
        mov esi, ecx
        cmp dword ptr ds : [edi+8], eax
        jae public_5aa0b2
        call dword ptr ds : [public_5c7064]
        public_5aa0b2 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x14]
        sub eax, ecx
        cmp eax, esi
        jae public_5aa0c9
        mov esi, eax
        public_5aa0c9 : nop
        test esi, esi
        jbe public_5aa108
        mov edx, dword ptr ds : [edi+4]
        sub eax, esi
        add ecx, edx
        push eax
        lea eax, ds:[ecx+esi]
        push eax
        push ecx
        call dword ptr ds : [public_5c709c]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        sub eax, esi
        push 0
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5aa108
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c706c]
        public_5aa108 : nop
        push 0
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c707c]
        jmp public_5aa19c
        public_5aa119 : nop
        test eax, eax
        jbe public_5aa15e
        cmp eax, edx
        jne public_5aa15e
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_5aa12e
        mov ecx, dword ptr ds : [public_5c7078]
        public_5aa12e : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_5aa15e
        push 1
        mov ecx, edi
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_5aa14a
        mov eax, dword ptr ds : [public_5c7078]
        public_5aa14a : nop
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_5aa19c
        public_5aa15e : nop
        push 1
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5aa19c
        mov eax, dword ptr ss : [ebp+0x78]
        test eax, eax
        jne public_5aa179
        mov eax, dword ptr ds : [public_5c7078]
        public_5aa179 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi+4]
        mov edx, ecx
        shr ecx, 2
        mov esi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        mov eax, edx
        rep movsb
        push eax
        lea ecx, ds:[ebx+0x74]
        call dword ptr ds : [public_5c706c]
        public_5aa19c : nop
        mov ecx, dword ptr ss : [ebp+0x84]
        mov dword ptr ds : [ebx+0x84], ecx
        mov edx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [ebx+0x88], edx
        mov eax, dword ptr ss : [ebp+0x8C]
        mov dword ptr ds : [ebx+0x8C], eax
        mov ecx, dword ptr ss : [ebp+0x90]
        mov dword ptr ds : [ebx+0x90], ecx
        mov dl, byte ptr ss : [ebp+0x94]
        mov byte ptr ds : [ebx+0x94], dl
        mov al, byte ptr ss : [ebp+0x95]
        mov byte ptr ds : [ebx+0x95], al
        mov cl, byte ptr ss : [ebp+0x96]
        pop edi
        mov byte ptr ds : [ebx+0x96], cl
        mov edx, dword ptr ss : [ebp+0x98]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x98], edx
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a9ea0)
    }
}

#undef public_5a9ee2
#undef public_5a9eea
#undef public_5a9ef5
#undef public_5a9efd
#undef public_5a9f32
#undef public_5a9f45
#undef public_5a9fb2
#undef public_5a9fdd
#undef public_5a9fff
#undef public_5aa002
#undef public_5aa0a1
#undef public_5aa0b2
#undef public_5aa0c9
#undef public_5aa108
#undef public_5aa119
#undef public_5aa12e
#undef public_5aa14a
#undef public_5aa15e
#undef public_5aa179
#undef public_5aa19c
