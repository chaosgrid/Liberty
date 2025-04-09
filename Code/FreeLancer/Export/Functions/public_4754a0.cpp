#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_458890);
CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4754a0);
CLANG_FORWARD_PROC_SYMBOL(public_476080);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4b50);
CLANG_FORWARD_PROC_SYMBOL(public_4d4d00);
CLANG_FORWARD_PROC_SYMBOL(public_4d4d50);
CLANG_FORWARD_PROC_SYMBOL(public_4f42a0);
CLANG_FORWARD_PROC_SYMBOL(public_5472a0);
CLANG_FORWARD_PROC_SYMBOL(public_5472d0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_579a40);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbc6e);

#define public_4755a5 _public_4755a5
#define public_4755fc _public_4755fc
#define public_475676 _public_475676
#define public_47569e _public_47569e
#define public_475751 _public_475751
#define public_4757ca _public_4757ca
#define public_4757e3 _public_4757e3
#define public_4757fa _public_4757fa
#define public_47580e _public_47580e
#define public_47581d _public_47581d
#define public_475939 _public_475939
#define public_4759b0 _public_4759b0
#define public_475a0e _public_475a0e
#define public_475a8f _public_475a8f
#define public_475ace _public_475ace
#define public_475b3e _public_475b3e
#define public_475b47 _public_475b47
#define public_475b4e _public_475b4e
#define public_475b7d _public_475b7d
#define public_475b93 _public_475b93
#define public_475c6f _public_475c6f
#define public_475c78 _public_475c78
#define public_475c81 _public_475c81
#define public_475d11 _public_475d11
#define public_475d35 _public_475d35
#define public_475d39 _public_475d39
#define public_475d70 _public_475d70
#define public_475da5 _public_475da5
#define public_475daf _public_475daf

PROC_DECLARE(0x4754a0, internal_4754a0, public_4754a0);
extern "C" NAKED register_t __cdecl internal_4754a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbc6e @0x4754a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbc6e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x238
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x250]
        xor ebx, ebx
        cmp ecx, ebx
        push edi
        mov dword ptr ss : [esp+0x40], ebp
        je public_475daf
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov edi, eax
        cmp edi, ebx
        je public_475daf
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_475daf
        mov edx, dword ptr ds : [edi+0xE0]
        mov al, byte ptr ss : [esp+0x13]
        push esi
        push 0xC
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], edx
        mov byte ptr ss : [esp+0x2C], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x254], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x250], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x258], 2
        call public_42a7e0
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x250], 1
        je public_4755a5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_4755a5 : nop
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x250], 0
        call dword ptr ds : [public_5c62b4]
        push edi
        call public_4d4d00
        add esp, 4
        test al, 1
        mov byte ptr ss : [esp+0x17], al
        push edi
        mov word ptr ds : [public_66fc60], bx
        jne public_475676
        call public_4d4d50
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_4755fc
        mov word ptr ss : [esp+0x48], bx
        public_4755fc : nop
        lea eax, ss:[esp+0x48]
        push eax
/*FIXUP push offset public_66fc60 @0x475601*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        add esp, 8
/*FIXUP push offset public_66fc60 @0x47560f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ss : [ebp+0x334]
        mov edx, dword ptr ds : [ecx]
        push ebx
/*FIXUP push offset public_66fc60 @0x475623*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66fc60 @0x47563c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0xD6EF
        push ecx
        call public_4347e0
        add esp, 0x10
        push ebx
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_66fc60 @0x475655*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x475664*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        jmp public_475d39
        public_475676 : nop
        call public_5472a0
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x50]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_47569e
        mov word ptr ss : [esp+0x48], bx
        public_47569e : nop
        mov esi, dword ptr ds : [public_5c70ac]
        lea eax, ss:[esp+0x48]
        push eax
/*FIXUP push offset public_66fc60 @0x4756a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 8
/*FIXUP push offset public_66fc60 @0x4756b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_616420]
        mov ecx, dword ptr ss : [ebp+0x334]
        mov edx, dword ptr ds : [ecx]
        push ebx
/*FIXUP push offset public_66fc60 @0x4756c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov word ptr ds : [public_66fc60], bx
        call public_54baf0
        mov ebp, eax
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        lea eax, ss:[esp+0x38]
        push eax
        push edi
        mov byte ptr ss : [esp+0x258], 3
        call public_5472d0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 8
        cmp eax, ebx
        je public_475751
        cmp word ptr ds : [eax], bx
        je public_475751
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x47571a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x454
        push edx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x47572a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47572f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        mov eax, dword ptr ss : [esp+0x50]
        push eax
/*FIXUP push offset public_66fc60 @0x47573b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
/*FIXUP push offset public_5d0254 @0x475742*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475747*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 0x28
        public_475751 : nop
        cmp ebp, ebx
        je public_47581d
        test dword ptr ss : [esp+0x24], 0x7F0100
        je public_47581d
        mov ecx, dword ptr ss : [esp+0x258]
        push ecx
        push ebp
        call public_45a490
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66dc60 @0x47577c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        mov ebp, eax
        mov eax, dword ptr ds : [public_67eca8]
        push 0x455
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x475793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475798*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 0x20
        cmp ebp, 0xFFFFFFFF
        je public_4757e3
        cmp ebp, ebx
        je public_4757ca
        cmp ebp, 1
        jne public_47580e
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4757bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x468
        push edx
        jmp public_4757fa
        public_4757ca : nop
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x4757d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x467
        push ecx
        jmp public_4757fa
        public_4757e3 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x4757ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x466
        push eax
        public_4757fa : nop
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4757ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475804*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 0x18
/*FIXUP public_47580e : nop
        push offset public_5d0254 @0x47580e*/
  FIXUP public_47580e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 8
        public_47581d : nop
        test dword ptr ss : [esp+0x24], 0x7F0000
        mov ebx, dword ptr ds : [public_5c70ec]
        je public_475a0e
        mov ecx, edi
        call dword ptr ds : [public_5c635c]
        fstp dword ptr ss : [esp+0x40]
        mov ecx, edi
        call dword ptr ds : [public_5c6358]
        fdiv dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_5ca230]
        call public_5b7ec0
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x475861*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x457
        push edx
        mov ebp, eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x475873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475878*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        push ebp
/*FIXUP push offset public_5d0a48 @0x475880*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a48
/*FIXUP push offset public_66dc60 @0x475885*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call ebx
/*FIXUP push offset public_66dc60 @0x47588c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475891*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        add esp, 0x2C
        cmp eax, 0x103
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x18], 0
        jne public_475939
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        call public_4d4b50
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_475939
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5ca230]
        call public_5b7ec0
        mov ecx, dword ptr ds : [public_67eca8]
        mov ebp, eax
        mov eax, dword ptr ds : [public_6119f8]
        push eax
/*FIXUP push offset public_66dc60 @0x475901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x464
        push ecx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x475911*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475916*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        push ebp
/*FIXUP push offset public_5d0a48 @0x47591e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a48
/*FIXUP push offset public_66dc60 @0x475923*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call ebx
/*FIXUP push offset public_66dc60 @0x47592a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47592f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 0x2C
        public_475939 : nop
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_475a0e
        mov ecx, edi
        call dword ptr ds : [public_5c6354]
        mov ebp, eax
        test ebp, ebp
        je public_475a0e
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x47596c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x456
        push ecx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x47597c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475981*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        mov eax, dword ptr ds : [public_67eca8]
        push 0x80
        lea edx, ss:[esp+0x164]
        push edx
        push ebp
        push eax
        call public_4347e0
        add esp, 0x28
        test eax, eax
        jne public_4759b0
        mov word ptr ss : [esp+0x148], ax
        public_4759b0 : nop
        lea ecx, ss:[esp+0x148]
        push ecx
/*FIXUP push offset public_66fc60 @0x4759b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
/*FIXUP push offset public_5d0254 @0x4759bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4759c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        mov edi, dword ptr ds : [edi+0x104]
        push 0
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        mov dword ptr ss : [esp+0x5C], edi
        call dword ptr ds : [public_5c6320]
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        call dword ptr ds : [public_5c6350]
        mov edi, eax
        add esp, 0x20
        test edi, edi
        jbe public_475a0e
/*FIXUP push offset public_5d0254 @0x4759fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 8
        mov dword ptr ss : [esp+0x20], edi
        public_475a0e : nop
        mov edi, dword ptr ss : [esp+0x24]
        test edi, 0x200
        je public_475ace
        mov ecx, dword ptr ds : [public_674bc8]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x23]
        push eax
        call public_4f42a0
        test al, al
        je public_475ace
        mov al, byte ptr ss : [esp+0x1F]
        test al, al
        je public_475a8f
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x475a50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x465
        push edx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x475a60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475a65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        mov eax, dword ptr ss : [esp+0x30]
        inc eax
        push eax
/*FIXUP push offset public_5d0a48 @0x475a72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a48
/*FIXUP push offset public_66dc60 @0x475a77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call ebx
/*FIXUP push offset public_66dc60 @0x475a7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475a83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 0x2C
        jmp public_475ace
        public_475a8f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_4c4ff0
        add esp, 4
        test eax, eax
        je public_475ace
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66dc60 @0x475aa7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        mov ecx, eax
        call public_41c970
/*FIXUP push offset public_66dc60 @0x475ab3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x475ab8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
/*FIXUP push offset public_5d0254 @0x475abf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475ac4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call esi
        add esp, 0x10
        public_475ace : nop
        test edi, 0x10000000
        je public_475b47
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax+0x334]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x475ae4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ss : [esp+0x258]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_475b4e
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_475b4e
        mov esi, dword ptr ds : [eax+0xEC]
        test esi, esi
        je public_475b4e
        mov eax, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_5c629c]
        add esp, 4
        test eax, eax
        je public_475b3e
        mov edx, dword ptr ds : [eax+0x8C]
        mov dword ptr ss : [esp+0x20], edx
        jmp public_475b4e
        public_475b3e : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x20], eax
        jmp public_475b4e
        public_475b47 : nop
        mov edi, dword ptr ss : [esp+0x258]
        public_475b4e : nop
        cmp word ptr ds : [public_66fc60], 0
        mov ebp, dword ptr ds : [public_5c71c8]
        je public_475b7d
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
/*FIXUP push offset public_66fc60 @0x475b65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x475b70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        public_475b7d : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jbe public_475b93
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call public_57da40
        add esp, 8
        public_475b93 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        mov esi, eax
        test esi, esi
        je public_475d11
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_475d11
        mov eax, dword ptr ds : [esi+0x104]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x34], eax
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_5c634c]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        test eax, eax
        je public_475d11
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call public_57da40
        mov edi, dword ptr ds : [public_5c70b4]
/*FIXUP push offset public_5d0254 @0x475bfe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475c03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_66fc60 @0x475c14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x475c1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [esi+0x160]
        lea eax, ss:[esp+0x44]
        push eax
        push ecx
        call public_458890
        add esp, 0x18
        test al, al
        je public_475d11
        test esi, esi
        je public_475d11
        mov bl, byte ptr ss : [esp+0x17]
        test bl, 4
        mov byte ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x18], 0
        mov byte ptr ss : [esp+0x24], 0
        mov al, 1
        je public_475c6f
        mov byte ptr ss : [esp+0x20], al
        public_475c6f : nop
        test bl, 8
        je public_475c78
        mov byte ptr ss : [esp+0x24], al
        public_475c78 : nop
        test bl, 0x10
        je public_475c81
        mov byte ptr ss : [esp+0x18], al
        public_475c81 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ecx
        lea edx, ss:[esp+0x34]
        push esi
        push edx
        call public_476080
/*FIXUP push offset public_5d0254 @0x475c9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475ca0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x1C
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_66fc60 @0x475cb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x475cbc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        test bl, 2
        je public_475d11
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_475d11
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call public_57da40
/*FIXUP push offset public_5d0254 @0x475ce3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x475ce8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_66fc60 @0x475cf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x475d04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        add esp, 0x10
        public_475d11 : nop
        mov eax, dword ptr ss : [esp+0x38]
        xor esi, esi
        cmp eax, esi
        mov byte ptr ss : [esp+0x250], 0
        je public_475d35
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        public_475d35 : nop
        mov ebp, dword ptr ss : [esp+0x44]
        public_475d39 : nop
        mov esi, dword ptr ss : [ebp+0x330]
        mov ecx, esi
        call public_57b370
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_57b3e0
        mov ecx, esi
        call public_579a40
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x250], 0xFFFFFFFF
        mov ebx, eax
        je public_475da5
        public_475d70 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_475d70
        mov eax, dword ptr ss : [esp+0x2C]
        public_475da5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop esi
        public_475daf : nop
        mov ecx, dword ptr ss : [esp+0x244]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x244
        ret 4
        UNREACHABLE_TRAP(0x4754a0)
    }
}

#undef public_4755a5
#undef public_4755fc
#undef public_475676
#undef public_47569e
#undef public_475751
#undef public_4757ca
#undef public_4757e3
#undef public_4757fa
#undef public_47580e
#undef public_47581d
#undef public_475939
#undef public_4759b0
#undef public_475a0e
#undef public_475a8f
#undef public_475ace
#undef public_475b3e
#undef public_475b47
#undef public_475b4e
#undef public_475b7d
#undef public_475b93
#undef public_475c6f
#undef public_475c78
#undef public_475c81
#undef public_475d11
#undef public_475d35
#undef public_475d39
#undef public_475d70
#undef public_475da5
#undef public_475daf
