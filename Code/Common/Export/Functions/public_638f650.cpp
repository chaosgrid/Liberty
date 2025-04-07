#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e370);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_63704b0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_638f650);

#define public_638f685 _public_638f685
#define public_638f6a8 _public_638f6a8
#define public_638f6b2 _public_638f6b2
#define public_638f6ba _public_638f6ba
#define public_638f6c2 _public_638f6c2
#define public_638f6eb _public_638f6eb
#define public_638f700 _public_638f700
#define public_638f704 _public_638f704
#define public_638f724 _public_638f724
#define public_638f733 _public_638f733
#define public_638f741 _public_638f741
#define public_638f772 _public_638f772
#define public_638f7a7 _public_638f7a7
#define public_638f7ec _public_638f7ec
#define public_638f7ed _public_638f7ed
#define public_638f7f9 _public_638f7f9
#define public_638f812 _public_638f812
#define public_638f824 _public_638f824
#define public_638f85c _public_638f85c
#define public_638f8b1 _public_638f8b1
#define public_638f8bb _public_638f8bb
#define public_638f8e3 _public_638f8e3
#define public_638f8fe _public_638f8fe
#define public_638f902 _public_638f902
#define public_638f917 _public_638f917
#define public_638f943 _public_638f943

PROC_DECLARE(0x638f650, internal_638f650, public_638f650);
extern "C" NAKED register_t __cdecl internal_638f650()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, 4
        xor ebx, ebx
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x18], edi
        jl public_638f685
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fae98 @0x638f676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fae98
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f685 : nop
        mov ebp, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ss : [ebp+0x38]
        cmp eax, edi
        lea edx, ds:[ecx-1]
        mov dword ptr ss : [esp+0x20], edx
        je public_638f6c2
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, esi
        cmp eax, edi
        je public_638f6c2
        public_638f6a8 : nop
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, ebp
        jne public_638f6b2
        mov ebx, dword ptr ds : [eax+8]
        public_638f6b2 : nop
        cmp dword ptr ds : [ebx+0x48], edx
        jne public_638f6ba
        mov dword ptr ds : [ecx-4], edi
        public_638f6ba : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, esi
        cmp eax, edi
        jne public_638f6a8
        public_638f6c2 : nop
        mov edx, dword ptr ss : [ebp+0x38]
        push edx
        call public_636e370
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, esi
        jl public_638f6eb
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fae68 @0x638f6dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fae68
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f6eb : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ds : [ecx+0x20]
        test edi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_638f917
        jmp public_638f704
        public_638f700 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_638f704 : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_638f812
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_638f812
        public_638f724 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_638f733
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        jmp public_638f772
        public_638f733 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        jne public_638f741
        mov dword ptr ds : [esi+8], ebp
        mov ebx, eax
        jmp public_638f772
        public_638f741 : nop
        cmp eax, ebp
        je public_638f7ec
        cmp ecx, ebp
        je public_638f7ec
        mov edx, dword ptr ds : [esi+0xC]
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63fae2c @0x638f75b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fae2c
        call public_6356960
        push esi
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        public_638f772 : nop
        cmp ebx, ebp
        jne public_638f7a7
        push esi
        call public_636e740
        add esp, 4
        test esi, esi
        je public_638f7f9
        mov eax, dword ptr ds : [public_658b9ac]
        mov edx, dword ptr ds : [public_658b978]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+0x40]
        lea eax, ds:[edx+ecx*4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], esi
        jmp public_638f7f9
        public_638f7a7 : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [ebx+0x48], edx
        push esi
        jne public_638f7ed
        mov eax, dword ptr ds : [ebx+0x38]
        push eax
        call public_636e400
        push esi
        call public_636e740
        add esp, 0xC
        test esi, esi
        je public_638f7f9
        mov eax, dword ptr ds : [public_658b9ac]
        mov ecx, dword ptr ds : [public_658b980]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        mov edx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [public_658b978]
        mov ecx, dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], esi
        jmp public_638f7f9
        public_638f7ec : nop
        push esi
        public_638f7ed : nop
        lea eax, ss:[ebp+0x38]
        push eax
        call public_636e1b0
        add esp, 8
        public_638f7f9 : nop
        inc dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x1C], eax
        jne public_638f724
        public_638f812 : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_638f824
        push 0
        push eax
        call public_636ee40
        add esp, 8
        public_638f824 : nop
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 0x10
        je public_638f902
        mov eax, dword ptr ds : [edi+0x3C]
        xor ebx, ebx
        test eax, eax
        je public_638f902
        mov ebx, dword ptr ds : [eax+4]
        push eax
        xor edi, edi
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jle public_638f8fe
        mov ebp, 4
        public_638f85c : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [ebx+0x48], edx
        je public_638f8e3
        mov ecx, dword ptr ds : [ebx+0x50]
        test ch, 0x10
        je public_638f8e3
        call public_63704b0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x34]
        push 0
        mov esi, eax
        mov eax, dword ptr ds : [public_658b24c]
        push edi
        push eax
        push edx
        call public_636e9c0
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+0x50]
        shr ecx, 0xB
        mov edx, edi
        and ecx, 1
        and edx, 1
        add esp, 0x10
        xor ecx, edx
        je public_638f8b1
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        jmp public_638f8bb
        public_638f8b1 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ecx
        public_638f8bb : nop
        mov edx, dword ptr ss : [esp+0x2C]
        lea eax, ds:[edx+0x38]
        push esi
        push eax
        call public_636e1b0
        push esi
        add ebx, 0x38
        push ebx
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x10
        inc eax
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x1C]
        public_638f8e3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x3C]
        mov ebx, dword ptr ds : [edx+ebp+4]
        inc edi
        add ebp, 4
        cmp edi, eax
        jl public_638f85c
        mov ebp, dword ptr ss : [esp+0x2C]
        public_638f8fe : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_638f902 : nop
        cmp edi, dword ptr ss : [esp+0x28]
        je public_638f917
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_638f700
        public_638f917 : nop
        cmp dword ptr ds : [public_658b078], 2
        pop edi
        pop esi
        pop ebp
        pop ebx
        jl public_638f943
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fadf0 @0x638f934*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fadf0
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638f943 : nop
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x638f650)
    }
}

#undef public_638f685
#undef public_638f6a8
#undef public_638f6b2
#undef public_638f6ba
#undef public_638f6c2
#undef public_638f6eb
#undef public_638f700
#undef public_638f704
#undef public_638f724
#undef public_638f733
#undef public_638f741
#undef public_638f772
#undef public_638f7a7
#undef public_638f7ec
#undef public_638f7ed
#undef public_638f7f9
#undef public_638f812
#undef public_638f824
#undef public_638f85c
#undef public_638f8b1
#undef public_638f8bb
#undef public_638f8e3
#undef public_638f8fe
#undef public_638f902
#undef public_638f917
#undef public_638f943
