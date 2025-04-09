#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d630);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_42abc0);
CLANG_FORWARD_PROC_SYMBOL(public_437b70);
CLANG_FORWARD_PROC_SYMBOL(public_437de0);
CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_438060);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_475dd0);
CLANG_FORWARD_PROC_SYMBOL(public_476080);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbd61);

#define public_4760b5 _public_4760b5
#define public_47610f _public_47610f
#define public_4761c7 _public_4761c7
#define public_476280 _public_476280
#define public_4762d0 _public_4762d0
#define public_476340 _public_476340
#define public_476352 _public_476352
#define public_47637c _public_47637c
#define public_4763d8 _public_4763d8
#define public_476491 _public_476491
#define public_476500 _public_476500
#define public_4765ca _public_4765ca
#define public_4765e6 _public_4765e6
#define public_4765f4 _public_4765f4
#define public_476648 _public_476648
#define public_476707 _public_476707
#define public_476795 _public_476795
#define public_476859 _public_476859
#define public_47685d _public_47685d
#define public_476877 _public_476877
#define public_476889 _public_476889
#define public_4768a0 _public_4768a0
#define public_4768cb _public_4768cb
#define public_4768f3 _public_4768f3
#define public_47691e _public_47691e
#define public_47692d _public_47692d
#define public_4769ab _public_4769ab
#define public_476a7e _public_476a7e
#define public_476ae4 _public_476ae4
#define public_476b50 _public_476b50
#define public_476b54 _public_476b54
#define public_476b6a _public_476b6a
#define public_476b7c _public_476b7c
#define public_476b84 _public_476b84
#define public_476bb1 _public_476bb1
#define public_476bc4 _public_476bc4
#define public_476bd8 _public_476bd8

PROC_DECLARE(0x476080, internal_476080, public_476080);
extern "C" NAKED register_t __cdecl internal_476080()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bbd61 @0x476088*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbd61
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x18]
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        test al, al
        push ebx
        mov bl, byte ptr ss : [esp+0x60]
        jne public_4760b5
        mov al, byte ptr ss : [esp+0x5C]
        test al, al
        jne public_4760b5
        test bl, bl
        je public_476bd8
        public_4760b5 : nop
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c62b8]
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        call edi
        mov edx, dword ptr ds : [eax]
        xor ebp, ebp
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], ebp
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x6C], eax
        mov esi, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push eax
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 1
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x6C]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x54], 0
        je public_47610f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x6C], ebp
        public_47610f : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        call dword ptr ds : [public_5c615c]
        mov ecx, eax
        call dword ptr ds : [public_5c6330]
        lea ecx, ss:[esp+0x38]
        mov ebp, eax
        call public_42abc0
        mov edx, dword ptr ss : [ebp+8]
        push ebp
        mov eax, edx
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x5C], 2
        mov dword ptr ss : [esp+0x74], edx
        call public_437de0
        mov ebp, dword ptr ds : [public_5c70b4]
        test bl, bl
        mov ebx, dword ptr ds : [public_5c71c8]
        mov dword ptr ss : [esp+0x5C], 0
        je public_47637c
        push 0xF64
        lea ecx, ss:[esp+0x1C]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 3
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push eax
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 4
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x6C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x54], 3
        je public_4761c7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x6C], 0
        public_4761c7 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 2
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_5d0254 @0x4761d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4761db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 8
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x4761e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4761f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        push esi
        push 0x669
        call public_57da40
/*FIXUP push offset public_5d0a64 @0x476208*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a64
/*FIXUP push offset public_66fc60 @0x47620d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 0x20
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x47621a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476225*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 5
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push eax
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 6
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x6C]
        xor edi, edi
        cmp ecx, edi
        mov byte ptr ss : [esp+0x54], 5
        je public_476280
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x6C], edi
        public_476280 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 2
        call dword ptr ds : [public_5c62b4]
        mov cl, byte ptr ss : [esp+0x64]
        push edi
        mov byte ptr ss : [esp+0x24], cl
        push edi
        lea ecx, ss:[esp+0x28]
        call public_42a7e0
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        push 3
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x5C], 7
        call public_437f70
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_476340
        lea esp, ss:[esp]
        public_4762d0 : nop
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_5c6088]
        mov eax, dword ptr ds : [eax+0x90]
        push eax
        call dword ptr ds : [public_5c6088]
        mov eax, dword ptr ds : [eax+0x54]
        push eax
        call dword ptr ds : [public_5c61fc]
        mov eax, dword ptr ds : [eax+0x14]
        push esi
        push eax
        call public_57da40
/*FIXUP push offset public_5d0a54 @0x4762fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a54
/*FIXUP push offset public_66fc60 @0x476302*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 0x1C
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x47630f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x47631a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edx, dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x10
        inc edx
        cmp edi, eax
        mov dword ptr ss : [esp+0x5C], edx
        jne public_4762d0
        mov ecx, edx
        test ecx, ecx
        jne public_476352
        public_476340 : nop
        push esi
        push 0x67B
        call public_57da40
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        public_476352 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x74]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x60], 2
        call public_4a2f80
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_5b7e1d
        mov edi, dword ptr ds : [public_5c62b8]
        add esp, 4
        public_47637c : nop
        mov al, byte ptr ss : [esp+0x64]
        test al, al
        je public_47692d
        push 0xF64
        lea ecx, ss:[esp+0x1C]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x64]
        push ecx
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 9
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x64]
        test ecx, ecx
        mov byte ptr ss : [esp+0x54], 8
        je public_4763d8
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x64], 0
        public_4763d8 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 2
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_5d0254 @0x4763e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4763ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 8
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x4763f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476404*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        push esi
        push 0x668
        call public_57da40
/*FIXUP push offset public_5d0a64 @0x476419*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a64
/*FIXUP push offset public_66fc60 @0x47641e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 0x20
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x47642b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476436*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x64]
        push ecx
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 0xB
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x64]
        xor edi, edi
        cmp ecx, edi
        mov byte ptr ss : [esp+0x54], 0xA
        je public_476491
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x64], edi
        public_476491 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 2
        call dword ptr ds : [public_5c62b4]
        mov cl, byte ptr ss : [esp+0x64]
        push 0xC
        mov byte ptr ss : [esp+0x30], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], edi
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x5C], 0xC
        call public_437f70
        lea eax, ss:[esp+0x2C]
        push eax
        call public_475dd0
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x64], edi
        mov edi, dword ptr ds : [public_5c70ac]
        mov dword ptr ss : [esp+0x6C], eax
        je public_4765e6
        lea esp, ss:[esp]
        public_476500 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jle public_4765ca
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_5c6360]
        push eax
        mov dword ptr ss : [esp+0x64], eax
        call dword ptr ds : [public_5c603c]
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        mov dword ptr ss : [esp+0x6C], eax
        call dword ptr ds : [public_5c629c]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [eax+0x48]
        add esp, 0xC
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_438060
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [eax+0x5C]
        fnstsw ax
        test ah, 0x41
        jp public_4765ca
        mov ecx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ecx+0x14]
        push esi
        push eax
        call public_57da40
        fld dword ptr ss : [esp+0x18]
        push 0xFFFFFFFF
        call public_5b7ec0
        push eax
/*FIXUP push offset public_66dc60 @0x476575*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call public_4779a0
/*FIXUP push offset public_5cef90 @0x47657f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
/*FIXUP push offset public_66fc60 @0x476584*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
/*FIXUP push offset public_66dc60 @0x47658b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x476590*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_5d0a54 @0x476597*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a54
/*FIXUP push offset public_66fc60 @0x47659c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x2C
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x4765a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4765b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov eax, dword ptr ss : [esp+0x74]
        add esp, 0x10
        inc eax
        mov dword ptr ss : [esp+0x64], eax
        public_4765ca : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x6C], eax
        jne public_476500
        mov eax, dword ptr ss : [esp+0x64]
        test eax, eax
        jne public_4765f4
        public_4765e6 : nop
        push esi
        push 0x67B
        call public_57da40
        add esp, 8
        public_4765f4 : nop
        push 0xF64
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 0xD
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x64]
        push ecx
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 0xE
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x64]
        test ecx, ecx
        mov byte ptr ss : [esp+0x54], 0xD
        je public_476648
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x64], 0
        public_476648 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 0xC
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_5d0254 @0x476657*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x47665c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 8
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x476669*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476674*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        push esi
        push 0x667
        call public_57da40
/*FIXUP push offset public_5d0a64 @0x476689*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a64
/*FIXUP push offset public_66fc60 @0x47668e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 0x20
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x47669b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4766a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        push 0x9CA4
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 0xF
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x64]
        push ecx
        push eax
        lea edx, ss:[esp+0x74]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x60], 0x10
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x64]
        test ecx, ecx
        mov byte ptr ss : [esp+0x54], 0xF
        je public_476707
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x64], 0
        public_476707 : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 0xC
        call dword ptr ds : [public_5c62b4]
        mov dword ptr ss : [esp+0x64], 0
        call dword ptr ds : [public_5c6158]
        mov cl, byte ptr ds : [eax]
        push 0xC
        mov dword ptr ss : [esp+0x70], eax
        mov byte ptr ss : [esp+0x24], cl
        call public_5b7e84
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ds : [edx+4]
        add esp, 4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x60], eax
        call public_53e430
        mov edx, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x5C]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_41d630
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x54], 0x11
        mov dword ptr ss : [esp+0x6C], ecx
        je public_476877
        public_476795 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ds : [ecx+0x50]
        test ecx, ecx
        jbe public_47685d
        push ecx
        call dword ptr ds : [public_5c603c]
        mov edx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [edx+0x50]
        push eax
        call dword ptr ds : [public_5c629c]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [eax+0x48]
        add esp, 8
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_438060
        fst dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x5C]
        fcomp dword ptr ds : [ecx+0x64]
        fnstsw ax
        test ah, 1
        jne public_476859
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [edx+0x14]
        push esi
        push eax
        call public_57da40
        fld dword ptr ss : [esp+0x18]
        push 0xFFFFFFFF
        call public_5b7ec0
        push eax
/*FIXUP push offset public_66dc60 @0x476804*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call public_4779a0
/*FIXUP push offset public_5cef90 @0x47680e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
/*FIXUP push offset public_66fc60 @0x476813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
/*FIXUP push offset public_66dc60 @0x47681a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47681f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_5d0a54 @0x476826*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a54
/*FIXUP push offset public_66fc60 @0x47682b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x2C
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x476838*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476843*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov eax, dword ptr ss : [esp+0x74]
        add esp, 0x10
        inc eax
        mov dword ptr ss : [esp+0x64], eax
        public_476859 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_47685d : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x6C], ecx
        jne public_476795
        mov ecx, dword ptr ss : [esp+0x64]
        test ecx, ecx
        jne public_476889
        public_476877 : nop
        push esi
        push 0x67B
        call public_57da40
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        public_476889 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x54], 0xC
        mov edi, eax
        mov dword ptr ss : [esp+0x64], ecx
        je public_4768cb
        lea ebx, ds:[ebx]
        public_4768a0 : nop
        push 0
        lea edx, ss:[esp+0x70]
        push edx
        lea ecx, ss:[esp+0x6C]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_516f70
        cmp dword ptr ss : [esp+0x64], edi
        jne public_4768a0
        mov eax, dword ptr ss : [esp+0x24]
        public_4768cb : nop
        push eax
        call public_5b7e1d
        xor eax, eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov byte ptr ss : [esp+0x54], 2
        mov edi, eax
        mov dword ptr ss : [esp+0x64], ecx
        je public_47691e
        public_4768f3 : nop
        push 0
        lea edx, ss:[esp+0x70]
        push edx
        lea ecx, ss:[esp+0x6C]
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_516f70
        cmp dword ptr ss : [esp+0x64], edi
        jne public_4768f3
        mov eax, dword ptr ss : [esp+0x30]
        public_47691e : nop
        push eax
        call public_5b7e1d
        mov edi, dword ptr ds : [public_5c62b8]
        add esp, 4
        public_47692d : nop
        mov al, byte ptr ss : [esp+0x68]
        test al, al
        je public_476bc4
        push 0xF64
        lea ecx, ss:[esp+0x1C]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x5C], 0x13
        mov dword ptr ss : [esp+0x70], eax
        call public_42a7e0
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x64]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        test ecx, ecx
        mov byte ptr ss : [esp+0x54], 0x12
        je public_4769ab
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x64], 0
        public_4769ab : nop
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x54], 2
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_5d0254 @0x4769ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4769bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 8
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x4769cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4769d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        push esi
        push 0x66A
        call public_57da40
/*FIXUP push offset public_5d0a64 @0x4769ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a64
/*FIXUP push offset public_66fc60 @0x4769f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 0x20
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x4769fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476a09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        push 0x9CA4
        lea ecx, ss:[esp+0x14]
        call edi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x54], 0x14
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x64], eax
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x5C], 0x15
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x64]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        xor edi, edi
        cmp ecx, edi
        mov byte ptr ss : [esp+0x54], 0x14
        je public_476a7e
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x64], edi
        public_476a7e : nop
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x54], 2
        call dword ptr ds : [public_5c62b4]
        mov al, byte ptr ss : [esp+0x64]
        push 0xC
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x24], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        push 1
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x5C], 0x16
        call public_437f70
        lea edx, ss:[esp+0x20]
        push edx
        call public_475dd0
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x68], ecx
        je public_476b6a
        public_476ae4 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        jle public_476b54
        mov eax, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [public_5c6360]
        push eax
        call dword ptr ds : [public_5c603c]
        mov edi, eax
        mov edx, dword ptr ds : [edi]
        add esp, 8
        mov ecx, edi
        call dword ptr ds : [edx+0x18]
        cmp eax, 3
        je public_476b50
        mov edi, dword ptr ds : [edi+0x14]
        push esi
        push edi
        call public_57da40
/*FIXUP push offset public_5d0a54 @0x476b1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a54
/*FIXUP push offset public_66fc60 @0x476b22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 0x10
        push 0
        push esi
/*FIXUP push offset public_66fc60 @0x476b2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebx
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x476b3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov eax, dword ptr ss : [esp+0x7C]
        add esp, 0x10
        inc eax
        mov dword ptr ss : [esp+0x6C], eax
        public_476b50 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_476b54 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x68], ecx
        jne public_476ae4
        mov ecx, dword ptr ss : [esp+0x6C]
        test ecx, ecx
        jne public_476b7c
        public_476b6a : nop
        push esi
        push 0x67B
        call public_57da40
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        public_476b7c : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_476bb1
        public_476b84 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x28], ecx
        jne public_476b84
        mov eax, dword ptr ss : [esp+0x24]
        public_476bb1 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        public_476bc4 : nop
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_437b70
        pop edi
        pop esi
        pop ebp
        public_476bd8 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x476080)
    }
}

#undef public_4760b5
#undef public_47610f
#undef public_4761c7
#undef public_476280
#undef public_4762d0
#undef public_476340
#undef public_476352
#undef public_47637c
#undef public_4763d8
#undef public_476491
#undef public_476500
#undef public_4765ca
#undef public_4765e6
#undef public_4765f4
#undef public_476648
#undef public_476707
#undef public_476795
#undef public_476859
#undef public_47685d
#undef public_476877
#undef public_476889
#undef public_4768a0
#undef public_4768cb
#undef public_4768f3
#undef public_47691e
#undef public_47692d
#undef public_4769ab
#undef public_476a7e
#undef public_476ae4
#undef public_476b50
#undef public_476b54
#undef public_476b6a
#undef public_476b7c
#undef public_476b84
#undef public_476bb1
#undef public_476bc4
#undef public_476bd8
