#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6267db0);
CLANG_FORWARD_PROC_SYMBOL(public_6267de0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6267495 _public_6267495
#define public_62674a5 _public_62674a5
#define public_62674cc _public_62674cc
#define public_62674ce _public_62674ce
#define public_62674d6 _public_62674d6
#define public_62674da _public_62674da
#define public_62674e6 _public_62674e6
#define public_6267501 _public_6267501
#define public_6267521 _public_6267521
#define public_6267530 _public_6267530
#define public_626754c _public_626754c
#define public_6267562 _public_6267562
#define public_6267566 _public_6267566
#define public_6267579 _public_6267579
#define public_62675af _public_62675af
#define public_62675f0 _public_62675f0
#define public_62675fe _public_62675fe
#define public_6267614 _public_6267614
#define public_6267631 _public_6267631
#define public_6267642 _public_6267642
#define public_6267650 _public_6267650
#define public_626765d _public_626765d
#define public_6267660 _public_6267660

PROC_DECLARE(0x6267480, internal_6267480, public_6267480);
extern "C" NAKED register_t __cdecl internal_6267480()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, edx
        cmp ecx, edx
        je public_62674a5
        public_6267495 : nop
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6267495
        public_62674a5 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [edi+4]
        sub ecx, eax
        sar ecx, 1
        cmp ecx, ebx
        mov dword ptr ds : [edi+8], eax
        jae public_62675af
        test esi, esi
        je public_62674cc
        mov ecx, eax
        sub ecx, esi
        sar ecx, 1
        cmp ebx, ecx
        jb public_62674ce
        public_62674cc : nop
        mov ecx, ebx
        public_62674ce : nop
        test esi, esi
        jne public_62674d6
        xor eax, eax
        jmp public_62674da
        public_62674d6 : nop
        sub eax, esi
        sar eax, 1
        public_62674da : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_62674e6
        xor eax, eax
        public_62674e6 : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        mov ebp, dword ptr ds : [edi+4]
        add esp, 4
        cmp ebp, esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6267521
        public_6267501 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push ebp
        push eax
        call public_626c1c0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 2
        add ebp, 2
        add esp, 8
        cmp ebp, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6267501
        public_6267521 : nop
        test ebx, ebx
        mov ebp, dword ptr ss : [esp+0x20]
        jbe public_626754c
        mov dword ptr ss : [esp+0x10], ebx
        lea ecx, ds:[ecx]
        public_6267530 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push ebp
        call public_626c1c0
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        add ebp, 2
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6267530
        public_626754c : nop
        mov ebp, dword ptr ds : [edi+8]
        cmp esi, ebp
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edx+ebx*2]
        je public_6267579
        sub eax, esi
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6267566
        public_6267562 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6267566 : nop
        add eax, esi
        push esi
        push eax
        call public_626c1c0
        add esi, 2
        add esp, 8
        cmp esi, ebp
        jne public_6267562
        public_6267579 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+ecx*2]
        add esp, 4
        mov ecx, edi
        mov dword ptr ds : [edi+0xC], edx
        call public_6266ff0
        add eax, ebx
        lea eax, ds:[esi+eax*2]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_62675af : nop
        mov ecx, eax
        sub ecx, esi
        sar ecx, 1
        cmp ecx, ebx
        jae public_6267614
        lea ecx, ds:[ebx+ebx]
        mov dword ptr ss : [esp+0x20], ecx
        add ecx, esi
        push ecx
        push eax
        push esi
        mov ecx, edi
        call public_6267db0
        mov eax, dword ptr ds : [edi+8]
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, eax
        sub edx, esi
        sar edx, 1
        push ebp
        sub ebx, edx
        push ebx
        push eax
        mov ecx, edi
        call public_6267de0
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_62675fe
        mov edi, edi
        public_62675f0 : nop
        mov dx, word ptr ss : [ebp]
        mov word ptr ds : [eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_62675f0
        public_62675fe : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_6267614 : nop
        test ebx, ebx
        jbe public_6267660
        push eax
        push eax
        add ebx, ebx
        sub eax, ebx
        push eax
        mov ecx, edi
        call public_6267db0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebx
        cmp esi, eax
        je public_6267642
        public_6267631 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, esi
        mov word ptr ds : [ecx], dx
        jne public_6267631
        public_6267642 : nop
        lea ecx, ds:[ebx+esi]
        cmp esi, ecx
        mov eax, esi
        je public_626765d
        mov edx, dword ptr ss : [esp+0x24]
        nop 
        public_6267650 : nop
        mov si, word ptr ds : [edx]
        mov word ptr ds : [eax], si
        add eax, 2
        cmp eax, ecx
        jne public_6267650
        public_626765d : nop
        add dword ptr ds : [edi+8], ebx
        public_6267660 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6267480)
    }
}

#undef public_6267495
#undef public_62674a5
#undef public_62674cc
#undef public_62674ce
#undef public_62674d6
#undef public_62674da
#undef public_62674e6
#undef public_6267501
#undef public_6267521
#undef public_6267530
#undef public_626754c
#undef public_6267562
#undef public_6267566
#undef public_6267579
#undef public_62675af
#undef public_62675f0
#undef public_62675fe
#undef public_6267614
#undef public_6267631
#undef public_6267642
#undef public_6267650
#undef public_626765d
#undef public_6267660
