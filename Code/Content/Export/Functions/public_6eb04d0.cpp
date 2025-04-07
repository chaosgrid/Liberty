#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab100);
CLANG_FORWARD_PROC_SYMBOL(public_6eb04d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb0522 _public_6eb0522
#define public_6eb0524 _public_6eb0524
#define public_6eb052c _public_6eb052c
#define public_6eb053f _public_6eb053f
#define public_6eb054c _public_6eb054c
#define public_6eb0570 _public_6eb0570
#define public_6eb0588 _public_6eb0588
#define public_6eb0592 _public_6eb0592
#define public_6eb05b2 _public_6eb05b2
#define public_6eb05ca _public_6eb05ca
#define public_6eb05d0 _public_6eb05d0
#define public_6eb05e3 _public_6eb05e3
#define public_6eb05f0 _public_6eb05f0
#define public_6eb05fe _public_6eb05fe
#define public_6eb063c _public_6eb063c
#define public_6eb066a _public_6eb066a
#define public_6eb06a5 _public_6eb06a5
#define public_6eb06b0 _public_6eb06b0
#define public_6eb06c7 _public_6eb06c7
#define public_6eb06e7 _public_6eb06e7
#define public_6eb06f7 _public_6eb06f7
#define public_6eb0707 _public_6eb0707
#define public_6eb0726 _public_6eb0726
#define public_6eb073c _public_6eb073c
#define public_6eb0758 _public_6eb0758
#define public_6eb0774 _public_6eb0774
#define public_6eb0780 _public_6eb0780
#define public_6eb07a9 _public_6eb07a9
#define public_6eb07c0 _public_6eb07c0
#define public_6eb07e2 _public_6eb07e2
#define public_6eb07e5 _public_6eb07e5

PROC_DECLARE(0x6eb04d0, internal_6eb04d0, public_6eb04d0);
extern "C" NAKED register_t __cdecl internal_6eb04d0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6eb066a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6eb0522
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6eb0524
        public_6eb0522 : nop
        mov ecx, edi
        public_6eb0524 : nop
        test ebx, ebx
        jne public_6eb052c
        xor edx, edx
        jmp public_6eb053f
        public_6eb052c : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eb053f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6eb054c
        xor eax, eax
        public_6eb054c : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6eb0588
        public_6eb0570 : nop
        push esi
        push ebp
        call public_6eb1ba0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp esi, eax
        jne public_6eb0570
        public_6eb0588 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6eb05b2
        mov dword ptr ss : [esp+0x24], edi
        public_6eb0592 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6eb1ba0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6eb0592
        mov eax, dword ptr ss : [esp+0x20]
        public_6eb05b2 : nop
        lea ecx, ds:[edi+edi*4]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6eb05e3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6eb05d0
        public_6eb05ca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6eb05d0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6eb1ba0
        add esi, 0x14
        add esp, 8
        cmp esi, ebp
        jne public_6eb05ca
        public_6eb05e3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6eb05fe
        lea ecx, ds:[ecx]
        public_6eb05f0 : nop
        mov ecx, esi
        call public_6eab100
        add esi, 0x14
        cmp esi, ebp
        jne public_6eb05f0
        public_6eb05fe : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6eb063c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eb063c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eb066a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6eb073c
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6eb06c7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6eb06b0
        public_6eb06a5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6eb06b0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6eb1ba0
        add ebp, 0x14
        add esp, 8
        cmp ebp, esi
        jne public_6eb06a5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6eb06c7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6eb06f7
        public_6eb06e7 : nop
        push ebp
        push esi
        call public_6eb1ba0
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_6eb06e7
        public_6eb06f7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        cmp ebx, edi
        mov esi, ebx
        je public_6eb0726
        lea ebx, ss:[ebp+8]
        public_6eb0707 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ds:[esi+8]
        push ebx
        mov dword ptr ds : [ecx-4], eax
        call public_6f20230
        add esi, 0x14
        cmp esi, edi
        jne public_6eb0707
        mov eax, dword ptr ss : [esp+0x10]
        public_6eb0726 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eb073c : nop
        test edi, edi
        jbe public_6eb07e5
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6eb0774
        public_6eb0758 : nop
        push edi
        push ebp
        call public_6eb1ba0
        add edi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp edi, esi
        jne public_6eb0758
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6eb0774 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_6eb07a9
        nop 
        public_6eb0780 : nop
        mov edx, dword ptr ds : [esi-0x14]
        sub esi, 0x14
        sub edi, 0x14
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edi+4], eax
        call public_6f20230
        cmp esi, ebx
        jne public_6eb0780
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6eb07a9 : nop
        lea ebp, ds:[eax+ebx]
        cmp ebx, ebp
        mov esi, ebx
        je public_6eb07e2
        mov edi, dword ptr ss : [esp+0x28]
        lea ebx, ds:[edi+8]
        lea esp, ss:[esp]
        public_6eb07c0 : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[esi+8]
        push ebx
        mov dword ptr ds : [ecx-4], eax
        call public_6f20230
        add esi, 0x14
        cmp esi, ebp
        jne public_6eb07c0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6eb07e2 : nop
        add dword ptr ds : [ecx+8], eax
        public_6eb07e5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6eb04d0)
    }
}

#undef public_6eb0522
#undef public_6eb0524
#undef public_6eb052c
#undef public_6eb053f
#undef public_6eb054c
#undef public_6eb0570
#undef public_6eb0588
#undef public_6eb0592
#undef public_6eb05b2
#undef public_6eb05ca
#undef public_6eb05d0
#undef public_6eb05e3
#undef public_6eb05f0
#undef public_6eb05fe
#undef public_6eb063c
#undef public_6eb066a
#undef public_6eb06a5
#undef public_6eb06b0
#undef public_6eb06c7
#undef public_6eb06e7
#undef public_6eb06f7
#undef public_6eb0707
#undef public_6eb0726
#undef public_6eb073c
#undef public_6eb0758
#undef public_6eb0774
#undef public_6eb0780
#undef public_6eb07a9
#undef public_6eb07c0
#undef public_6eb07e2
#undef public_6eb07e5
