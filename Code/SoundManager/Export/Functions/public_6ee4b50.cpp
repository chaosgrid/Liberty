#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1040);
CLANG_FORWARD_PROC_SYMBOL(public_6ee11a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee1a40);
CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee5500);
CLANG_FORWARD_PROC_SYMBOL(public_6ee5f00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6070);
CLANG_FORWARD_PROC_SYMBOL(public_6ee60e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee64c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7580);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7c00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7c70);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee85e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee4b86 _public_6ee4b86
#define public_6ee4ba0 _public_6ee4ba0
#define public_6ee4bb0 _public_6ee4bb0
#define public_6ee4bbf _public_6ee4bbf
#define public_6ee4c0f _public_6ee4c0f
#define public_6ee4c17 _public_6ee4c17
#define public_6ee4c35 _public_6ee4c35
#define public_6ee4ca0 _public_6ee4ca0
#define public_6ee4ccb _public_6ee4ccb
#define public_6ee4cd2 _public_6ee4cd2
#define public_6ee4db8 _public_6ee4db8
#define public_6ee4dda _public_6ee4dda
#define public_6ee4e12 _public_6ee4e12
#define public_6ee4e64 _public_6ee4e64
#define public_6ee4e6b _public_6ee4e6b
#define public_6ee4f40 _public_6ee4f40
#define public_6ee4f45 _public_6ee4f45
#define public_6ee4f57 _public_6ee4f57
#define public_6ee4fac _public_6ee4fac
#define public_6ee4fba _public_6ee4fba
#define public_6ee4fd1 _public_6ee4fd1
#define public_6ee4ff7 _public_6ee4ff7
#define public_6ee505a _public_6ee505a
#define public_6ee510e _public_6ee510e
#define public_6ee514e _public_6ee514e
#define public_6ee515b _public_6ee515b
#define public_6ee5198 _public_6ee5198
#define public_6ee519b _public_6ee519b
#define public_6ee51ba _public_6ee51ba
#define public_6ee5214 _public_6ee5214
#define public_6ee521f _public_6ee521f
#define public_6ee5230 _public_6ee5230
#define public_6ee5241 _public_6ee5241
#define public_6ee5251 _public_6ee5251
#define public_6ee526a _public_6ee526a
#define public_6ee5275 _public_6ee5275
#define public_6ee52b3 _public_6ee52b3
#define public_6ee52d0 _public_6ee52d0
#define public_6ee5315 _public_6ee5315
#define public_6ee5362 _public_6ee5362
#define public_6ee53a4 _public_6ee53a4
#define public_6ee53d8 _public_6ee53d8
#define public_6ee5417 _public_6ee5417
#define public_6ee5463 _public_6ee5463
#define public_6ee5476 _public_6ee5476
#define public_6ee548e _public_6ee548e
#define public_6ee5491 _public_6ee5491
#define public_6ee5495 _public_6ee5495
#define public_6ee54ab _public_6ee54ab
#define public_6ee54bf _public_6ee54bf
#define public_6ee54d7 _public_6ee54d7

PROC_DECLARE(0x6ee4b50, internal_6ee4b50, public_6ee4b50);
extern "C" NAKED register_t __cdecl internal_6ee4b50()
{
    __asm
    {
        mov eax, 0x80B0
        call public_6ee8da0
        push ebx
        mov ebx, dword ptr ss : [esp+0x80B8]
        push ebp
        push esi
        push edi
        mov byte ptr ss : [esp+0x12], 0
        call dword ptr ds : [public_6ee901c]
        mov dword ptr ds : [ebx+0x4C], eax
        mov eax, dword ptr ss : [esp+0x80C8]
        test eax, eax
        je public_6ee4b86
        push eax
        mov ecx, ebx
        call public_6ee6e20
        public_6ee4b86 : nop
        mov eax, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebp, dword ptr ds : [ebx+0x110]
        mov dword ptr ss : [esp+0x24], ebp
        je public_6ee4c17
        nop 
        lea esp, ss:[esp]
        public_6ee4ba0 : nop
        mov eax, dword ptr ds : [ebx+0x110]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_6ee4bbf
        mov ecx, dword ptr ds : [esi+8]
        nop 
        public_6ee4bb0 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6ee4ccb
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        jne public_6ee4bb0
/*FIXUP public_6ee4bbf : nop
        push offset public_6eeaf0c @0x6ee4bbf*/
  FIXUP public_6ee4bbf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edi
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x16], 1
        mov dword ptr ds : [edx+4], eax
        call public_6ee85e0
        push 1
        push esi
        mov ecx, offset public_6eeaf00
        call public_6ee7d10
        mov ecx, dword ptr ds : [public_6eeaf08]
        dec ecx
/*FIXUP push offset public_6eeaf0c @0x6ee4bfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        mov dword ptr ds : [public_6eeaf08], ecx
        mov esi, edi
        call dword ptr ds : [public_6ee9038]
        public_6ee4c0f : nop
        cmp esi, dword ptr ds : [public_6eeaf04]
        jne public_6ee4ba0
        public_6ee4c17 : nop
        mov ecx, dword ptr ds : [ebx+0x110]
        mov ebx, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6ee51ba
        public_6ee4c35 : nop
        mov edi, dword ptr ss : [esp+0x80C4]
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [edi+0x54]
        jae public_6ee4fba
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_6ee4fba
        mov esi, dword ptr ds : [ebx+8]
        push esi
        mov ecx, edi
        call public_6ee6070
        test al, al
        jne public_6ee4fba
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x10]
        cmp dword ptr ds : [edi+0x4C], eax
        jb public_6ee4fba
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebp, 1
        mov dword ptr ss : [esp+0x2C], esi
        je public_6ee4e6b
        nop 
        lea esp, ss:[esp]
        public_6ee4ca0 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        cmp ecx, dword ptr ds : [esi+8]
        je public_6ee4cd2
        push 0
        lea edx, ss:[esp+0x68]
        push edx
        lea ecx, ss:[esp+0x34]
        inc ebp
        call public_6ee7580
        mov esi, dword ptr ss : [esp+0x2C]
        cmp esi, dword ptr ds : [public_6eeaf04]
        jne public_6ee4ca0
        jmp public_6ee4e6b
        public_6ee4ccb : nop
        mov esi, dword ptr ds : [esi]
        jmp public_6ee4c0f
        public_6ee4cd2 : nop
        test ebp, ebp
        mov edi, esi
        je public_6ee4e64
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        add esi, 8
        push eax
        call dword ptr ds : [ecx+0x18]
        test al, al
        je public_6ee4db8
        mov edx, dword ptr ss : [esp+0x80C4]
        lea eax, ds:[edx+0xCC]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x38]
        mov ecx, ebp
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi]
        lea ebx, ds:[esi+0x30]
        push ebp
        mov dword ptr ds : [ebx], 0x41200000
        mov dword ptr ds : [esi+0x28], 0x43FA0000
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x28]
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0x80C4]
        fild dword ptr ds : [eax+0xA4]
        add eax, 0xCC
        push eax
        lea edx, ss:[esp+0x54]
        fmul dword ptr ds : [esi+0x40]
        push ebp
        push edx
        fstp dword ptr ds : [esi+0x40]
        fld dword ptr ds : [esi+0x28]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x2C]
        fstp st(0)
        fld dword ptr ds : [ebx]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+0x34]
        fstp st(0)
        call public_6ee5500
        mov edx, dword ptr ss : [esp+0x5C]
        lea eax, ds:[esi+0x44]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        add esp, 0xC
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [esi+0x24]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_6ee4db8 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        test al, al
        je public_6ee4dda
        test dword ptr ds : [esi+0x20], 0x20000
        je public_6ee4dda
        fld dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [esi+0x2C]
        fnstsw ax
        test ah, 5
        jp public_6ee4e12
        public_6ee4dda : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x80C4]
        push eax
        inc ebp
        push esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ds : [edi+0x20], eax
        call public_6ee5f00
        test al, al
        je public_6ee519b
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x48]
        and dword ptr ds : [edi+0x24], 0xFFFFFFBF
        jmp public_6ee519b
/*FIXUP public_6ee4e12 : nop
        push offset public_6eeaf0c @0x6ee4e12*/
  FIXUP public_6ee4e12 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x16], 1
        mov dword ptr ds : [edx+4], eax
        call public_6ee85e0
        push 1
        push edi
        mov ecx, offset public_6eeaf00
        call public_6ee7d10
        mov ecx, dword ptr ds : [public_6eeaf08]
        dec ecx
/*FIXUP push offset public_6eeaf0c @0x6ee4e4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        mov dword ptr ds : [public_6eeaf08], ecx
        call dword ptr ds : [public_6ee9038]
        jmp public_6ee519b
        public_6ee4e64 : nop
        mov edi, dword ptr ss : [esp+0x80C4]
        public_6ee4e6b : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        test al, al
        je public_6ee4f57
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x4C]
        push edx
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, edi
        call public_6ee31d0
        test al, al
        je public_6ee519b
        mov esi, dword ptr ss : [esp+0x4C]
        test byte ptr ds : [esi+0x20], 1
        je public_6ee4f40
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        fild dword ptr ds : [edi+0xA4]
        mov eax, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x18]
        fmul dword ptr ss : [esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x1C], 0x7F7FFFFF
        push eax
        fstp dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [edi+0xD4]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [edi+0xD0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [edi+0xCC]
        fstp dword ptr ss : [esp]
        call public_6ee54e0
        fld dword ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x13], 0
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6ee4f45
        public_6ee4f40 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6ee4f45 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6ee519b
        public_6ee4f57 : nop
        lea ecx, ss:[esp+0x68]
        call public_6ee1040
        mov edx, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x68]
        push ecx
        push edx
        mov ecx, edi
        call public_6ee60e0
        test eax, eax
        jl public_6ee4fac
        inc dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov dword ptr ss : [esp+0x84], eax
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, edi
        call public_6ee5f00
        mov eax, dword ptr ds : [edi+0x11C]
        lea ecx, ds:[edi+0x118]
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        lea eax, ss:[esp+0x68]
        push eax
        call public_6ee7c00
        public_6ee4fac : nop
        lea ecx, ss:[esp+0x68]
        call public_6ee11a0
        jmp public_6ee519b
        public_6ee4fba : nop
        mov eax, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebx, dword ptr ds : [ebx+8]
        mov edi, 1
        mov dword ptr ss : [esp+0x28], esi
        je public_6ee4ff7
        public_6ee4fd1 : nop
        cmp ebx, dword ptr ds : [esi+8]
        je public_6ee505a
        push 0
        lea ecx, ss:[esp+0x60]
        push ecx
        lea ecx, ss:[esp+0x30]
        inc edi
        call public_6ee7580
        mov esi, dword ptr ss : [esp+0x28]
        cmp esi, dword ptr ds : [public_6eeaf04]
        jne public_6ee4fd1
        public_6ee4ff7 : nop
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee519b
        mov eax, dword ptr ss : [esp+0x80C4]
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0x54]
        jae public_6ee515b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0x20C4]
/*FIXUP push offset public_6eea660 @0x6ee502c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea660
        push eax
        call public_6ee71c0
        push eax
        push 0x988
/*FIXUP push offset public_6eea070 @0x6ee503d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5047*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        jmp public_6ee5198
        public_6ee505a : nop
        test edi, edi
        je public_6ee4ff7
/*FIXUP push offset public_6eeaf0c @0x6ee505e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x16], 1
        call public_6ee85e0
        push 1
        push esi
        mov ecx, offset public_6eeaf00
        call public_6ee7d10
        mov ecx, dword ptr ds : [public_6eeaf08]
        mov eax, dword ptr ds : [public_6eeaf68]
        dec ecx
        test eax, eax
        mov dword ptr ds : [public_6eeaf08], ecx
        je public_6ee514e
        mov ecx, dword ptr ss : [esp+0x80C4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ecx+0x54]
        jae public_6ee510e
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ss:[esp+0x40C4]
/*FIXUP push offset public_6eea600 @0x6ee50d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea600
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0x97C
/*FIXUP push offset public_6eea070 @0x6ee50e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee50f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
/*FIXUP push offset public_6eeaf0c @0x6ee50fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        jmp public_6ee519b
        public_6ee510e : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0xC4]
/*FIXUP push offset public_6eea5b8 @0x6ee5122*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea5b8
        push eax
        call public_6ee71c0
        push eax
        push 0x980
/*FIXUP push offset public_6eea070 @0x6ee5133*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee513d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x20
/*FIXUP public_6ee514e : nop
        push offset public_6eeaf0c @0x6ee514e*/
  FIXUP public_6ee514e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        jmp public_6ee519b
        public_6ee515b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ss:[esp+0x60C4]
/*FIXUP push offset public_6eea570 @0x6ee516f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea570
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0x98C
/*FIXUP push offset public_6eea070 @0x6ee5186*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5190*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        public_6ee5198 : nop
        add esp, 0x20
        public_6ee519b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        inc ecx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6ee4c35
        public_6ee51ba : nop
        mov ebp, dword ptr ss : [esp+0x80C4]
        mov eax, dword ptr ss : [ebp+0x120]
        test eax, eax
        je public_6ee521f
/*FIXUP push offset public_6eeaf0c @0x6ee51cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov eax, dword ptr ss : [ebp+0x120]
        test eax, eax
        mov ecx, dword ptr ds : [public_6eeaf04]
        lea esi, ss:[ebp+0x118]
        mov byte ptr ss : [esp+0x12], 1
        je public_6ee5214
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        push esi
        push ecx
        mov ecx, offset public_6eeaf00
        call public_6ee7c70
        mov ecx, dword ptr ds : [esi+8]
        add dword ptr ds : [public_6eeaf08], ecx
        mov dword ptr ds : [esi+8], 0
/*FIXUP public_6ee5214 : nop
        push offset public_6eeaf0c @0x6ee5214*/
  FIXUP public_6ee5214 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        public_6ee521f : nop
        mov edi, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6ee5241
        nop 
        lea esp, ss:[esp]
        public_6ee5230 : nop
        lea edx, ds:[esi+8]
        push edx
        mov ecx, ebp
        call public_6ee64c0
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6ee5230
        public_6ee5241 : nop
        mov eax, dword ptr ss : [ebp+0x128]
        test eax, eax
        je public_6ee5251
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x44]
        public_6ee5251 : nop
        mov eax, dword ptr ds : [public_6eeaf04]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x24], eax
        je public_6ee54bf
        jmp public_6ee5275
        public_6ee526a : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x80C4]
        public_6ee5275 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [eax]
        add esi, 8
        push eax
        call dword ptr ds : [edx+0x1C]
        mov bl, al
        neg bl
        push esi
        mov ecx, ebp
        sbb ebx, ebx
        neg ebx
        call public_6ee6b70
        test al, al
        je public_6ee54ab
        test bl, 1
        je public_6ee52b3
        mov eax, dword ptr ds : [esi+0x20]
        test ah, 1
        je public_6ee52b3
        mov ecx, dword ptr ss : [esp+0x80C4]
        push esi
        call public_6ee1a40
        public_6ee52b3 : nop
        mov eax, dword ptr ds : [esi+0x20]
        xor ebp, ebp
        test eax, 0x40000
        je public_6ee52d0
        mov eax, dword ptr ds : [esi+0x1C]
        and al, 8
        neg al
        sbb eax, eax
        and eax, 0xFFFFFFFE
        add eax, 4
        mov ebp, eax
        public_6ee52d0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, ebp
        or edx, ebx
        push edx
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        jge public_6ee5495
        cmp eax, 0x88780096
        jne public_6ee5315
/*FIXUP push offset public_6eea558 @0x6ee52f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea558
        push 0xA17
/*FIXUP push offset public_6eea070 @0x6ee52fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee5305*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ee5315 : nop
        cmp ebp, 2
        mov eax, dword ptr ds : [public_6eeaf68]
        jne public_6ee53d8
        test eax, eax
        je public_6ee5362
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push eax
        lea eax, ss:[esp+0x60C4]
/*FIXUP push offset public_6eea510 @0x6ee5336*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea510
        push eax
        call public_6ee71c0
        push eax
        push 0xA2C
/*FIXUP push offset public_6eea070 @0x6ee5347*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5351*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        mov ecx, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [ecx]
        add esp, 0x20
        public_6ee5362 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        mov ebp, 4
        or ebx, ebp
        push ebx
        push 0
        push 0
        push eax
        call dword ptr ds : [edx+0x30]
        mov edi, eax
        test edi, edi
        jl public_6ee53a4
        mov eax, dword ptr ds : [esi+0x1C]
        and eax, 0xFFFFFFFE
        or eax, ebp
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee5491
/*FIXUP push offset public_6eea500 @0x6ee5395*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea500
        push 0xA3D
        jmp public_6ee5476
        public_6ee53a4 : nop
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee5491
        mov edx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eea4f4 @0x6ee53b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea4f4
        push 0xA43
/*FIXUP push offset public_6eea070 @0x6ee53c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee53cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push eax
        call dword ptr ds : [edx]
        jmp public_6ee548e
        public_6ee53d8 : nop
        test eax, eax
        je public_6ee5417
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ss:[esp+0x20C4]
/*FIXUP push offset public_6eea4b0 @0x6ee53eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea4b0
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xA4D
/*FIXUP push offset public_6eea070 @0x6ee5402*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee540c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        public_6ee5417 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x30]
        mov edi, eax
        test edi, edi
        jl public_6ee5463
        mov edx, dword ptr ds : [esi+0x1C]
        and edx, 0xFFFFFFFE
        or edx, 4
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee5491
/*FIXUP push offset public_6eea500 @0x6ee5440*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea500
        push 0xA5D
/*FIXUP push offset public_6eea070 @0x6ee544a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5454*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        jmp public_6ee548e
        public_6ee5463 : nop
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee5491
/*FIXUP push offset public_6eea4f4 @0x6ee546c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea4f4
        push 0xA62
        public_6ee5476 : nop
        mov ecx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eea070 @0x6ee547c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5486*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push eax
        call dword ptr ds : [ecx]
        public_6ee548e : nop
        add esp, 0x14
        public_6ee5491 : nop
        test edi, edi
        jl public_6ee54ab
        public_6ee5495 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        or edx, 0x40
        cmp ebp, 2
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, edx
        jne public_6ee54ab
        or eax, 1
        mov dword ptr ds : [esi+0x1C], eax
        public_6ee54ab : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6ee526a
        public_6ee54bf : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_6ee54d7
        mov eax, dword ptr ds : [public_6eeaf70]
        push eax
        call dword ptr ds : [public_6ee9020]
        public_6ee54d7 : nop
        add esp, 0x80B0
        ret 8
        UNREACHABLE_TRAP(0x6ee4b50)
    }
}

#undef public_6ee4b86
#undef public_6ee4ba0
#undef public_6ee4bb0
#undef public_6ee4bbf
#undef public_6ee4c0f
#undef public_6ee4c17
#undef public_6ee4c35
#undef public_6ee4ca0
#undef public_6ee4ccb
#undef public_6ee4cd2
#undef public_6ee4db8
#undef public_6ee4dda
#undef public_6ee4e12
#undef public_6ee4e64
#undef public_6ee4e6b
#undef public_6ee4f40
#undef public_6ee4f45
#undef public_6ee4f57
#undef public_6ee4fac
#undef public_6ee4fba
#undef public_6ee4fd1
#undef public_6ee4ff7
#undef public_6ee505a
#undef public_6ee510e
#undef public_6ee514e
#undef public_6ee515b
#undef public_6ee5198
#undef public_6ee519b
#undef public_6ee51ba
#undef public_6ee5214
#undef public_6ee521f
#undef public_6ee5230
#undef public_6ee5241
#undef public_6ee5251
#undef public_6ee526a
#undef public_6ee5275
#undef public_6ee52b3
#undef public_6ee52d0
#undef public_6ee5315
#undef public_6ee5362
#undef public_6ee53a4
#undef public_6ee53d8
#undef public_6ee5417
#undef public_6ee5463
#undef public_6ee5476
#undef public_6ee548e
#undef public_6ee5491
#undef public_6ee5495
#undef public_6ee54ab
#undef public_6ee54bf
#undef public_6ee54d7
