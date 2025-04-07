#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ecf641 _public_6ecf641
#define public_6ecf6bd _public_6ecf6bd
#define public_6ecf6d9 _public_6ecf6d9
#define public_6ecf709 _public_6ecf709
#define public_6ecf843 _public_6ecf843
#define public_6ecf865 _public_6ecf865
#define public_6ecf86b _public_6ecf86b
#define public_6ecf880 _public_6ecf880
#define public_6ecf895 _public_6ecf895
#define public_6ecf8a0 _public_6ecf8a0
#define public_6ecf8ae _public_6ecf8ae
#define public_6ecf8b3 _public_6ecf8b3
#define public_6ecf8ba _public_6ecf8ba
#define public_6ecf8e1 _public_6ecf8e1
#define public_6ecf92c _public_6ecf92c
#define public_6ecf92e _public_6ecf92e
#define public_6ecf94c _public_6ecf94c
#define public_6ecf985 _public_6ecf985
#define public_6ecf994 _public_6ecf994
#define public_6ecf9a1 _public_6ecf9a1
#define public_6ecfa04 _public_6ecfa04
#define public_6ecfa0e _public_6ecfa0e
#define public_6ecfa10 _public_6ecfa10
#define public_6ecfa14 _public_6ecfa14

PROC_DECLARE(0x6ecf5d0, internal_6ecf5d0, public_6ecf5d0);
extern "C" NAKED register_t __cdecl internal_6ecf5d0()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push edi
        push eax
        call public_6f75f30
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_6ecfa14
        lea ecx, ds:[esi+8]
        push ecx
        call public_6f49b00
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_6ecfa14
        mov ecx, ebp
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6ecfa14
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, 0x20
        jne public_6ecf6bd
        mov eax, dword ptr ds : [esi+0x38]
        test eax, 0x3FFFFFFF
        je public_6ecf641
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[esi+0x44]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        public_6ecf641 : nop
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        jne public_6ecfa14
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebp
        call public_6f47af0
        fld dword ptr ds : [esi+0x44]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x48]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+0x4C]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+0x3C]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_6ecfa14
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6f47af0
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x50]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov byte ptr ds : [esi+0x68], 1
        jmp public_6ecf8e1
        public_6ecf6bd : nop
        cmp eax, 0xB
        jne public_6ecf709
        mov ecx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [esi+4], eax
        je public_6ecf6d9
        test eax, 0x3FFFFFFF
        jne public_6ecfa14
        public_6ecf6d9 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, dword ptr ds : [ecx+0xC]
        jne public_6ecfa14
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6ecfa14
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        test al, al
        jne public_6ecfa14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        public_6ecf709 : nop
        cmp eax, 0x3E
        jne public_6ecf94c
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        je public_6ecfa14
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+0x64]
        jne public_6ecfa14
        fld dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x50]
        fsub dword ptr ds : [esi+0x44]
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+0x48]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+0x4C]
        fstp dword ptr ss : [esp+0x1C]
        call public_6f47af0
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x44]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x48]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+0x4C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fsub st, st(1)
        fcomp dword ptr ds : [esi+0x5C]
        fnstsw ax
        test ah, 5
        jp public_6ecf92c
        fcomp dword ptr ds : [esi+0x3C]
        fnstsw ax
        test ah, 0x41
        jne public_6ecf92e
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6f47af0
        mov edx, dword ptr ds : [eax]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x38]
        test eax, 0x3FFFFFFF
        je public_6ecf8ae
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6ecf8ba
        mov eax, dword ptr ss : [esp+0x54]
        test eax, 0x7F0000
        je public_6ecf86b
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        mov ecx, ebx
        call public_6f73990
        test eax, eax
        mov dword ptr ss : [esp+0x50], eax
        je public_6ecf8ba
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test al, al
        je public_6ecf843
        mov al, byte ptr ds : [esi+0x61]
        test al, al
        je public_6ecf843
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6fb4684 @0x6ecf837*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4684
        mov ecx, esi
        call dword ptr ds : [eax+8]
        jmp public_6ecf8ba
        public_6ecf843 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6ecf865
        mov al, byte ptr ds : [esi+0x62]
        test al, al
        je public_6ecf865
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6fb46d0 @0x6ecf859*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46d0
        mov ecx, esi
        call dword ptr ds : [eax+8]
        jmp public_6ecf8ba
        public_6ecf865 : nop
        mov byte ptr ds : [esi+0x68], 0
        jmp public_6ecf8ba
        public_6ecf86b : nop
        test ah, 1
        jne public_6ecf8a0
        test al, 0x20
        jne public_6ecf8a0
        test ah, 8
        je public_6ecf880
/*FIXUP push offset public_6fb46b4 @0x6ecf879*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46b4
        jmp public_6ecf8b3
        public_6ecf880 : nop
        test eax, 0xC40
        je public_6ecf895
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6fb46a4 @0x6ecf889*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46a4
        mov ecx, esi
        call dword ptr ds : [eax+8]
        jmp public_6ecf8ba
        public_6ecf895 : nop
        test al, al
        jns public_6ecf8ba
/*FIXUP push offset public_6fb46c4 @0x6ecf899*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46c4
        jmp public_6ecf8b3
        public_6ecf8a0 : nop
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_6fb4694 @0x6ecf8a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4694
        mov ecx, esi
        call dword ptr ds : [eax+8]
        jmp public_6ecf8ba
/*FIXUP public_6ecf8ae : nop
        push offset public_6fb46d0 @0x6ecf8ae*/
  FIXUP public_6ecf8ae : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb46d0
        public_6ecf8b3 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        public_6ecf8ba : nop
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        je public_6ecfa14
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6f47af0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        public_6ecf8e1 : nop
        mov dword ptr ds : [esi+0x5C], 0x44610000
        mov ecx, dword ptr ds : [public_6fce76c]
        mov eax, ecx
        inc ecx
        mov dword ptr ds : [public_6fce76c], ecx
        mov edx, dword ptr ds : [esi+0x34]
        push 0x41A00000
        lea ecx, ss:[esp+0x14]
        push ecx
        add edx, 4
        push edx
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 8
        public_6ecf92c : nop
        fstp st(0)
        public_6ecf92e : nop
        pop edi
        mov dword ptr ds : [esi+0x64], 0
        mov byte ptr ds : [esi+0x68], 0
        mov dword ptr ds : [esi+0x6C], 4
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 8
        public_6ecf94c : nop
        cmp eax, 0x11
        jne public_6ecf985
        mov ecx, dword ptr ds : [esi+0x38]
        lea eax, ss:[esp+0x50]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6ecfa14
        test dword ptr ss : [esp+0x50], 0xC40
        je public_6ecfa14
        mov edi, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [esi+0x38]
        cmp edx, dword ptr ds : [edi+4]
        jmp public_6ecf994
        public_6ecf985 : nop
        cmp eax, 0x16
        jne public_6ecf9a1
        mov edi, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, dword ptr ds : [edi+4]
        public_6ecf994 : nop
        jne public_6ecfa14
        mov ecx, ebp
        call public_6f481e0
        cmp eax, dword ptr ds : [edi]
        jmp public_6ecfa0e
        public_6ecf9a1 : nop
        cmp eax, 0x27
        jne public_6ecfa14
        mov ebx, dword ptr ss : [esp+0x54]
        mov edi, dword ptr ds : [ebx]
        mov ecx, ebp
        call public_6f481e0
        cmp edi, eax
        jne public_6ecfa14
        test edi, 0x3FFFFFFF
        je public_6ecfa14
        mov edx, dword ptr ds : [esi+0x38]
        lea ecx, ss:[esp+0x50]
        lea edi, ds:[esi+0x38]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        add esp, 8
        test eax, eax
        jne public_6ecfa14
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x54]
        push eax
        push edi
        call dword ptr ds : [public_6fb3428]
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 8
        test ch, 1
        je public_6ecfa04
        mov eax, dword ptr ds : [ebx+4]
        test eax, 0x3FFFFFFF
        je public_6ecfa04
        cmp dword ptr ss : [esp+0x54], eax
        je public_6ecfa10
        public_6ecfa04 : nop
        test cl, 0x20
        je public_6ecfa14
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [ebx+8]
        public_6ecfa0e : nop
        jne public_6ecfa14
        public_6ecfa10 : nop
        mov byte ptr ds : [esi+0x20], 1
        public_6ecfa14 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6ecf5d0)
    }
}

#undef public_6ecf641
#undef public_6ecf6bd
#undef public_6ecf6d9
#undef public_6ecf709
#undef public_6ecf843
#undef public_6ecf865
#undef public_6ecf86b
#undef public_6ecf880
#undef public_6ecf895
#undef public_6ecf8a0
#undef public_6ecf8ae
#undef public_6ecf8b3
#undef public_6ecf8ba
#undef public_6ecf8e1
#undef public_6ecf92c
#undef public_6ecf92e
#undef public_6ecf94c
#undef public_6ecf985
#undef public_6ecf994
#undef public_6ecf9a1
#undef public_6ecfa04
#undef public_6ecfa0e
#undef public_6ecfa10
#undef public_6ecfa14
