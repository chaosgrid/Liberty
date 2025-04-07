#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_628eed0);
CLANG_FORWARD_PROC_SYMBOL(public_62a6980);
CLANG_FORWARD_PROC_SYMBOL(public_62a69f0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7040);
CLANG_FORWARD_PROC_SYMBOL(public_62a78e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7bf0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);

#define public_62a3688 _public_62a3688
#define public_62a36a9 _public_62a36a9
#define public_62a36c5 _public_62a36c5
#define public_62a3725 _public_62a3725
#define public_62a3730 _public_62a3730
#define public_62a3746 _public_62a3746
#define public_62a374e _public_62a374e
#define public_62a3752 _public_62a3752
#define public_62a3780 _public_62a3780
#define public_62a3792 _public_62a3792
#define public_62a37a0 _public_62a37a0
#define public_62a37c9 _public_62a37c9
#define public_62a37d7 _public_62a37d7

PROC_DECLARE(0x62a3660, internal_62a3660, public_62a3660);
extern "C" NAKED register_t __cdecl internal_62a3660()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        je public_62a36c5
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov esi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], esi
        je public_62a36a9
        public_62a3688 : nop
        cmp ebx, esi
        je public_62a36a9
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        lea esi, ds:[ebx+8]
        mov ecx, 0xE
        rep movsd
        mov ebx, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        jne public_62a3688
        public_62a36a9 : nop
        push ebp
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_62a69f0
        push esi
        push ebx
        push ebp
        mov ecx, edi
        call public_62a6980
        mov ecx, dword ptr ss : [esp+0x28]
        public_62a36c5 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [ecx+0x10]
        lea ebx, ds:[ecx+0x14]
        lea esi, ds:[edi+0x14]
        cmp esi, ebx
        mov dword ptr ds : [edi+0x10], eax
        je public_62a3752
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_62a7040
        mov dl, byte ptr ds : [ebx+1]
        mov ebp, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+1], dl
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax+4]
        push ebp
        push ecx
        mov ecx, esi
        call public_62a78e0
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, eax
        je public_62a3746
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_62a3730
        public_62a3725 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_62a3725
        public_62a3730 : nop
        mov dword ptr ds : [edx], ecx
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62a7bf0
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        jmp public_62a374e
        public_62a3746 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        public_62a374e : nop
        mov ecx, dword ptr ss : [esp+0x28]
        public_62a3752 : nop
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [edi+0x2C], eax
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [edi+0x30], edx
        lea edx, ds:[ecx+0x34]
        lea ebp, ds:[edi+0x34]
        cmp ebp, edx
        je public_62a37d7
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], ecx
        je public_62a3792
        public_62a3780 : nop
        cmp ebx, ecx
        je public_62a3792
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_62a3780
        public_62a3792 : nop
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_62a37c9
        lea ebx, ds:[ebx]
        public_62a37a0 : nop
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, ebp
        call public_6271cc0
        cmp dword ptr ss : [esp+0x14], esi
        jne public_62a37a0
        mov ecx, dword ptr ss : [esp+0x18]
        public_62a37c9 : nop
        push ecx
        push ebx
        push esi
        mov ecx, ebp
        call public_628eed0
        mov ecx, dword ptr ss : [esp+0x28]
        public_62a37d7 : nop
        mov eax, dword ptr ds : [ecx+0x40]
        mov dword ptr ds : [edi+0x40], eax
        mov edx, dword ptr ds : [ecx+0x44]
        mov dword ptr ds : [edi+0x44], edx
        mov eax, dword ptr ds : [ecx+0x48]
        mov dword ptr ds : [edi+0x48], eax
        mov edx, dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x4C], edx
        lea esi, ds:[ecx+0x50]
        add edi, 0x50
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62a3660)
    }
}

#undef public_62a3688
#undef public_62a36a9
#undef public_62a36c5
#undef public_62a3725
#undef public_62a3730
#undef public_62a3746
#undef public_62a374e
#undef public_62a3752
#undef public_62a3780
#undef public_62a3792
#undef public_62a37a0
#undef public_62a37c9
#undef public_62a37d7
