#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_63865b0);
CLANG_FORWARD_PROC_SYMBOL(public_6386790);
CLANG_FORWARD_PROC_SYMBOL(public_63867e0);

#define public_63865fd _public_63865fd
#define public_6386609 _public_6386609
#define public_638662d _public_638662d
#define public_6386634 _public_6386634
#define public_6386691 _public_6386691
#define public_63866a5 _public_63866a5
#define public_63866a9 _public_63866a9
#define public_63866af _public_63866af
#define public_63866b3 _public_63866b3
#define public_63866ec _public_63866ec
#define public_6386700 _public_6386700
#define public_6386704 _public_6386704
#define public_6386728 _public_6386728
#define public_6386743 _public_6386743
#define public_6386748 _public_6386748
#define public_6386751 _public_6386751
#define public_6386768 _public_6386768
#define public_6386779 _public_6386779
#define public_638677f _public_638677f

PROC_DECLARE(0x63865b0, internal_63865b0, public_63865b0);
extern "C" NAKED register_t __cdecl internal_63865b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b844]
        push eax
        call public_636ec70
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 2
        jl public_63865fd
        mov ecx, dword ptr ds : [public_658b094]
        mov edx, dword ptr ds : [public_658b090]
        mov eax, dword ptr ds : [public_658b088]
        push ecx
        mov ecx, dword ptr ds : [public_658b07c]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f7b24 @0x63865ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7b24
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_63865fd : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6386634
        mov esi, edi
        public_6386609 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6386634
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        jne public_638662d
        test eax, 0x40000
        je public_638662d
        lea eax, ss:[esp+8]
        push esi
        push eax
        call public_636e1b0
        add esp, 8
        public_638662d : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6386609
        public_6386634 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push ecx
        call public_636ec10
        mov ebx, dword ptr ds : [public_63992a8]
        mov esi, eax
        mov eax, dword ptr ds : [public_658b07c]
        add esp, 4
        test eax, eax
        mov ebp, 0xFFFBFFFF
        je public_63866a9
        mov edx, dword ptr ss : [esp+0x10]
/*FIXUP push offset _public_6386790 @0x638665d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6386790
        push 4
        add edx, 4
        push esi
        push edx
        call ebx
        mov ecx, dword ptr ds : [public_658b07c]
        mov edi, esi
        sub edi, ecx
        add esp, 0x10
        test edi, edi
        jle public_63866a5
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        je public_63866af
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ds:[edx+4]
        add ecx, 4
        test eax, eax
        je public_63866af
        public_6386691 : nop
        mov edx, dword ptr ds : [eax+0x50]
        and edx, ebp
        dec edi
        mov dword ptr ds : [eax+0x50], edx
        je public_63866a5
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6386691
        public_63866a5 : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_63866a9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        jmp public_63866b3
        public_63866af : nop
        mov edi, dword ptr ss : [esp+0x18]
        public_63866b3 : nop
        mov eax, dword ptr ds : [public_658b088]
        test eax, eax
        je public_6386704
/*FIXUP push offset _public_63867e0 @0x63866bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63867e0
        push 4
        add edx, 4
        push esi
        push edx
        call ebx
        sub esi, dword ptr ds : [public_658b088]
        add esp, 0x10
        test esi, esi
        jle public_6386700
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        je public_6386704
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ds:[edx+4]
        add ecx, 4
        test eax, eax
        je public_6386704
        public_63866ec : nop
        mov edx, dword ptr ds : [eax+0x50]
        and edx, ebp
        dec esi
        mov dword ptr ds : [eax+0x50], edx
        je public_6386700
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63866ec
        public_6386700 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6386704 : nop
        fld qword ptr ds : [public_658b090]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6386751
        test edx, edx
        je public_6386751
        mov ecx, dword ptr ds : [edx+4]
        lea esi, ds:[edx+4]
        add esi, 4
        test ecx, ecx
        je public_6386751
        public_6386728 : nop
        mov edx, dword ptr ds : [ecx+0x50]
        test edx, 0x80000
        je public_6386743
        fld qword ptr ds : [ecx+0x20]
        fcomp qword ptr ds : [public_658b090]
        fnstsw ax
        test ah, 1
        je public_6386748
        public_6386743 : nop
        and edx, ebp
        mov dword ptr ds : [ecx+0x50], edx
        public_6386748 : nop
        mov ecx, dword ptr ds : [esi]
        add esi, 4
        test ecx, ecx
        jne public_6386728
        public_6386751 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_636ecc0
        add esp, 4
        xor edx, edx
        test edi, edi
        pop ebp
        pop ebx
        je public_638677f
        mov eax, edi
        public_6386768 : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_638677f
        test dword ptr ds : [eax+0x50], 0x40000
        je public_6386779
        inc edx
        public_6386779 : nop
        mov eax, ecx
        test eax, eax
        jne public_6386768
        public_638677f : nop
        pop edi
        mov dword ptr ds : [public_658b850], edx
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63865b0)
    }
}

#undef public_63865fd
#undef public_6386609
#undef public_638662d
#undef public_6386634
#undef public_6386691
#undef public_63866a5
#undef public_63866a9
#undef public_63866af
#undef public_63866b3
#undef public_63866ec
#undef public_6386700
#undef public_6386704
#undef public_6386728
#undef public_6386743
#undef public_6386748
#undef public_6386751
#undef public_6386768
#undef public_6386779
#undef public_638677f
