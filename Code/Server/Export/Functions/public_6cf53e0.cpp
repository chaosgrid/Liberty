#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cef450);
CLANG_FORWARD_PROC_SYMBOL(public_6cf53e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf63f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf64d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);
CLANG_FORWARD_PROC_SYMBOL(public_6cf75f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d07690);
CLANG_FORWARD_PROC_SYMBOL(public_6d07b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d07c80);
CLANG_FORWARD_PROC_SYMBOL(public_6d07d40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff12);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff18);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff1e);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60a73);

#define public_6cf54db _public_6cf54db
#define public_6cf54f0 _public_6cf54f0
#define public_6cf552e _public_6cf552e
#define public_6cf5546 _public_6cf5546
#define public_6cf554d _public_6cf554d
#define public_6cf562f _public_6cf562f
#define public_6cf5641 _public_6cf5641
#define public_6cf56a3 _public_6cf56a3
#define public_6cf56a7 _public_6cf56a7
#define public_6cf56ca _public_6cf56ca
#define public_6cf56cc _public_6cf56cc
#define public_6cf56ed _public_6cf56ed
#define public_6cf56f1 _public_6cf56f1
#define public_6cf5712 _public_6cf5712
#define public_6cf5716 _public_6cf5716
#define public_6cf5734 _public_6cf5734
#define public_6cf5736 _public_6cf5736
#define public_6cf5821 _public_6cf5821
#define public_6cf5935 _public_6cf5935
#define public_6cf5973 _public_6cf5973
#define public_6cf59f1 _public_6cf59f1
#define public_6cf5a11 _public_6cf5a11
#define public_6cf5a2a _public_6cf5a2a
#define public_6cf5ac6 _public_6cf5ac6
#define public_6cf5b64 _public_6cf5b64
#define public_6cf5baa _public_6cf5baa
#define public_6cf5bac _public_6cf5bac
#define public_6cf5bff _public_6cf5bff
#define public_6cf5c32 _public_6cf5c32
#define public_6cf5c46 _public_6cf5c46
#define public_6cf5c58 _public_6cf5c58
#define public_6cf5cd1 _public_6cf5cd1
#define public_6cf5cf3 _public_6cf5cf3
#define public_6cf5d13 _public_6cf5d13
#define public_6cf5d15 _public_6cf5d15
#define public_6cf5d50 _public_6cf5d50
#define public_6cf5d6c _public_6cf5d6c
#define public_6cf5d6e _public_6cf5d6e
#define public_6cf5d82 _public_6cf5d82
#define public_6cf5d86 _public_6cf5d86
#define public_6cf5d9f _public_6cf5d9f
#define public_6cf5ddb _public_6cf5ddb
#define public_6cf5e9d _public_6cf5e9d
#define public_6cf5ea1 _public_6cf5ea1
#define public_6cf5eb0 _public_6cf5eb0
#define public_6cf5efd _public_6cf5efd
#define public_6cf5faa _public_6cf5faa
#define public_6cf5fb5 _public_6cf5fb5
#define public_6cf5ff6 _public_6cf5ff6
#define public_6cf6050 _public_6cf6050
#define public_6cf6079 _public_6cf6079
#define public_6cf6111 _public_6cf6111
#define public_6cf6115 _public_6cf6115
#define public_6cf6141 _public_6cf6141
#define public_6cf615d _public_6cf615d
#define public_6cf6170 _public_6cf6170
#define public_6cf6212 _public_6cf6212
#define public_6cf623c _public_6cf623c
#define public_6cf624e _public_6cf624e
#define public_6cf6275 _public_6cf6275
#define public_6cf62fc _public_6cf62fc
#define public_6cf6317 _public_6cf6317

PROC_DECLARE(0x6cf53e0, internal_6cf53e0, public_6cf53e0);
extern "C" NAKED register_t __cdecl internal_6cf53e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60a73 @0x6cf53e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60a73
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2A8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x48], ebp
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf62fc
        mov al, byte ptr ss : [esp+0x17]
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x44], al
        call public_6cfc340
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], ebx
        mov cl, byte ptr ss : [esp+0x17]
        push ebx
        mov byte ptr ss : [esp+0x28], cl
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C8], ebx
        call public_6cfc340
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        mov dl, byte ptr ss : [esp+0x17]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x2C8], 1
        mov byte ptr ss : [esp+0x38], dl
        call public_6cfc340
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        fld qword ptr ss : [esp+0x2C8]
        mov eax, dword ptr ss : [ebp+0x38]
        fadd qword ptr ss : [ebp+0x30]
        imul eax, 0x418
        fstp qword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ds : [public_6d90260]
        lea eax, ds:[eax+ecx-0x418]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 0x3E4
        push eax
        mov byte ptr ss : [esp+0x2CC], 2
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf54db
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        je public_6cf54db
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x3C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_6cf54db : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6cf554d
        mov edi, dword ptr ss : [esp+0x2CC]
        nop 
        lea esp, ss:[esp]
        public_6cf54f0 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        cmp byte ptr ds : [eax+0x2F0], bl
        je public_6cf552e
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6d05d90
        mov ecx, dword ptr ss : [esp+0x2C8]
        mov edx, dword ptr ss : [esp+0x18]
        push edi
        push ecx
        lea ecx, ds:[edx+8]
        call public_6d5ff1e
        jmp public_6cf5546
        public_6cf552e : nop
        mov ecx, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6d05d90
        public_6cf5546 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6cf54f0
        public_6cf554d : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ss : [ebp+0x38]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x50]
        fcomp qword ptr ds : [public_6d66990]
        fnstsw ax
        test ah, 1
        jne public_6cf562f
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x2C4], 1
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x2C4], bl
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x2C4], 0xFFFFFFFF
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        call public_6d5ffb0
        add esp, 4
        jmp public_6cf62fc
        public_6cf562f : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x60], eax
        je public_6cf5c46
        public_6cf5641 : nop
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, dword ptr ds : [eax]
        push esi
        mov ecx, ebp
        call public_6cf7260
        test al, al
        je public_6cf5c32
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x38]
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x50]
        fcomp qword ptr ds : [public_6d66990]
        fnstsw ax
        test ah, 1
        je public_6cf5ddb
        cmp esi, ebx
        je public_6cf56a3
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6cf56a3
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6cf56a3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        mov dword ptr ss : [esp+0x5C], eax
        je public_6cf56a7
        public_6cf56a3 : nop
        mov dword ptr ss : [esp+0x5C], ebx
        public_6cf56a7 : nop
        cmp esi, ebx
        je public_6cf56ca
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6cf56ca
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        je public_6cf56ca
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_6cf56cc
        public_6cf56ca : nop
        xor edi, edi
        public_6cf56cc : nop
        cmp esi, ebx
        je public_6cf56ed
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6cf56ed
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6cf56ed
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x17
        cmp cl, 0x17
        mov dword ptr ss : [esp+0x64], eax
        je public_6cf56f1
        public_6cf56ed : nop
        mov dword ptr ss : [esp+0x64], ebx
        public_6cf56f1 : nop
        cmp esi, ebx
        je public_6cf5712
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6cf5712
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6cf5712
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xF
        cmp dl, 0xF
        mov dword ptr ss : [esp+0x18], eax
        je public_6cf5716
        public_6cf5712 : nop
        mov dword ptr ss : [esp+0x18], ebx
        public_6cf5716 : nop
        cmp esi, ebx
        je public_6cf5734
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        je public_6cf5734
        mov ebp, dword ptr ds : [eax+4]
        cmp ebp, ebx
        je public_6cf5734
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 0xA7
        cmp al, 0xA7
        je public_6cf5736
        public_6cf5734 : nop
        xor ebp, ebp
        public_6cf5736 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebx
        je public_6cf5821
        mov ecx, eax
        push ecx
        lea edx, ss:[esp+0xCC]
        push edx
        mov dword ptr ss : [esp+0xD0], ebx
        mov dword ptr ss : [esp+0xD4], ebx
        mov dword ptr ss : [esp+0xD8], 0
        mov dword ptr ss : [esp+0xDC], ebx
        mov dword ptr ss : [esp+0xE0], ebx
        mov dword ptr ss : [esp+0xE4], 0
        mov dword ptr ss : [esp+0xE8], ebx
        mov byte ptr ss : [esp+0x114], 1
        mov byte ptr ss : [esp+0x115], bl
        mov byte ptr ss : [esp+0x116], bl
        call public_6d07b90
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax+0x38]
        lea edi, ds:[eax+0x38]
        add esp, 8
        push ecx
        mov ecx, esi
        call public_6cef450
        mov ebp, dword ptr ss : [esp+0x5C]
        mov byte ptr ss : [esp+0x10E], al
        mov eax, dword ptr ss : [ebp+0xE4]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0xC8]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x78], bl
        mov byte ptr ss : [esp+0x79], bl
        mov dword ptr ss : [esp+0x74], 5
        mov dword ptr ss : [esp+0x7C], edx
        mov byte ptr ss : [esp+0x80], 1
        call public_6cef450
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov byte ptr ss : [esp+0x74], al
        mov al, byte ptr ss : [ebp+0xFD]
        mov byte ptr ss : [esp+0x75], al
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x6C]
        push eax
        mov eax, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [edx+0xC0]
        jmp public_6cf5bff
        public_6cf5821 : nop
        cmp edi, ebx
        je public_6cf5a2a
        lea ecx, ss:[esp+0x1A0]
        call public_6cf63f0
        mov dword ptr ss : [esp+0x24C], ebx
        mov dword ptr ss : [esp+0x250], ebx
        mov dword ptr ss : [esp+0x254], ebx
        mov dword ptr ss : [esp+0x270], 0
        mov dword ptr ss : [esp+0x274], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x278], ebx
        mov byte ptr ss : [esp+0x27C], bl
        mov dword ptr ss : [esp+0x1A0], offset public_6d65f78
        lea ecx, ss:[esp+0x1A0]
        push edi
        push ecx
        mov byte ptr ss : [esp+0x2C8], 3
        call public_6d07690
        mov ebp, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [ebp+0x38]
        mov ecx, dword ptr ds : [public_6d90260]
        mov edx, eax
        imul edx, 0x418
        mov ecx, dword ptr ds : [edx+ecx-0x100]
        add esp, 8
        mov dword ptr ss : [esp+0x274], ecx
        push eax
        mov ecx, esi
        call public_6cef450
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov byte ptr ss : [esp+0x248], al
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1A0]
        push eax
        mov eax, dword ptr ss : [ebp+0x38]
        push eax
        call dword ptr ds : [edx+0xBC]
        mov ecx, edi
        call dword ptr ds : [public_6d6448c]
        mov ecx, edi
        mov esi, eax
        call dword ptr ds : [public_6d64488]
        cmp esi, ebx
        mov ebp, eax
        je public_6cf5935
        mov ecx, dword ptr ds : [edi+0xB0]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [public_6d6402c]
        mov word ptr ss : [esp+0x58], bp
        mov cx, word ptr ds : [eax]
        lea eax, ss:[esp+0x4C]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [eax+0x38]
        mov word ptr ss : [esp+0x54], cx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6cf5935 : nop
        push 0x80
        lea ecx, ss:[esp+0xAC]
        call dword ptr ds : [public_6d64204]
        lea ecx, ss:[esp+0xA8]
        add edi, 0xE4
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64200]
        mov ebp, dword ptr ds : [public_6d641bc]
        push eax
        call ebp
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6cf5a11
        public_6cf5973 : nop
        mov edx, dword ptr ds : [public_6d6402c]
        xor eax, eax
        mov dword ptr ss : [esp+0x18], ebx
        mov ax, word ptr ds : [edx]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6d641b0]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_6cf59f1
        mov ecx, dword ptr ss : [esp+0x1A4]
        mov si, word ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xB8], ecx
        mov edx, dword ptr ds : [eax+0xB0]
        mov ax, word ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov word ptr ss : [esp+0xC4], ax
        lea eax, ss:[esp+0xB8]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        add eax, 0x38
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC4], edx
        mov word ptr ss : [esp+0xC0], si
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        public_6cf59f1 : nop
        lea ecx, ss:[esp+0xA8]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64200]
        push eax
        call ebp
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        jne public_6cf5973
        public_6cf5a11 : nop
        lea ecx, ss:[esp+0x1A0]
        mov byte ptr ss : [esp+0x2C0], 2
        call public_6cf64d0
        jmp public_6cf5bff
        public_6cf5a2a : nop
        cmp dword ptr ss : [esp+0x64], ebx
        je public_6cf5ac6
        mov edx, dword ptr ds : [public_6d6402c]
        push ebx
        mov dword ptr ss : [esp+0x114], ebx
        mov dword ptr ss : [esp+0x118], ebx
        mov dword ptr ss : [esp+0x11C], ebx
        mov ax, word ptr ds : [edx]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x12C]
        mov word ptr ss : [esp+0x128], ax
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x148]
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x154]
        call public_6ce7c10
        mov ecx, dword ptr ss : [esp+0x64]
        push ecx
        lea edx, ss:[esp+0x114]
        push edx
        mov dword ptr ss : [esp+0x15C], ebx
        call public_6d07c80
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea eax, ss:[esp+0x110]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        add eax, 0x38
        push eax
        call dword ptr ds : [edx+0xCC]
        jmp public_6cf5bff
        public_6cf5ac6 : nop
        cmp dword ptr ss : [esp+0x18], ebx
        je public_6cf5b64
        mov ecx, dword ptr ds : [public_6d6402c]
        push ebx
        mov dword ptr ss : [esp+0x15C], ebx
        mov dword ptr ss : [esp+0x160], ebx
        mov dword ptr ss : [esp+0x164], ebx
        mov dx, word ptr ds : [ecx]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x174]
        mov word ptr ss : [esp+0x170], dx
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x190]
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x19C]
        call public_6ce7c10
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ss:[esp+0x15C]
        push ecx
        mov dword ptr ss : [esp+0x1A4], ebx
        call public_6d07c80
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea eax, ss:[esp+0x158]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        add eax, 0x38
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC4]
        jmp public_6cf5bff
        public_6cf5b64 : nop
        cmp ebp, ebx
        je public_6cf5bff
        lea ecx, ss:[esp+0x280]
        push ebp
        push ecx
        call public_6d07d40
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea eax, ss:[esp+0x280]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        lea esi, ds:[eax+0x38]
        push esi
        call dword ptr ds : [edx+0xC8]
        mov eax, dword ptr ss : [ebp+0xF0]
        cmp eax, ebx
        je public_6cf5baa
        lea ecx, ds:[eax-8]
        jmp public_6cf5bac
        public_6cf5baa : nop
        xor ecx, ecx
        public_6cf5bac : nop
        cmp ecx, ebx
        mov di, word ptr ss : [ebp+0xF8]
        je public_6cf5bff
        mov edx, dword ptr ss : [ebp+0xB0]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x98], edx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dword ptr ss : [esp+0xA0], eax
        mov word ptr ss : [esp+0xA4], di
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov word ptr ss : [esp+0x9C], dx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x98]
        push edx
        mov edx, dword ptr ds : [esi]
        push edx
        call dword ptr ds : [eax+0x10]
        public_6cf5bff : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [eax+0x2F0], 1
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6d05d90
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, 8
        call public_6d5ff18
        mov ebp, dword ptr ss : [esp+0x48]
        public_6cf5c32 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x60], eax
        jne public_6cf5641
        public_6cf5c46 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x60], esi
        je public_6cf5e9d
        public_6cf5c58 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x50]
        fcomp qword ptr ds : [public_6d66990]
        fnstsw ax
        test ah, 1
        je public_6cf5ddb
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, dword ptr ds : [eax]
        add eax, 8
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6cf7260
        cmp al, bl
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        jne public_6cf5cd1
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea edx, ss:[esp+0x64]
        push edx
        mov edx, dword ptr ss : [ebp+0x38]
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ss : [esp+0x6C], ebx
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [eax+0x2F0], bl
        jmp public_6cf5d82
        public_6cf5cd1 : nop
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov edi, eax
        mov eax, dword ptr ds : [public_6d8d7f8]
        cmp eax, ebx
        jne public_6cf5cf3
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d7f8], eax
        public_6cf5cf3 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0xAC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov esi, dword ptr ds : [esi+0x10]
        cmp esi, ebx
        je public_6cf5d13
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        je public_6cf5d15
        public_6cf5d13 : nop
        xor esi, esi
        public_6cf5d15 : nop
        cmp dword ptr ds : [esi+0xB4], ebx
        jne public_6cf5d82
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0xA8]
        push ecx
        push edx
        lea eax, ss:[ebp+0x3C]
        push eax
        mov ecx, esi
        call public_6d5ff12
        cmp al, 1
        jne public_6cf5d82
        mov ecx, dword ptr ss : [esp+0x40]
        fld qword ptr ds : [esi+0x2C0]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        je public_6cf5d6c
        lea ecx, ds:[ecx]
        public_6cf5d50 : nop
        mov edx, dword ptr ds : [esi+8]
        fld qword ptr ds : [edx+0x2C8]
        fld st(1)
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        je public_6cf5d9f
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_6cf5d50
        public_6cf5d6c : nop
        fstp st(0)
        public_6cf5d6e : nop
        lea edx, ss:[esp+0x1C]
        push edx
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6d05d90
        public_6cf5d82 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        public_6cf5d86 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x60], esi
        jne public_6cf5c58
        jmp public_6cf5ea1
        public_6cf5d9f : nop
        mov eax, dword ptr ds : [esi+4]
        fstp st(0)
        push eax
        push esi
        lea ecx, ss:[esp+0x44]
        call public_6cfc340
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        add eax, 8
        push eax
        call public_6d06720
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        cmp esi, ecx
        jne public_6cf5d86
        jmp public_6cf5d6e
        public_6cf5ddb : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x2C4], 1
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x2C4], bl
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x2C4], 0xFFFFFFFF
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        call public_6d5ffb0
        add esp, 4
        jmp public_6cf62fc
        public_6cf5e9d : nop
        mov ecx, dword ptr ss : [esp+0x40]
        public_6cf5ea1 : nop
        mov edi, dword ptr ds : [ecx]
        cmp edi, ecx
        je public_6cf5ff6
        nop 
        lea esp, ss:[esp]
        public_6cf5eb0 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x50]
        fcomp qword ptr ds : [public_6d66990]
        fnstsw ax
        test ah, 1
        je public_6cf6079
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_6d8d7f8]
        cmp eax, ebx
        jne public_6cf5efd
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d7f8], eax
        public_6cf5efd : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        fld qword ptr ss : [ebp+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x6C], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x80], edx
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x84], eax
        mov ecx, dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x88], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ss : [esp+0x58]
        lea eax, ds:[esi+0xC]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        mov byte ptr ss : [esp+0x94], 0xFF
        je public_6cf5faa
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_6cf5faa
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6cf5faa
        mov edx, dword ptr ds : [eax+0x29C]
        mov dword ptr ss : [esp+0x90], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x148]
        mov byte ptr ss : [esp+0x94], al
        jmp public_6cf5fb5
        public_6cf5faa : nop
        mov dword ptr ss : [esp+0x90], 0
        public_6cf5fb5 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x6C]
        push eax
        mov eax, dword ptr ss : [ebp+0x38]
        push eax
        call dword ptr ds : [edx+0xD8]
        mov eax, dword ptr ss : [ebp+0x34]
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        mov eax, dword ptr ss : [ebp+0x30]
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, 8
        push eax
        call dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x40]
        jne public_6cf5eb0
        public_6cf5ff6 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x50]
        fcomp qword ptr ds : [public_6d66990]
        fnstsw ax
        test ah, 1
        je public_6cf6275
        mov cl, byte ptr ss : [esp+0x17]
        push ebx
        mov byte ptr ss : [esp+0x50], cl
        push ebx
        lea ecx, ss:[esp+0x54]
        call public_6cfc340
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ebx
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [ecx]
        cmp edx, ecx
        mov byte ptr ss : [esp+0x2C0], 4
        mov dword ptr ss : [esp+0x1C], edx
        je public_6cf615d
        lea ebx, ds:[ebx]
        public_6cf6050 : nop
        lea eax, ds:[edx+0xC]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf6111
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6cf6115
        public_6cf6079 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x2CC], 1
        call public_6cf7720
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x2CC], bl
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x2CC], 0xFFFFFFFF
        call public_6cf7720
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call public_6d5ffb0
        add esp, 4
        jmp public_6cf62fc
        public_6cf6111 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6cf6115 : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6cf6141
        push eax
        mov ecx, ebp
        call public_6cf7260
        test al, al
        je public_6cf6141
        mov eax, dword ptr ss : [esp+0x50]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x58]
        call public_6d05d90
        public_6cf6141 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6ce5700
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, eax
        jne public_6cf6050
        mov eax, dword ptr ss : [esp+0x50]
        public_6cf615d : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        je public_6cf624e
        nop 
        lea esp, ss:[esp]
        public_6cf6170 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x50]
        fcomp qword ptr ds : [public_6d66990]
        fnstsw ax
        test ah, 1
        je public_6cf6317
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        je public_6cf623c
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x70]
        call dword ptr ds : [public_6d64224]
        mov byte ptr ss : [esp+0x78], bl
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ebx
        mov edx, dword ptr ds : [esi]
        push 0x40000000
        lea eax, ss:[esp+0x70]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C8], 5
        mov dword ptr ss : [esp+0x84], 0x19
        call dword ptr ds : [edx+0x1A8]
        cmp dword ptr ss : [esp+0x74], ebx
        je public_6cf6212
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x6C]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [ebp+0x38]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        call dword ptr ds : [edi+0xFC]
        mov edi, dword ptr ss : [esp+0x10]
        public_6cf6212 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[ebp+0x14]
        call public_6cf75f0
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x2C0], 4
        call dword ptr ds : [public_6d64220]
        public_6cf623c : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x50]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_6cf6170
        public_6cf624e : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x2CC], 2
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        call public_6d5ffb0
        add esp, 4
        public_6cf6275 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x2CC], 1
        call public_6cf7720
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call public_6d5ffb0
        add esp, 4
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x2C4], bl
        call public_6d5c540
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6cf7720
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_6d5ffb0
        add esp, 4
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x2C0], 0xFFFFFFFF
        call public_6cecb50
        public_6cf62fc : nop
        mov ecx, dword ptr ss : [esp+0x2B8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2B4
        ret 8
        public_6cf6317 : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x2CC], 2
        call public_6cf7720
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x2CC], 1
        call public_6cf7720
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x2CC], bl
        call public_6cf7720
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x44]
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x2CC], 0xFFFFFFFF
        call public_6cf7720
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        call public_6d5ffb0
        add esp, 4
        jmp public_6cf62fc
        UNREACHABLE_TRAP(0x6cf53e0)
    }
}

#undef public_6cf54db
#undef public_6cf54f0
#undef public_6cf552e
#undef public_6cf5546
#undef public_6cf554d
#undef public_6cf562f
#undef public_6cf5641
#undef public_6cf56a3
#undef public_6cf56a7
#undef public_6cf56ca
#undef public_6cf56cc
#undef public_6cf56ed
#undef public_6cf56f1
#undef public_6cf5712
#undef public_6cf5716
#undef public_6cf5734
#undef public_6cf5736
#undef public_6cf5821
#undef public_6cf5935
#undef public_6cf5973
#undef public_6cf59f1
#undef public_6cf5a11
#undef public_6cf5a2a
#undef public_6cf5ac6
#undef public_6cf5b64
#undef public_6cf5baa
#undef public_6cf5bac
#undef public_6cf5bff
#undef public_6cf5c32
#undef public_6cf5c46
#undef public_6cf5c58
#undef public_6cf5cd1
#undef public_6cf5cf3
#undef public_6cf5d13
#undef public_6cf5d15
#undef public_6cf5d50
#undef public_6cf5d6c
#undef public_6cf5d6e
#undef public_6cf5d82
#undef public_6cf5d86
#undef public_6cf5d9f
#undef public_6cf5ddb
#undef public_6cf5e9d
#undef public_6cf5ea1
#undef public_6cf5eb0
#undef public_6cf5efd
#undef public_6cf5faa
#undef public_6cf5fb5
#undef public_6cf5ff6
#undef public_6cf6050
#undef public_6cf6079
#undef public_6cf6111
#undef public_6cf6115
#undef public_6cf6141
#undef public_6cf615d
#undef public_6cf6170
#undef public_6cf6212
#undef public_6cf623c
#undef public_6cf624e
#undef public_6cf6275
#undef public_6cf62fc
#undef public_6cf6317
