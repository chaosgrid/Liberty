#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4288e0);
CLANG_FORWARD_PROC_SYMBOL(public_428ba0);
CLANG_FORWARD_PROC_SYMBOL(public_509f20);
CLANG_FORWARD_PROC_SYMBOL(public_520130);
CLANG_FORWARD_PROC_SYMBOL(public_5201c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54beb0);
CLANG_FORWARD_PROC_SYMBOL(public_554eb0);
CLANG_FORWARD_PROC_SYMBOL(public_555240);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_554ed5 _public_554ed5
#define public_554efa _public_554efa
#define public_554f30 _public_554f30
#define public_554f44 _public_554f44
#define public_554f53 _public_554f53
#define public_554f63 _public_554f63
#define public_554f65 _public_554f65
#define public_554f97 _public_554f97
#define public_554fa1 _public_554fa1
#define public_554fec _public_554fec
#define public_554ff6 _public_554ff6
#define public_555008 _public_555008
#define public_555016 _public_555016
#define public_555028 _public_555028
#define public_55503d _public_55503d
#define public_555093 _public_555093
#define public_5550b4 _public_5550b4
#define public_5550cf _public_5550cf
#define public_5550d1 _public_5550d1
#define public_5550f1 _public_5550f1
#define public_555101 _public_555101
#define public_555136 _public_555136
#define public_555143 _public_555143
#define public_55514b _public_55514b
#define public_555180 _public_555180
#define public_55518f _public_55518f
#define public_55519f _public_55519f
#define public_5551a8 _public_5551a8
#define public_5551b1 _public_5551b1
#define public_5551d2 _public_5551d2
#define public_5551df _public_5551df
#define public_5551ea _public_5551ea
#define public_5551f5 _public_5551f5
#define public_5551fc _public_5551fc
#define public_55522a _public_55522a

PROC_DECLARE(0x554eb0, internal_554eb0, public_554eb0);
extern "C" NAKED register_t __cdecl internal_554eb0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        call public_40f130
        mov edi, eax
        xor esi, esi
        cmp edi, esi
        je public_554ed5
        mov eax, dword ptr ds : [public_679954]
        push edi
        push eax
        call public_54beb0
        add esp, 8
        jmp public_554efa
        public_554ed5 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e11cc @0x554edb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e11cc
        push 0x513
/*FIXUP push offset public_5e0f00 @0x554ee5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0f00
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x554eef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_554efa : nop
        push 0x25
        call public_5792b0
        mov ebx, dword ptr ss : [esp+0x30]
        add esp, 4
        test eax, eax
        je public_554f65
        push 0x27
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_554f44
        cmp dword ptr ds : [public_6798cc], esi
        jbe public_554f44
        mov eax, dword ptr ds : [public_6798c8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_554f44
        lea ecx, ds:[ecx]
        public_554f30 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6798c8]
        jne public_554f30
        public_554f44 : nop
        call public_509f20
        mov ebp, dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_554f63
        public_554f53 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_554f53
        public_554f63 : nop
        xor esi, esi
        public_554f65 : nop
        call public_5201c0
        test eax, eax
        jle public_554fa1
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_554f97
        push 0x21
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_554f97
        mov ecx, dword ptr ds : [public_613ed0]
        push ebx
        push ecx
        call dword ptr ds : [public_5c6ba4]
        add esp, 8
        public_554f97 : nop
        push ebx
        push edi
        call public_520130
        add esp, 8
        public_554fa1 : nop
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], esi
        call public_428ba0
        add esp, 4
        test al, al
        je public_554ff6
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x74]
        test al, al
        je public_554fec
        mov dword ptr ds : [public_6798d8], esi
        mov dword ptr ds : [public_6798dc], esi
        mov dword ptr ds : [public_6798e0], esi
        mov dword ptr ds : [public_6798e4], esi
        mov dword ptr ds : [public_6798d4], 0xBF800000
        mov byte ptr ds : [public_6798d0], 1
        public_554fec : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_554ff6 : nop
        mov ecx, dword ptr ds : [public_6798e4]
        cmp ecx, esi
        mov edx, dword ptr ds : [public_6798f4]
        je public_555008
        mov edx, ecx
        public_555008 : nop
        mov eax, dword ptr ds : [public_6798e0]
        cmp eax, esi
        jne public_555016
        mov eax, dword ptr ds : [public_6798f0]
        public_555016 : nop
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [public_6798dc]
        cmp eax, esi
        jne public_555028
        mov eax, dword ptr ds : [public_6798ec]
        public_555028 : nop
        mov ebp, dword ptr ds : [public_6798e8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_6798d8]
        cmp eax, esi
        je public_55503d
        mov ebp, eax
        public_55503d : nop
        cmp ecx, esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov edi, edx
        jne public_555093
        call public_54baf0
        mov ecx, dword ptr ds : [public_679954]
        cmp ecx, esi
        je public_555093
        cmp eax, esi
        je public_555093
        mov ebx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
/*FIXUP push 0x400000 @0x55505e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], 0x400000
        mov ecx, eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [public_679954]
        push eax
        call dword ptr ds : [ebx+0x30]
        cmp eax, esi
        je public_555093
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x74]
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_555093
        mov edi, dword ptr ss : [esp+0x18]
        public_555093 : nop
        mov ecx, dword ptr ds : [public_679958]
        mov al, byte ptr ds : [public_679968]
        cmp ecx, 2
        sete byte ptr ss : [esp+0x13]
        cmp al, 1
        mov byte ptr ss : [esp+0x12], 0
        jne public_5550b4
        mov byte ptr ss : [esp+0x12], 1
        public_5550b4 : nop
        mov byte ptr ds : [public_679968], 0
        call public_54baf0
        cmp eax, esi
        je public_5550cf
        cmp dword ptr ds : [eax+0x158], esi
        setne bl
        jmp public_5550d1
        public_5550cf : nop
        xor bl, bl
        public_5550d1 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_5550f1
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_5550f1
        fld dword ptr ds : [public_5c7474]
        mov cl, 1
        mov byte ptr ds : [public_679960], cl
        jmp public_555101
        public_5550f1 : nop
        mov cl, byte ptr ds : [public_679960]
        test cl, cl
        je public_555136
        fld dword ptr ds : [public_679964]
        public_555101 : nop
        fadd dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [public_5c6ba0]
        fst dword ptr ds : [public_679964]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 1
        jne public_555136
        xor cl, cl
        mov byte ptr ds : [public_679960], cl
        mov dword ptr ds : [public_679964], 0
        mov dword ptr ds : [public_67996c], 0x447A0000
        public_555136 : nop
        cmp ebp, esi
        je public_555143
        mov byte ptr ds : [public_679960], 0
        jmp public_55514b
        public_555143 : nop
        test cl, cl
        jne public_55522a
        public_55514b : nop
        fld dword ptr ds : [public_67996c]
        fadd dword ptr ss : [esp+0x2C]
        fst dword ptr ds : [public_67996c]
        fcomp dword ptr ds : [public_5d55b4]
        fnstsw ax
        test ah, 1
        jne public_555180
        call public_555240
        mov ebp, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [public_679970], al
        mov dword ptr ds : [public_67996c], 0
        public_555180 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_55518f
        mov ecx, 2
        jmp public_5551a8
        public_55518f : nop
        mov al, byte ptr ds : [public_679970]
        test al, al
        je public_55519f
        mov ecx, 1
        jmp public_5551a8
        public_55519f : nop
        neg bl
        sbb ebx, ebx
        and ebx, 4
        mov ecx, ebx
        public_5551a8 : nop
        cmp ebp, esi
        je public_5551b1
        mov ecx, 3
        public_5551b1 : nop
        mov eax, dword ptr ds : [public_679958]
        cmp ecx, eax
        je public_5551d2
        mov eax, ecx
        mov dword ptr ds : [public_679958], eax
        mov byte ptr ds : [public_679960], 1
        mov dword ptr ds : [public_679964], 0
        public_5551d2 : nop
        cmp eax, 4
        je public_5551fc
        cmp eax, esi
        jne public_5551df
        mov esi, edi
        jmp public_5551fc
        public_5551df : nop
        cmp eax, 1
        jne public_5551ea
        mov esi, dword ptr ss : [esp+0x20]
        jmp public_5551fc
        public_5551ea : nop
        cmp eax, 2
        jne public_5551f5
        mov esi, dword ptr ss : [esp+0x24]
        jmp public_5551fc
        public_5551f5 : nop
        cmp eax, 3
        jne public_5551fc
        mov esi, ebp
        public_5551fc : nop
        cmp dword ptr ds : [public_67995c], esi
        je public_55522a
        mov eax, dword ptr ds : [public_6798d4]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_6798d0]
        push eax
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], esi
        push ecx
        push edx
        call public_4288e0
        add esp, 0xC
        mov dword ptr ds : [public_67995c], esi
        public_55522a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x554eb0)
    }
}

#undef public_554ed5
#undef public_554efa
#undef public_554f30
#undef public_554f44
#undef public_554f53
#undef public_554f63
#undef public_554f65
#undef public_554f97
#undef public_554fa1
#undef public_554fec
#undef public_554ff6
#undef public_555008
#undef public_555016
#undef public_555028
#undef public_55503d
#undef public_555093
#undef public_5550b4
#undef public_5550cf
#undef public_5550d1
#undef public_5550f1
#undef public_555101
#undef public_555136
#undef public_555143
#undef public_55514b
#undef public_555180
#undef public_55518f
#undef public_55519f
#undef public_5551a8
#undef public_5551b1
#undef public_5551d2
#undef public_5551df
#undef public_5551ea
#undef public_5551f5
#undef public_5551fc
#undef public_55522a
