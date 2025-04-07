#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62c6170);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);
CLANG_FORWARD_PROC_SYMBOL(public_62d5890);
CLANG_FORWARD_PROC_SYMBOL(public_62d58f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62d7590);
CLANG_FORWARD_PROC_SYMBOL(public_62d75c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d75e0);
CLANG_FORWARD_PROC_SYMBOL(public_62d7640);
CLANG_FORWARD_PROC_SYMBOL(public_62d88c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d8920);
CLANG_FORWARD_PROC_SYMBOL(public_62d93c0);
CLANG_FORWARD_PROC_SYMBOL(public_62d9450);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_62e1e20);
CLANG_FORWARD_PROC_SYMBOL(public_62e4350);
CLANG_FORWARD_PROC_SYMBOL(public_62e4d00);
CLANG_FORWARD_PROC_SYMBOL(public_62e4f60);
CLANG_FORWARD_PROC_SYMBOL(public_62e8810);
CLANG_FORWARD_PROC_SYMBOL(public_62e8840);
CLANG_FORWARD_PROC_SYMBOL(public_62e8850);
CLANG_FORWARD_PROC_SYMBOL(public_62e91d0);
CLANG_FORWARD_PROC_SYMBOL(public_62eb550);
CLANG_FORWARD_PROC_SYMBOL(public_62ecc60);
CLANG_FORWARD_PROC_SYMBOL(public_62ecce0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);
CLANG_FORWARD_PROC_SYMBOL(public_63275d0);
CLANG_FORWARD_PROC_SYMBOL(public_63275f0);

#define public_62c63be _public_62c63be
#define public_62c63cf _public_62c63cf
#define public_62c63d5 _public_62c63d5
#define public_62c641a _public_62c641a
#define public_62c642a _public_62c642a
#define public_62c643a _public_62c643a
#define public_62c6451 _public_62c6451
#define public_62c64f1 _public_62c64f1
#define public_62c6510 _public_62c6510
#define public_62c653d _public_62c653d
#define public_62c657e _public_62c657e
#define public_62c6647 _public_62c6647
#define public_62c66b9 _public_62c66b9
#define public_62c66c6 _public_62c66c6
#define public_62c66cb _public_62c66cb
#define public_62c66f2 _public_62c66f2
#define public_62c6705 _public_62c6705
#define public_62c672b _public_62c672b
#define public_62c6799 _public_62c6799
#define public_62c679c _public_62c679c
#define public_62c67c3 _public_62c67c3
#define public_62c67d9 _public_62c67d9
#define public_62c67f8 _public_62c67f8
#define public_62c6852 _public_62c6852
#define public_62c6895 _public_62c6895
#define public_62c68bf _public_62c68bf
#define public_62c6951 _public_62c6951
#define public_62c6978 _public_62c6978
#define public_62c69b6 _public_62c69b6
#define public_62c69dd _public_62c69dd
#define public_62c6a07 _public_62c6a07
#define public_62c6a6e _public_62c6a6e
#define public_62c6a95 _public_62c6a95
#define public_62c6abf _public_62c6abf
#define public_62c6b33 _public_62c6b33
#define public_62c6b47 _public_62c6b47
#define public_62c6b4e _public_62c6b4e
#define public_62c6b50 _public_62c6b50
#define public_62c6bd4 _public_62c6bd4
#define public_62c6c85 _public_62c6c85
#define public_62c6cbf _public_62c6cbf
#define public_62c6cc3 _public_62c6cc3
#define public_62c6cda _public_62c6cda
#define public_62c6cee _public_62c6cee
#define public_62c6cfe _public_62c6cfe

PROC_DECLARE(0x62c62a0, internal_62c62a0, public_62c62a0);
extern "C" NAKED register_t __cdecl internal_62c62a0()
{
    __asm
    {
        sub esp, 0xC4
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        mov edx, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp edx, ebx
        mov ecx, eax
        mov dword ptr ss : [esp+0xAC], edx
        mov dword ptr ss : [esp+0xB0], ecx
        mov byte ptr ss : [esp+0xA9], bl
        mov byte ptr ss : [esp+0xA8], bl
        mov byte ptr ss : [esp+0xAA], bl
        mov byte ptr ss : [esp+0xAB], bl
        je public_62c6cfe
        cmp eax, ebx
        je public_62c6cfe
        cmp dword ptr ds : [esi+0x318], 2
        push ebp
        push edi
        mov edi, 1
        je public_62c643a
        mov ecx, dword ptr ds : [esi+0x24]
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4f60
        add esp, 0xC
        test al, al
        je public_62c642a
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0x34]
        push edx
        add eax, 0x14FC
        push eax
        call public_62e4d00
        fcomp dword ptr ds : [esi+0x344]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62c642a
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ebp, eax
        lea edi, ds:[esi+0xA4]
        push ebp
        mov ecx, edi
        call public_62d75c0
        push 0x3EC90FDB
        mov ecx, edi
        call public_62d93c0
        push 0x3F800000
        mov ecx, edi
        call public_62d9490
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        cmp eax, 1
        jne public_62c63cf
        fld dword ptr ds : [esi+0x310]
        fcomp dword ptr ds : [esi+0x314]
        fnstsw ax
        test ah, 0x41
        jne public_62c63be
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x164]
        lea ecx, ds:[esi+0x164]
        push eax
        call dword ptr ds : [edx+4]
        public_62c63be : nop
        fld dword ptr ds : [esi+0x310]
        fadd dword ptr ds : [esi+0x1C]
        fstp dword ptr ds : [esi+0x310]
        jmp public_62c63d5
        public_62c63cf : nop
        mov dword ptr ds : [esi+0x310], ebx
        public_62c63d5 : nop
        lea edi, ds:[esi+0x2C]
        push ebp
        mov ecx, edi
        call public_62d58f0
        push 0x3F800000
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [esi+0x308]
        fadd dword ptr ds : [esi+0x1C]
        fst dword ptr ds : [esi+0x308]
        fcomp dword ptr ds : [esi+0x30C]
        fnstsw ax
        test ah, 0x41
        jne public_62c641a
        xor edi, edi
        jmp public_62c6cda
        public_62c641a : nop
        mov dword ptr ds : [esi+0x308], ebx
        mov edi, 1
        jmp public_62c6cda
        public_62c642a : nop
        cmp byte ptr ss : [esp+0xB2], bl
        jne public_62c6451
        mov ecx, dword ptr ss : [esp+0xB8]
        public_62c643a : nop
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x50]
        mov byte ptr ss : [esp+0xB6], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6451 : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x30], eax
        cmp dword ptr ds : [esi+0x318], ebx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jne public_62c672b
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0x324]
        mov edx, dword ptr ds : [esi+0x24]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        add edx, 0x14FC
        push edx
        call public_62e4350
        add esp, 0xC
        test al, al
        jne public_62c6510
        mov eax, dword ptr ds : [esi+0x164]
        lea ecx, ds:[esi+0x164]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xA4]
        lea ecx, ds:[esi+0xA4]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x318], 1
        cmp byte ptr ds : [eax+0x17EC], bl
        je public_62c64f1
        mov ecx, dword ptr ds : [eax+0x17F0]
        push ecx
        lea ecx, ds:[eax+0x1364]
        call public_62ecc60
        public_62c64f1 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp byte ptr ds : [eax+0x17F4], bl
        je public_62c672b
        lea ecx, ds:[eax+0x1364]
        call public_62ecce0
        jmp public_62c672b
        public_62c6510 : nop
        mov eax, dword ptr ds : [esi+0x31C]
        sub eax, ebx
        je public_62c657e
        dec eax
        je public_62c653d
        dec eax
        jne public_62c6705
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x164]
        lea ecx, ds:[esi+0x164]
        push eax
        call dword ptr ds : [edx+4]
        push ebx
        jmp public_62c66cb
        public_62c653d : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x164]
        lea ecx, ds:[esi+0x164]
        push eax
        call dword ptr ds : [edx+4]
        lea edi, ds:[esi+0x178]
        push 2
        mov ecx, edi
        call public_62d8920
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1670]
        push edx
        mov ecx, edi
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1674]
        jmp public_62c66f2
        public_62c657e : nop
        mov ecx, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [ecx+0x1638]
        mov edx, dword ptr ds : [esi+0x164]
        fcomp dword ptr ds : [public_6399408]
        lea ecx, ds:[esi+0x164]
        fnstsw ax
        test ah, 0x44
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        jp public_62c66c6
        call dword ptr ds : [edx+4]
        lea edi, ds:[esi+0x2C]
        push 0x3F800000
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        mov ecx, edi
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0xBC]
        fstp dword ptr ss : [esp+0xD0]
        fxch 
        push eax
        fchs 
        fstp dword ptr ss : [esp+0xC0]
        fchs 
        fstp dword ptr ss : [esp+0xC4]
        fld dword ptr ss : [esp+0xD4]
        fchs 
        fstp dword ptr ss : [esp+0xC8]
        call public_62d5890
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        cmp al, bl
        jne public_62c6647
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6647 : nop
        fld dword ptr ds : [edi+0x14]
        lea ecx, ss:[esp+0x1C]
        fsub dword ptr ss : [esp+0x30]
        push ecx
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi+0xC]
        lea edi, ds:[esi+0xA4]
        fsub dword ptr ss : [esp+0x2C]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        call public_62d7590
        push 0x3F800000
        mov ecx, edi
        call public_62d9490
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8840
        test al, al
        je public_62c66b9
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        call public_62d7640
        public_62c66b9 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        jmp public_62c6705
        public_62c66c6 : nop
        call dword ptr ds : [edx+4]
        push 3
        public_62c66cb : nop
        lea edi, ds:[esi+0x178]
        mov ecx, edi
        call public_62d8920
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1664]
        mov ecx, edi
        push edx
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1668]
        public_62c66f2 : nop
        push ecx
        mov ecx, edi
        call public_63275f0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        public_62c6705 : nop
        fld dword ptr ds : [esi+0x1C]
        mov edi, 1
        fadd dword ptr ds : [esi+0x340]
        fst dword ptr ds : [esi+0x340]
        fcomp dword ptr ds : [esi+0x33C]
        fnstsw ax
        test ah, 5
        jnp public_62c672b
        mov edi, 2
        public_62c672b : nop
        cmp dword ptr ds : [esi+0x318], 1
        jne public_62c6b50
        mov ecx, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [esi+0x24]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        add eax, 0x14FC
        push eax
        call public_62e4350
        add esp, 0xC
        test al, al
        je public_62c67f8
        mov edx, dword ptr ds : [esi+0xA4]
        lea ecx, ds:[esi+0xA4]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8850
        test al, al
        mov edx, dword ptr ds : [esi+0x164]
        lea ecx, ds:[esi+0x164]
        je public_62c6799
        mov eax, dword ptr ds : [esi+0x1C]
        push eax
        call dword ptr ds : [edx+4]
        jmp public_62c679c
        public_62c6799 : nop
        call dword ptr ds : [edx+0x10]
        public_62c679c : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x318], 2
        cmp byte ptr ds : [eax+0x17F5], bl
        je public_62c67c3
        mov ecx, dword ptr ds : [eax+0x17F8]
        push ecx
        lea ecx, ds:[eax+0x1364]
        call public_62ecc60
        public_62c67c3 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp byte ptr ds : [eax+0x17FC], bl
        je public_62c67d9
        lea ecx, ds:[eax+0x1364]
        call public_62ecce0
        public_62c67d9 : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp byte ptr ds : [eax+0x168C], bl
        je public_62c6b50
        lea ecx, ds:[eax+0x12C]
        call public_62eb550
        jmp public_62c6b50
        public_62c67f8 : nop
        mov edx, dword ptr ds : [esi+0x324]
        mov ecx, dword ptr ds : [esi+0x24]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        add ecx, 0x14FC
        push ecx
        call public_62e4350
        add esp, 0xC
        test al, al
        jne public_62c6852
        mov eax, 0x3F800000
        mov ecx, esi
        mov dword ptr ds : [esi+0x34C], eax
        mov dword ptr ds : [esi+0x350], eax
        call public_62c6170
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax+0x1630]
        mov dword ptr ds : [esi+0x34C], edx
        mov eax, dword ptr ds : [eax+0x1634]
        mov dword ptr ds : [esi+0x350], eax
        jmp public_62c6b4e
        public_62c6852 : nop
        mov eax, dword ptr ds : [esi+0x31C]
        sub eax, ebx
        je public_62c6a6e
        dec eax
        je public_62c69b6
        dec eax
        jne public_62c6b4e
        cmp byte ptr ss : [esp+0xB2], bl
        jne public_62c6895
        mov ecx, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x50]
        mov byte ptr ss : [esp+0xB6], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6895 : nop
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        cmp al, bl
        jne public_62c68bf
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c68bf : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        add edi, 0xC
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        call public_62e1e20
        fcomp dword ptr ds : [public_639f5d4]
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_62c6b47
        lea ebp, ds:[esi+0x178]
        push ebx
        mov ecx, ebp
        call public_62d8920
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1664]
        push ecx
        mov ecx, ebp
        call public_63275d0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x1668]
        push eax
        mov ecx, ebp
        call public_63275f0
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        cmp al, bl
        jne public_62c6951
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6951 : nop
        cmp byte ptr ss : [esp+0xB2], bl
        jne public_62c6978
        mov ecx, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x50]
        mov byte ptr ss : [esp+0xB6], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6978 : nop
        fld dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x10]
        fsub dword ptr ds : [edi+0x14]
        push ecx
        fld dword ptr ss : [esp+0x48]
        mov ecx, ebp
        fsub dword ptr ds : [edi+0x10]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [edi+0xC]
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        call public_62d88c0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        push eax
        call dword ptr ds : [edx+4]
        jmp public_62c6b4e
        public_62c69b6 : nop
        cmp byte ptr ss : [esp+0xB2], bl
        jne public_62c69dd
        mov ecx, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x50]
        mov byte ptr ss : [esp+0xB6], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c69dd : nop
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        cmp al, bl
        jne public_62c6a07
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6a07 : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        add edi, 0xC
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        call public_62e1e20
        fcomp dword ptr ds : [public_639f534]
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_62c6b47
        lea edi, ds:[esi+0x178]
        push 2
        mov ecx, edi
        call public_62d8920
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1670]
        push ecx
        mov ecx, edi
        call public_63275d0
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edx+0x1674]
        push eax
        jmp public_62c6b33
        public_62c6a6e : nop
        cmp byte ptr ss : [esp+0xB2], bl
        jne public_62c6a95
        mov ecx, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x50]
        mov byte ptr ss : [esp+0xB6], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6a95 : nop
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        cmp al, bl
        jne public_62c6abf
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c6abf : nop
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        add edi, 0xC
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        call public_62e1e20
        fcomp dword ptr ds : [public_639f5d0]
        add esp, 0xC
        fnstsw ax
        test ah, 5
        jp public_62c6b47
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x1638]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62c6b47
        lea edi, ds:[esi+0x178]
        push 3
        mov ecx, edi
        call public_62d8920
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x1664]
        push edx
        mov ecx, edi
        call public_63275d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1668]
        push ecx
        public_62c6b33 : nop
        mov ecx, edi
        call public_63275f0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        jmp public_62c6b4e
        public_62c6b47 : nop
        mov ecx, esi
        call public_62c6170
        public_62c6b4e : nop
        xor edi, edi
        public_62c6b50 : nop
        cmp dword ptr ds : [esi+0x318], 2
        jne public_62c6cda
        fld dword ptr ds : [esi+0x338]
        fadd dword ptr ds : [esi+0x1C]
        fst dword ptr ds : [esi+0x338]
        fcomp dword ptr ds : [esi+0x334]
        fnstsw ax
        test ah, 5
        jp public_62c6cc3
        mov eax, dword ptr ds : [esi+0x320]
        sub eax, ebx
        je public_62c6c85
        dec eax
        je public_62c6bd4
        dec eax
        jne public_62c6cbf
        mov ecx, dword ptr ds : [esi+0x24]
        push ebx
        add ecx, 0x18
        call public_62e91d0
        mov ecx, dword ptr ss : [esp+0xB8]
        lea edi, ds:[esi+0xA4]
        push ecx
        mov ecx, edi
        call public_62d7510
        push 0x3F800000
        mov ecx, edi
        call public_62d9490
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        xor edi, edi
        jmp public_62c6cda
        public_62c6bd4 : nop
        lea edi, ds:[esi+0xA4]
        push ebx
        mov ecx, edi
        call public_62d4e50
        fld dword ptr ds : [esi+0x348]
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call public_62d75e0
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        lea edi, ds:[esi+0x2C]
        push ebx
        mov ecx, edi
        call public_62d4e50
        push 0x3F800000
        mov ecx, edi
        call public_62a33e0
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        mov ecx, edi
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0xD0]
        fxch 
        push eax
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0xD4]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        call public_62d5890
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        xor edi, edi
        jmp public_62c6cda
        public_62c6c85 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+0x16A4]
        lea edi, ds:[esi+0x258]
        push edx
        mov ecx, edi
        call public_62d9490
        push 1
        mov ecx, edi
        call public_63275d0
        mov eax, dword ptr ss : [esp+0xB8]
        push eax
        mov ecx, edi
        call public_62d9450
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+4]
        public_62c6cbf : nop
        xor edi, edi
        jmp public_62c6cda
        public_62c6cc3 : nop
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x340], ebx
        mov dword ptr ds : [esi+0x318], ebx
        mov edi, 2
        public_62c6cda : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8810
        test al, al
        je public_62c6cee
        mov edi, 2
        public_62c6cee : nop
        mov dword ptr ds : [esi+0x10], edi
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        add esp, 0xC4
        ret 
        public_62c6cfe : nop
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebx
        add esp, 0xC4
        ret 
        UNREACHABLE_TRAP(0x62c62a0)
    }
}

#undef public_62c63be
#undef public_62c63cf
#undef public_62c63d5
#undef public_62c641a
#undef public_62c642a
#undef public_62c643a
#undef public_62c6451
#undef public_62c64f1
#undef public_62c6510
#undef public_62c653d
#undef public_62c657e
#undef public_62c6647
#undef public_62c66b9
#undef public_62c66c6
#undef public_62c66cb
#undef public_62c66f2
#undef public_62c6705
#undef public_62c672b
#undef public_62c6799
#undef public_62c679c
#undef public_62c67c3
#undef public_62c67d9
#undef public_62c67f8
#undef public_62c6852
#undef public_62c6895
#undef public_62c68bf
#undef public_62c6951
#undef public_62c6978
#undef public_62c69b6
#undef public_62c69dd
#undef public_62c6a07
#undef public_62c6a6e
#undef public_62c6a95
#undef public_62c6abf
#undef public_62c6b33
#undef public_62c6b47
#undef public_62c6b4e
#undef public_62c6b50
#undef public_62c6bd4
#undef public_62c6c85
#undef public_62c6cbf
#undef public_62c6cc3
#undef public_62c6cda
#undef public_62c6cee
#undef public_62c6cfe
