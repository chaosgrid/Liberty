#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93670);
CLANG_FORWARD_PROC_SYMBOL(public_6f936a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f936d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93700);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f940f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f947e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f94110 _public_6f94110
#define public_6f94126 _public_6f94126
#define public_6f9413e _public_6f9413e
#define public_6f9415d _public_6f9415d
#define public_6f94191 _public_6f94191
#define public_6f941ad _public_6f941ad
#define public_6f941b8 _public_6f941b8
#define public_6f941d2 _public_6f941d2
#define public_6f941e5 _public_6f941e5
#define public_6f94205 _public_6f94205
#define public_6f94210 _public_6f94210
#define public_6f94227 _public_6f94227
#define public_6f94241 _public_6f94241
#define public_6f9426e _public_6f9426e
#define public_6f9428a _public_6f9428a
#define public_6f942dd _public_6f942dd
#define public_6f94308 _public_6f94308
#define public_6f9432d _public_6f9432d
#define public_6f94334 _public_6f94334
#define public_6f9435d _public_6f9435d

PROC_DECLARE(0x6f940f0, internal_6f940f0, public_6f940f0);
extern "C" NAKED register_t __cdecl internal_6f940f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, eax
        je public_6f9435d
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push edi
        lea ebx, ds:[eax+0x50]
        add ebp, 0x54
        nop 
        public_6f94110 : nop
        mov cl, byte ptr ds : [eax+4]
        lea esi, ds:[eax+0xC]
        test esi, esi
        mov byte ptr ss : [ebp-0x50], cl
        jne public_6f94126
        mov dword ptr ss : [ebp-0x4C], esi
        mov byte ptr ss : [ebp-0x48], 0
        jmp public_6f9415d
        public_6f94126 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f9413e
        mov eax, 0x2F
        public_6f9413e : nop
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
        mov eax, dword ptr ss : [esp+0x20]
        public_6f9415d : nop
        mov ecx, dword ptr ds : [eax+0x3C]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp-0x14], edx
        mov ecx, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ds : [eax+0x48]
        mov dword ptr ss : [ebp-0xC], edx
        mov ecx, dword ptr ds : [eax+0x4C]
        lea edx, ss:[ebp-4]
        cmp edx, ebx
        mov dword ptr ss : [ebp-8], ecx
        je public_6f94334
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        jne public_6f94191
        xor ecx, ecx
        jmp public_6f941ad
        public_6f94191 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, edx
        public_6f941ad : nop
        mov edi, dword ptr ss : [ebp]
        test edi, edi
        jne public_6f941b8
        xor edx, edx
        jmp public_6f941d2
        public_6f941b8 : nop
        mov edx, dword ptr ss : [ebp+4]
        sub edx, edi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+0x20]
        public_6f941d2 : nop
        cmp ecx, edx
        ja public_6f9426e
        mov ecx, dword ptr ds : [ebx+8]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f94205
        public_6f941e5 : nop
        push esi
        mov ecx, edi
        call public_6f947e0
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 0x108
        add edi, 0x108
        cmp esi, eax
        jne public_6f941e5
        mov eax, dword ptr ss : [esp+0x20]
        public_6f94205 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp edi, esi
        je public_6f94227
        lea esp, ss:[esp]
        public_6f94210 : nop
        push 0
        mov ecx, edi
        call public_6f94b00
        add edi, 0x108
        cmp edi, esi
        jne public_6f94210
        mov eax, dword ptr ss : [esp+0x20]
        public_6f94227 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_6f94241
        mov ecx, dword ptr ss : [ebp]
        imul edx, 0x108
        add edx, ecx
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f94334
        public_6f94241 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        mov eax, 0x3E0F83E1
        imul ecx
        mov eax, dword ptr ss : [esp+0x20]
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ecx, dword ptr ss : [ebp]
        imul edx, 0x108
        add edx, ecx
        mov dword ptr ss : [ebp+4], edx
        jmp public_6f94334
        public_6f9426e : nop
        test esi, esi
        je public_6f9428a
        mov edx, dword ptr ds : [ebx+8]
        sub edx, esi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        public_6f9428a : nop
        lea ecx, ss:[ebp-4]
        call public_6f93670
        cmp esi, eax
        ja public_6f942dd
        lea edi, ss:[ebp-4]
        mov ecx, edi
        call public_6f936a0
        mov ecx, dword ptr ss : [ebp]
        mov esi, eax
        mov eax, dword ptr ds : [ebx+4]
        imul esi, 0x108
        push ecx
        add esi, eax
        push esi
        push eax
        call public_6f93d80
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push edx
        push esi
        mov ecx, edi
        call public_6f93700
        mov ecx, ebx
        call public_6f936a0
        imul eax, 0x108
        add eax, dword ptr ss : [ebp]
        jmp public_6f9432d
        public_6f942dd : nop
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
        mov ecx, ebx
        call public_6f936a0
        test eax, eax
        jge public_6f94308
        xor eax, eax
        public_6f94308 : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6f93700
        mov dword ptr ss : [ebp+8], eax
        public_6f9432d : nop
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [esp+0x20]
        public_6f94334 : nop
        mov edx, dword ptr ds : [eax+0x60]
        mov dword ptr ss : [ebp+0xC], edx
        mov ecx, dword ptr ds : [eax+0x64]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, 0x68
        add ebp, 0x68
        cmp ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6f94110
        pop edi
        pop esi
        pop ebx
        public_6f9435d : nop
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f940f0)
    }
}

#undef public_6f94110
#undef public_6f94126
#undef public_6f9413e
#undef public_6f9415d
#undef public_6f94191
#undef public_6f941ad
#undef public_6f941b8
#undef public_6f941d2
#undef public_6f941e5
#undef public_6f94205
#undef public_6f94210
#undef public_6f94227
#undef public_6f94241
#undef public_6f9426e
#undef public_6f9428a
#undef public_6f942dd
#undef public_6f94308
#undef public_6f9432d
#undef public_6f94334
#undef public_6f9435d
