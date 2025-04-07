#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6316330);

#define public_63146fc _public_63146fc
#define public_6314704 _public_6314704
#define public_6314738 _public_6314738
#define public_6314747 _public_6314747
#define public_631475a _public_631475a
#define public_6314791 _public_6314791
#define public_63147a5 _public_63147a5
#define public_63147b9 _public_63147b9
#define public_63147d5 _public_63147d5
#define public_63147f8 _public_63147f8
#define public_6314816 _public_6314816
#define public_6314833 _public_6314833
#define public_631483f _public_631483f

PROC_DECLARE(0x63146c0, internal_63146c0, public_63146c0);
extern "C" NAKED register_t __cdecl internal_63146c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x1C]
        lea esi, ds:[ebx+0x40]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_63146fc
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63146fc
        lea eax, ss:[esp+0x10]
        jmp public_6314704
        public_63146fc : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6314704 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x44]
        jne public_631483f
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6316330
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [edx]
        add edi, 4
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ds : [edi+8]
        mov ebp, eax
        cmp esi, ebp
        jae public_6314738
        mov ebp, esi
        public_6314738 : nop
        cmp ebx, edi
        jne public_63147a5
        cmp dword ptr ds : [ebx+8], ebp
        jae public_6314747
        call dword ptr ds : [public_63991c4]
        public_6314747 : nop
        mov ecx, ebx
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_631475a
        mov esi, eax
        public_631475a : nop
        test esi, esi
        jbe public_6314791
        mov ecx, dword ptr ds : [ebx+4]
        add ecx, ebp
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov edi, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6314791
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_63991d8]
        public_6314791 : nop
        mov ecx, ebx
        call dword ptr ds : [public_63991bc]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_63147a5 : nop
        test ebp, ebp
        jbe public_63147f8
        cmp ebp, eax
        jne public_63147f8
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_63147b9
        mov eax, dword ptr ds : [public_63991d0]
        public_63147b9 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_63147f8
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_63147d5
        mov eax, dword ptr ds : [public_63991d0]
        public_63147d5 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_63147f8 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6314833
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_63991d0]
        je public_6314816
        mov esi, edi
        public_6314816 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [ecx+ebp], 0
        public_6314833 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_631483f : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x63146c0)
    }
}

#undef public_63146fc
#undef public_6314704
#undef public_6314738
#undef public_6314747
#undef public_631475a
#undef public_6314791
#undef public_63147a5
#undef public_63147b9
#undef public_63147d5
#undef public_63147f8
#undef public_6314816
#undef public_6314833
#undef public_631483f
