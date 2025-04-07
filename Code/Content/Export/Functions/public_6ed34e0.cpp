#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);

#define public_6ed34fd _public_6ed34fd
#define public_6ed3518 _public_6ed3518
#define public_6ed3532 _public_6ed3532
#define public_6ed3554 _public_6ed3554
#define public_6ed3566 _public_6ed3566
#define public_6ed3570 _public_6ed3570
#define public_6ed3599 _public_6ed3599
#define public_6ed35a7 _public_6ed35a7
#define public_6ed35e0 _public_6ed35e0
#define public_6ed3601 _public_6ed3601
#define public_6ed3630 _public_6ed3630
#define public_6ed3650 _public_6ed3650
#define public_6ed3669 _public_6ed3669
#define public_6ed3677 _public_6ed3677

PROC_DECLARE(0x6ed34e0, internal_6ed34e0, public_6ed34e0);
extern "C" NAKED register_t __cdecl internal_6ed34e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        lea esi, ds:[edx+8]
        test esi, esi
        push edi
        mov ebp, ecx
        jne public_6ed34fd
        mov dword ptr ss : [ebp+4], esi
        mov byte ptr ss : [ebp+8], 0
        jmp public_6ed3532
        public_6ed34fd : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebx, ss:[ebp+8]
        jb public_6ed3518
        mov eax, 0x2F
        public_6ed3518 : nop
        mov ecx, eax
        mov edi, ebx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+8], 0
        mov dword ptr ss : [ebp+4], eax
        public_6ed3532 : nop
        mov eax, dword ptr ds : [edx+0x38]
        lea ecx, ds:[edx+0x3C]
        lea ebx, ss:[ebp+0x3C]
        cmp ebx, ecx
        mov dword ptr ss : [ebp+0x38], eax
        je public_6ed35a7
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ed3566
        public_6ed3554 : nop
        cmp edi, ecx
        je public_6ed3566
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edi, dword ptr ds : [edi]
        jne public_6ed3554
        public_6ed3566 : nop
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ed3599
        mov edi, edi
        public_6ed3570 : nop
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x14], esi
        jne public_6ed3570
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed3599 : nop
        push ecx
        push edi
        push esi
        mov ecx, ebx
        call public_6ed0230
        mov edx, dword ptr ss : [esp+0x24]
        public_6ed35a7 : nop
        mov al, byte ptr ds : [edx+0x48]
        mov byte ptr ss : [ebp+0x48], al
        mov cl, byte ptr ds : [edx+0x49]
        mov byte ptr ss : [ebp+0x49], cl
        mov eax, dword ptr ds : [edx+0x4C]
        mov dword ptr ss : [ebp+0x4C], eax
        mov cl, byte ptr ds : [edx+0x50]
        mov byte ptr ss : [ebp+0x50], cl
        mov edx, dword ptr ds : [edx+0x54]
        lea eax, ss:[esp+0x10]
        lea esi, ss:[ebp+0x58]
        push eax
        mov ecx, esi
        mov dword ptr ss : [ebp+0x54], edx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        je public_6ed3601
        lea ecx, ds:[ecx]
        public_6ed35e0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6ed35e0
        public_6ed3601 : nop
        mov ecx, esi
        call public_6ecfec0
        mov edi, dword ptr ss : [esp+0x24]
        lea ecx, ds:[edi+0x58]
        push ecx
        mov ecx, esi
        call public_6f93490
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        je public_6ed3650
        lea esp, ss:[esp]
        public_6ed3630 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        push 0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6ed3630
        public_6ed3650 : nop
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ss : [ebp+0x64], edx
        mov ecx, dword ptr ss : [ebp+0x68]
        test ecx, ecx
        je public_6ed3669
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x68], 0
        public_6ed3669 : nop
        mov ecx, dword ptr ds : [edi+0x68]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x68], ecx
        je public_6ed3677
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6ed3677 : nop
        lea eax, ds:[edi+0x6C]
        push eax
        lea ecx, ss:[ebp+0x6C]
        call public_6ef8910
        mov ecx, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [ebp+0x7C], ecx
        mov edx, dword ptr ds : [edi+0x80]
        mov dword ptr ss : [ebp+0x80], edx
        mov eax, dword ptr ds : [edi+0x84]
        pop edi
        mov dword ptr ss : [ebp+0x84], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ed34e0)
    }
}

#undef public_6ed34fd
#undef public_6ed3518
#undef public_6ed3532
#undef public_6ed3554
#undef public_6ed3566
#undef public_6ed3570
#undef public_6ed3599
#undef public_6ed35a7
#undef public_6ed35e0
#undef public_6ed3601
#undef public_6ed3630
#undef public_6ed3650
#undef public_6ed3669
#undef public_6ed3677
