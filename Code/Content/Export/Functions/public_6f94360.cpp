#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93670);
CLANG_FORWARD_PROC_SYMBOL(public_6f936a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f936d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93700);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f94360);
CLANG_FORWARD_PROC_SYMBOL(public_6f947e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f94381 _public_6f94381
#define public_6f943b1 _public_6f943b1
#define public_6f943cc _public_6f943cc
#define public_6f943e7 _public_6f943e7
#define public_6f9441d _public_6f9441d
#define public_6f94435 _public_6f94435
#define public_6f94440 _public_6f94440
#define public_6f94456 _public_6f94456
#define public_6f9446f _public_6f9446f
#define public_6f94493 _public_6f94493
#define public_6f944a0 _public_6f944a0
#define public_6f944b3 _public_6f944b3
#define public_6f944ce _public_6f944ce
#define public_6f944f7 _public_6f944f7
#define public_6f944ff _public_6f944ff
#define public_6f94517 _public_6f94517
#define public_6f94567 _public_6f94567
#define public_6f94593 _public_6f94593
#define public_6f945b7 _public_6f945b7
#define public_6f945ba _public_6f945ba
#define public_6f945da _public_6f945da

PROC_DECLARE(0x6f94360, internal_6f94360, public_6f94360);
extern "C" NAKED register_t __cdecl internal_6f94360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 8
        cmp ecx, eax
        je public_6f945da
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        push edi
        lea ebx, ds:[eax+0x54]
        lea ebp, ds:[ecx+0x54]
        public_6f94381 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov dl, byte ptr ds : [ebx-0xB8]
        sub eax, 0x68
        sub ebx, 0x68
        mov dword ptr ss : [esp+0x20], eax
        sub esi, 0x68
        sub ebp, 0x68
        lea eax, ds:[ebx-0x48]
        test eax, eax
        mov dword ptr ss : [esp+0x24], esi
        mov byte ptr ss : [ebp-0x50], dl
        jne public_6f943b1
        mov dword ptr ss : [ebp-0x4C], eax
        mov byte ptr ss : [ebp-0x48], al
        jmp public_6f943e7
        public_6f943b1 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea esi, ds:[ebx-0x48]
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f943cc
        mov eax, 0x2F
        public_6f943cc : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[ebp-0x48]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp-0x48], 0
        mov dword ptr ss : [ebp-0x4C], eax
        public_6f943e7 : nop
        mov eax, dword ptr ds : [ebx-0x18]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ds : [ebx-0x14]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ds : [ebx-0x10]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ds : [ebx-0xC]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ds : [ebx-8]
        lea edx, ss:[ebp-4]
        lea eax, ds:[ebx-4]
        cmp edx, eax
        mov dword ptr ss : [ebp-8], ecx
        je public_6f945ba
        mov edi, dword ptr ds : [ebx]
        test edi, edi
        jne public_6f9441d
        xor esi, esi
        jmp public_6f94435
        public_6f9441d : nop
        mov edx, dword ptr ds : [ebx+4]
        sub edx, edi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov esi, edx
        public_6f94435 : nop
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        jne public_6f94440
        xor edx, edx
        jmp public_6f94456
        public_6f94440 : nop
        mov edx, dword ptr ss : [ebp+4]
        sub edx, ecx
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f94456 : nop
        cmp esi, edx
        ja public_6f944f7
        mov eax, dword ptr ds : [ebx+4]
        mov esi, edi
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f94493
        public_6f9446f : nop
        push esi
        call public_6f947e0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add edx, 0x108
        add esi, 0x108
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, edx
        jne public_6f9446f
        public_6f94493 : nop
        mov edi, dword ptr ss : [ebp+4]
        cmp ecx, edi
        mov esi, ecx
        je public_6f944b3
        lea esp, ss:[esp]
        public_6f944a0 : nop
        push 0
        mov ecx, esi
        call public_6f94b00
        add esi, 0x108
        cmp esi, edi
        jne public_6f944a0
        public_6f944b3 : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        jne public_6f944ce
        mov eax, dword ptr ss : [ebp]
        xor edx, edx
        imul edx, 0x108
        add edx, eax
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f945ba
        public_6f944ce : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        mov eax, dword ptr ss : [ebp]
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x108
        add edx, eax
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f945ba
        public_6f944f7 : nop
        test edi, edi
        jne public_6f944ff
        xor esi, esi
        jmp public_6f94517
        public_6f944ff : nop
        mov edx, dword ptr ds : [ebx+4]
        sub edx, edi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        public_6f94517 : nop
        lea ecx, ss:[ebp-4]
        call public_6f93670
        cmp esi, eax
        ja public_6f94567
        lea ecx, ss:[ebp-4]
        call public_6f936a0
        mov esi, eax
        mov eax, dword ptr ss : [ebp]
        imul esi, 0x108
        push eax
        add esi, edi
        push esi
        push edi
        call public_6f93d80
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ebx+4]
        add esp, 0xC
        push ecx
        push edx
        push esi
        lea ecx, ss:[ebp-4]
        call public_6f93700
        lea ecx, ds:[ebx-4]
        call public_6f936a0
        imul eax, 0x108
        add eax, dword ptr ss : [ebp]
        jmp public_6f945b7
        public_6f94567 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov eax, dword ptr ss : [ebp]
        lea esi, ss:[ebp-4]
        push eax
        mov ecx, esi
        call public_6f936d0
        mov ecx, dword ptr ss : [ebp]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[ebx-4]
        call public_6f936a0
        test eax, eax
        jge public_6f94593
        xor eax, eax
        public_6f94593 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f93700
        mov dword ptr ss : [ebp+8], eax
        public_6f945b7 : nop
        mov dword ptr ss : [ebp+4], eax
        public_6f945ba : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        jne public_6f94381
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f945da : nop
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f94360)
    }
}

#undef public_6f94381
#undef public_6f943b1
#undef public_6f943cc
#undef public_6f943e7
#undef public_6f9441d
#undef public_6f94435
#undef public_6f94440
#undef public_6f94456
#undef public_6f9446f
#undef public_6f94493
#undef public_6f944a0
#undef public_6f944b3
#undef public_6f944ce
#undef public_6f944f7
#undef public_6f944ff
#undef public_6f94517
#undef public_6f94567
#undef public_6f94593
#undef public_6f945b7
#undef public_6f945ba
#undef public_6f945da
