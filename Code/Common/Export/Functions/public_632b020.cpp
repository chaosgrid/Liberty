#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_63272c0);
CLANG_FORWARD_PROC_SYMBOL(public_632bd10);
CLANG_FORWARD_PROC_SYMBOL(public_632bd50);
CLANG_FORWARD_PROC_SYMBOL(public_632c490);
CLANG_FORWARD_PROC_SYMBOL(public_632d550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397390);

#define public_632b0b0 _public_632b0b0
#define public_632b142 _public_632b142
#define public_632b155 _public_632b155
#define public_632b1c0 _public_632b1c0
#define public_632b1d6 _public_632b1d6
#define public_632b241 _public_632b241
#define public_632b257 _public_632b257
#define public_632b332 _public_632b332
#define public_632b33e _public_632b33e
#define public_632b34c _public_632b34c
#define public_632b36f _public_632b36f
#define public_632b371 _public_632b371
#define public_632b397 _public_632b397
#define public_632b3b7 _public_632b3b7
#define public_632b3d3 _public_632b3d3
#define public_632b3dc _public_632b3dc
#define public_632b404 _public_632b404
#define public_632b450 _public_632b450
#define public_632b45b _public_632b45b
#define public_632b47d _public_632b47d
#define public_632b4a5 _public_632b4a5
#define public_632b4d5 _public_632b4d5
#define public_632b50a _public_632b50a
#define public_632b520 _public_632b520
#define public_632b543 _public_632b543
#define public_632b558 _public_632b558
#define public_632b576 _public_632b576
#define public_632b5ab _public_632b5ab
#define public_632b5ad _public_632b5ad
#define public_632b5c3 _public_632b5c3
#define public_632b5e7 _public_632b5e7
#define public_632b605 _public_632b605
#define public_632b63a _public_632b63a
#define public_632b63c _public_632b63c
#define public_632b64e _public_632b64e
#define public_632b651 _public_632b651
#define public_632b654 _public_632b654
#define public_632b666 _public_632b666
#define public_632b6b2 _public_632b6b2
#define public_632b749 _public_632b749
#define public_632b79f _public_632b79f
#define public_632b7f0 _public_632b7f0
#define public_632b842 _public_632b842
#define public_632b876 _public_632b876
#define public_632b8b0 _public_632b8b0
#define public_632b8e5 _public_632b8e5
#define public_632b8ec _public_632b8ec
#define public_632b920 _public_632b920
#define public_632b955 _public_632b955
#define public_632b957 _public_632b957
#define public_632b95a _public_632b95a
#define public_632b960 _public_632b960
#define public_632b96f _public_632b96f
#define public_632b99f _public_632b99f
#define public_632b9e0 _public_632b9e0
#define public_632ba70 _public_632ba70
#define public_632ba81 _public_632ba81
#define public_632ba90 _public_632ba90
#define public_632baa5 _public_632baa5
#define public_632bad0 _public_632bad0
#define public_632bae6 _public_632bae6
#define public_632bb21 _public_632bb21
#define public_632bb71 _public_632bb71
#define public_632bb7a _public_632bb7a
#define public_632bb83 _public_632bb83
#define public_632bb8a _public_632bb8a
#define public_632bb92 _public_632bb92
#define public_632bbd3 _public_632bbd3
#define public_632bc34 _public_632bc34
#define public_632bc87 _public_632bc87
#define public_632bca3 _public_632bca3
#define public_632bcba _public_632bcba

PROC_DECLARE(0x632b020, internal_632b020, public_632b020);
extern "C" NAKED register_t __cdecl internal_632b020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push public_6397390 @0x632b025*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397390
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, dword ptr ss : [ebp+0x18]
        push edi
        mov edi, dword ptr ds : [public_6399278]
        push esi
/*FIXUP push offset public_63a48a8 @0x632b04b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48a8
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        je public_632bcba
        push esi
/*FIXUP push offset public_63a48a0 @0x632b05f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48a0
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b6b2
        mov eax, dword ptr ds : [public_640957c]
        xor esi, esi
        mov dword ptr ss : [ebp-0x4C], offset public_63a3f64
        mov dword ptr ss : [ebp-0x48], eax
        mov dword ptr ss : [ebp-0x40], esi
        mov dword ptr ss : [ebp-0x3C], esi
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x24]
        push edx
        push eax
        mov dword ptr ss : [ebp-4], esi
        mov dword ptr ss : [ebp+0x18], esi
        mov dword ptr ss : [ebp-0x30], esi
        mov dword ptr ss : [ebp+0x14], esi
        call dword ptr ds : [ecx+0xC]
        cmp dword ptr ss : [ebp-0x24], esi
        mov dword ptr ss : [ebp-0x20], esi
        jle public_632b666
        mov edi, edi
        public_632b0b0 : nop
        mov edi, dword ptr ss : [ebp-0x20]
        mov esi, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-0x18]
        push ecx
        lea edx, ss:[ebp-0x1C]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-0x10]
        push ecx
        lea edx, ss:[ebp-0x14]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov esi, dword ptr ds : [public_6399278]
        push eax
/*FIXUP push offset public_63a4894 @0x632b0e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4894
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b155
        mov eax, dword ptr ss : [ebp-0x10]
        lea esi, ds:[eax+eax+2]
        mov ebx, eax
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, esi
        mov esi, dword ptr ss : [ebp-0x14]
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        cmp ebx, 2
        rep movsb
        jle public_632b142
        cmp word ptr ds : [eax], 0x30
        jne public_632b142
        cmp word ptr ds : [eax+2], 0x78
        jne public_632b142
        push 0x10
        push 0
        push eax
        call dword ptr ds : [public_6399274]
        add esp, 0xC
        jmp public_632b651
        public_632b142 : nop
        push 0xA
        push 0
        push eax
        call dword ptr ds : [public_6399270]
        add esp, 0xC
        jmp public_632b651
        public_632b155 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x1C]
        push eax
/*FIXUP push offset public_63a488c @0x632b15c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a488c
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b1d6
        mov eax, dword ptr ss : [ebp-0x10]
        lea esi, ds:[eax+eax+2]
        mov ebx, eax
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, esi
        mov esi, dword ptr ss : [ebp-0x14]
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        cmp ebx, 2
        rep movsb
        jle public_632b1c0
        cmp word ptr ds : [eax], 0x30
        jne public_632b1c0
        cmp word ptr ds : [eax+2], 0x78
        jne public_632b1c0
        push 0x10
        push 0
        push eax
        call dword ptr ds : [public_6399274]
        add esp, 0xC
        mov dword ptr ss : [ebp+0x14], eax
        jmp public_632b654
        public_632b1c0 : nop
        push 0xA
        push 0
        push eax
        call dword ptr ds : [public_6399270]
        add esp, 0xC
        mov dword ptr ss : [ebp+0x14], eax
        jmp public_632b654
        public_632b1d6 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x1C]
        push eax
/*FIXUP push offset public_63a4880 @0x632b1dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4880
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        mov eax, dword ptr ss : [ebp-0x10]
        jne public_632b257
        lea esi, ds:[eax+eax+2]
        mov ebx, eax
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, esi
        mov esi, dword ptr ss : [ebp-0x14]
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        cmp ebx, 2
        rep movsb
        jle public_632b241
        cmp word ptr ds : [eax], 0x30
        jne public_632b241
        cmp word ptr ds : [eax+2], 0x78
        jne public_632b241
        push 0x10
        push 0
        push eax
        call dword ptr ds : [public_6399274]
        add esp, 0xC
        mov dword ptr ss : [ebp-0x30], eax
        jmp public_632b654
        public_632b241 : nop
        push 0xA
        push 0
        push eax
        call dword ptr ds : [public_6399270]
        add esp, 0xC
        mov dword ptr ss : [ebp-0x30], eax
        jmp public_632b654
        public_632b257 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ds : [public_6399278]
        push eax
/*FIXUP push offset public_63a4870 @0x632b261*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4870
        push ecx
        call esi
        mov edx, dword ptr ss : [ebp-0x18]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp-0x1C]
        push edx
        neg ebx
        sbb bl, bl
/*FIXUP push offset public_63a4864 @0x632b276*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4864
        push eax
        inc bl
        call esi
        add esp, 0x18
        test eax, eax
        jne public_632b3dc
        mov eax, dword ptr ss : [ebp-0x14]
        mov cx, word ptr ds : [eax]
        cmp cx, 0x23
        jne public_632b33e
        mov ecx, dword ptr ss : [ebp-0x10]
        dec ecx
        cmp ecx, 6
        lea esi, ds:[eax+2]
        jne public_632b332
        xor edx, edx
        mov dx, word ptr ds : [esi+6]
        push edx
        call public_632bd10
        xor edi, edi
        mov di, ax
        xor eax, eax
        mov ax, word ptr ds : [esi+4]
        shl edi, 4
        push eax
        call public_632bd10
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0xA]
        add edi, eax
        push ecx
        call public_632bd10
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        xor ebx, ebx
        mov bx, ax
        push edx
        shl ebx, 4
        call public_632bd10
        add ebx, eax
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        push eax
        call public_632bd10
        xor ecx, ecx
        mov cx, word ptr ds : [esi]
        shl eax, 4
        mov dword ptr ss : [ebp-0x28], eax
        push ecx
        call public_632bd10
        mov ecx, dword ptr ss : [ebp-0x28]
        xor edx, edx
        mov dx, bx
        add esp, 0x18
        add ecx, eax
        xor eax, eax
        mov ax, cx
        xor ecx, ecx
        mov cx, di
        shl edx, 8
        add edx, ecx
        shl edx, 8
        add eax, edx
        jmp public_632b3b7
/*FIXUP public_632b332 : nop
        push offset public_63a4830 @0x632b332*/
  FIXUP public_632b332 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4830
        push 0xD67
        jmp public_632b397
        public_632b33e : nop
        test bl, bl
        je public_632b34c
        mov eax, 0xFFFFFF00
        jmp public_632b543
        public_632b34c : nop
        mov ebx, dword ptr ss : [ebp-0x10]
        mov edi, eax
        push ecx
        mov dword ptr ss : [ebp-0x28], edi
        call dword ptr ds : [public_639926c]
        add esp, 4
        test eax, eax
        je public_632b36f
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push edi
        call public_632bd50
        dec eax
        jmp public_632b3b7
        public_632b36f : nop
        xor edi, edi
        public_632b371 : nop
        mov eax, dword ptr ds : [edi*4+public_63ed9ac]
        mov ecx, dword ptr ss : [ebp-0x28]
        push ebx
        push eax
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        je public_632b3d3
        inc edi
        cmp edi, 8
        jb public_632b371
/*FIXUP push offset public_63a4830 @0x632b38d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4830
        push 0xD94
        public_632b397 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a4588 @0x632b39d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x632b3a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov eax, 0xFFFFFF
        public_632b3b7 : nop
        mov ecx, dword ptr ss : [ebp-0x2F]
        xor eax, ecx
        and eax, 0xFFFFFF
        xor ecx, eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x2F], ecx
        or eax, 0xFFFFFF00
        jmp public_632b651
        public_632b3d3 : nop
        mov eax, dword ptr ds : [edi*4+public_63ed98c]
        jmp public_632b3b7
        public_632b3dc : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x1C]
        push eax
/*FIXUP push offset public_63a4824 @0x632b3e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4824
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b47d
        test bl, bl
        je public_632b404
        mov eax, 0xF8
        jmp public_632b543
        public_632b404 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        lea esi, ds:[eax+eax+2]
        mov ebx, eax
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, esi
        mov esi, dword ptr ss : [ebp-0x14]
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        cmp ebx, 2
        rep movsb
        jle public_632b450
        cmp word ptr ds : [eax], 0x30
        jne public_632b450
        cmp word ptr ds : [eax+2], 0x78
        jne public_632b450
        push 0x10
        push 0
        push eax
        call dword ptr ds : [public_6399274]
        jmp public_632b45b
        public_632b450 : nop
        push 0xA
        push 0
        push eax
        call dword ptr ds : [public_6399270]
        public_632b45b : nop
        mov cl, byte ptr ss : [ebp-0x30]
        shl al, 3
        add esp, 0xC
        dec al
        not cl
        and cl, 7
        xor al, cl
        mov byte ptr ss : [ebp-0x30], al
        mov eax, dword ptr ss : [ebp+0x18]
        or eax, 0xF8
        jmp public_632b651
        public_632b47d : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x1C]
        push edx
/*FIXUP push offset public_63a4818 @0x632b484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4818
        push eax
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b520
        test bl, bl
        je public_632b4a5
        mov eax, 1
        jmp public_632b543
        public_632b4a5 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        push eax
/*FIXUP push offset public_63a480c @0x632b4ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a480c
        push ecx
        mov edi, eax
        mov ebx, ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b4d5
        mov cl, byte ptr ss : [ebp-0x30]
        mov al, 1
        xor al, cl
        and al, 1
        xor cl, al
        mov eax, dword ptr ss : [ebp+0x18]
        or eax, 1
        jmp public_632b64e
        public_632b4d5 : nop
        push edi
/*FIXUP push offset public_63a4800 @0x632b4d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4800
        push ebx
        call esi
        add esp, 0xC
        test eax, eax
        je public_632b50a
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a47d0 @0x632b4eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47d0
        push 0xD5A
/*FIXUP push offset public_63a4588 @0x632b4f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x632b4ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_632b50a : nop
        mov cl, byte ptr ss : [ebp-0x30]
        xor al, al
        xor al, cl
        and al, 1
        xor cl, al
        mov eax, dword ptr ss : [ebp+0x18]
        or eax, 1
        jmp public_632b64e
        public_632b520 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x1C]
        push edx
/*FIXUP push offset public_63a47c0 @0x632b527*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47c0
        push eax
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b5c3
        test bl, bl
        je public_632b558
        mov eax, 2
        public_632b543 : nop
        mov edx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        or edx, eax
        or ecx, eax
        mov dword ptr ss : [ebp+0x18], edx
        mov dword ptr ss : [ebp+0x14], ecx
        jmp public_632b654
        public_632b558 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        push eax
/*FIXUP push offset public_63a480c @0x632b55f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a480c
        push ecx
        mov edi, eax
        mov ebx, ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b576
        mov al, 1
        jmp public_632b5ad
        public_632b576 : nop
        push edi
/*FIXUP push offset public_63a4800 @0x632b577*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4800
        push ebx
        call esi
        add esp, 0xC
        test eax, eax
        je public_632b5ab
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a47d0 @0x632b58c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47d0
        push 0xD5A
/*FIXUP push offset public_63a4588 @0x632b596*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x632b5a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_632b5ab : nop
        xor al, al
        public_632b5ad : nop
        mov cl, byte ptr ss : [ebp-0x30]
        shl al, 1
        xor al, cl
        and al, 2
        xor cl, al
        mov eax, dword ptr ss : [ebp+0x18]
        or eax, 2
        jmp public_632b64e
        public_632b5c3 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x1C]
        push edx
/*FIXUP push offset public_63a47ac @0x632b5ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47ac
        push eax
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b654
        test bl, bl
        je public_632b5e7
        mov eax, 4
        jmp public_632b543
        public_632b5e7 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x14]
        push eax
/*FIXUP push offset public_63a480c @0x632b5ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a480c
        push ecx
        mov edi, eax
        mov ebx, ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632b605
        mov al, 1
        jmp public_632b63c
        public_632b605 : nop
        push edi
/*FIXUP push offset public_63a4800 @0x632b606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4800
        push ebx
        call esi
        add esp, 0xC
        test eax, eax
        je public_632b63a
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a47d0 @0x632b61b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47d0
        push 0xD5A
/*FIXUP push offset public_63a4588 @0x632b625*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x632b62f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_632b63a : nop
        xor al, al
        public_632b63c : nop
        mov cl, byte ptr ss : [ebp-0x30]
        shl al, 2
        xor al, cl
        and al, 4
        xor cl, al
        mov eax, dword ptr ss : [ebp+0x18]
        or eax, 4
        public_632b64e : nop
        mov byte ptr ss : [ebp-0x30], cl
        public_632b651 : nop
        mov dword ptr ss : [ebp+0x18], eax
        public_632b654 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-0x24]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x20], eax
        jl public_632b0b0
        public_632b666 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x40], eax
        and eax, ebx
        mov dword ptr ss : [ebp-0x48], eax
        mov eax, dword ptr ss : [ebp-0x4C]
        lea ecx, ss:[ebp-0x4C]
        mov dword ptr ss : [ebp-0x3C], edx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp+0x24], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+0x24]
        push edx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        mov byte ptr ss : [ebp-4], 1
        call public_632c490
        lea ecx, ss:[ebp+0x24]
        mov byte ptr ss : [ebp-4], 0
        call public_63272c0
        jmp public_632bcba
        public_632b6b2 : nop
        push esi
/*FIXUP push offset public_63a47a0 @0x632b6b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47a0
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b749
        mov esi, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        jne public_632bcba
        mov cl, byte ptr ss : [ebp+0xB]
        mov byte ptr ss : [ebp-0x48], cl
        push 0
        lea ecx, ss:[ebp-0x48]
        mov dword ptr ss : [ebp-0x4C], offset public_63a3e54
        call dword ptr ds : [public_6399160]
        mov edi, offset public_63a3fec
        mov dword ptr ss : [ebp-0x4C], edi
        lea ecx, ss:[ebp-0x4C]
        mov dword ptr ss : [ebp-4], 2
        call dword ptr ds : [public_63a4008]
        mov dword ptr ss : [ebp+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+8]
        push edx
        push eax
        lea eax, ss:[ebp+0x18]
        push eax
        mov byte ptr ss : [ebp-4], 3
        call public_632c490
        lea ecx, ss:[ebp+8]
        mov byte ptr ss : [ebp-4], 2
        call public_63272c0
        push 1
        lea ecx, ss:[ebp-0x48]
        mov byte ptr ds : [esi+0x10], 1
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x4C], edi
        call dword ptr ds : [public_6399160]
        jmp public_632bcba
        public_632b749 : nop
        push esi
/*FIXUP push offset public_63a4794 @0x632b74a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4794
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b79f
        mov dword ptr ss : [ebp+0x18], offset public_63a4294
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ss : [ebp-4], 4
        call dword ptr ds : [public_63a42b0]
        mov dword ptr ss : [ebp+0x24], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+0x24]
        push edx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        mov byte ptr ss : [ebp-4], 5
        call public_632c490
        lea ecx, ss:[ebp+0x24]
        mov byte ptr ss : [ebp-4], 4
        call public_63272c0
        jmp public_632bcba
        public_632b79f : nop
        push esi
/*FIXUP push offset public_63a478c @0x632b7a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a478c
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b99f
        mov dword ptr ss : [ebp-0x38], offset public_63a420c
        mov byte ptr ss : [ebp-0x34], al
        mov byte ptr ss : [ebp-0x33], al
        mov dword ptr ss : [ebp-0x30], eax
        mov dword ptr ss : [ebp-0x2C], eax
        mov esi, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[ebp-0x18]
        push edx
        push esi
        mov dword ptr ss : [ebp-4], 6
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [ebp-0x18]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [ebp-0x20], ebx
        jle public_632b96f
        lea ebx, ds:[ebx]
        public_632b7f0 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp+0x18]
        push ecx
        lea edx, ss:[ebp+0x14]
        push edx
        push ebx
        push esi
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-0x24]
        push ecx
        lea edx, ss:[ebp-0x1C]
        push edx
        push ebx
        push esi
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        push eax
/*FIXUP push offset public_63a4788 @0x632b815*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4788
        push ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b842
        mov edx, dword ptr ss : [ebp-0x1C]
        push 0xA
        push eax
        push edx
        call dword ptr ds : [public_6399270]
        mov dword ptr ss : [ebp-0x28], eax
        fild dword ptr ss : [ebp-0x28]
        add esp, 0xC
        fstp dword ptr ss : [ebp-0x30]
        jmp public_632b960
        public_632b842 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        push eax
/*FIXUP push offset public_63a4784 @0x632b849*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4784
        push ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b876
        mov edx, dword ptr ss : [ebp-0x1C]
        push 0xA
        push eax
        push edx
        call dword ptr ds : [public_6399270]
        mov dword ptr ss : [ebp-0x28], eax
        fild dword ptr ss : [ebp-0x28]
        add esp, 0xC
        fstp dword ptr ss : [ebp-0x2C]
        jmp public_632b960
        public_632b876 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        push eax
/*FIXUP push offset public_63a4778 @0x632b87d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4778
        push ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b8ec
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x1C]
        push eax
/*FIXUP push offset public_63a480c @0x632b893*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a480c
        push ecx
        mov esi, eax
        mov ebx, ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b8b0
        mov al, 1
        mov byte ptr ss : [ebp-0x33], al
        jmp public_632b95a
        public_632b8b0 : nop
        push esi
/*FIXUP push offset public_63a4800 @0x632b8b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4800
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        je public_632b8e5
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a47d0 @0x632b8c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47d0
        push 0xD5A
/*FIXUP push offset public_63a4588 @0x632b8d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x632b8da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_632b8e5 : nop
        xor al, al
        mov byte ptr ss : [ebp-0x33], al
        jmp public_632b95a
        public_632b8ec : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        push eax
/*FIXUP push offset public_63a476c @0x632b8f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a476c
        push ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b960
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x1C]
        push eax
/*FIXUP push offset public_63a480c @0x632b909*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a480c
        push ecx
        mov esi, eax
        mov ebx, ecx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632b920
        mov al, 1
        jmp public_632b957
        public_632b920 : nop
        push esi
/*FIXUP push offset public_63a4800 @0x632b921*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4800
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        je public_632b955
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a47d0 @0x632b936*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a47d0
        push 0xD5A
/*FIXUP push offset public_63a4588 @0x632b940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100002
/*FIXUP push offset public_639f350 @0x632b94a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f350
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_632b955 : nop
        xor al, al
        public_632b957 : nop
        mov byte ptr ss : [ebp-0x34], al
        public_632b95a : nop
        mov esi, dword ptr ss : [ebp+0x24]
        mov ebx, dword ptr ss : [ebp-0x20]
        public_632b960 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        inc ebx
        cmp ebx, eax
        mov dword ptr ss : [ebp-0x20], ebx
        jl public_632b7f0
        public_632b96f : nop
        mov eax, dword ptr ss : [ebp-0x38]
        lea ecx, ss:[ebp-0x38]
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp+0x24], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+0x24]
        push edx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        mov byte ptr ss : [ebp-4], 7
        call public_632c490
        mov byte ptr ss : [ebp-4], 6
        jmp public_632bad0
        public_632b99f : nop
        push esi
/*FIXUP push offset public_63a4760 @0x632b9a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4760
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632bae6
        xor esi, esi
        mov dword ptr ss : [ebp-0x30], offset public_63a442c
        mov word ptr ss : [ebp-0x2C], si
        mov eax, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp-0x20]
        push edx
        push eax
        mov dword ptr ss : [ebp-4], 8
        call dword ptr ds : [ecx+0xC]
        cmp dword ptr ss : [ebp-0x20], esi
        mov dword ptr ss : [ebp+0x18], esi
        jle public_632baa5
        public_632b9e0 : nop
        mov edi, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp+0x14]
        push ecx
        lea edx, ss:[ebp-0x24]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp-0x28]
        push ecx
        lea edx, ss:[ebp-0x1C]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-0x24]
        mov esi, dword ptr ds : [public_6399278]
        push eax
/*FIXUP push offset public_63a4758 @0x632ba11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4758
        push ecx
        call esi
        add esp, 0xC
        test eax, eax
        jne public_632ba81
        mov eax, dword ptr ss : [ebp-0x28]
        lea esi, ds:[eax+eax+2]
        mov ebx, eax
        mov eax, esi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, esi
        mov esi, dword ptr ss : [ebp-0x1C]
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        cmp ebx, 2
        rep movsb
        jle public_632ba70
        cmp word ptr ds : [eax], 0x30
        jne public_632ba70
        cmp word ptr ds : [eax+2], 0x78
        jne public_632ba70
        push 0x10
        push 0
        push eax
        call dword ptr ds : [public_6399274]
        mov word ptr ss : [ebp-0x2C], ax
        jmp public_632ba90
        public_632ba70 : nop
        push 0xA
        push 0
        push eax
        call dword ptr ds : [public_6399270]
        mov word ptr ss : [ebp-0x2C], ax
        jmp public_632ba90
        public_632ba81 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp-0x24]
        push eax
/*FIXUP push offset public_63a474c @0x632ba88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a474c
        push ecx
        call esi
        public_632ba90 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp-0x20]
        add esp, 0xC
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x18], eax
        jl public_632b9e0
        public_632baa5 : nop
        mov edx, dword ptr ss : [ebp-0x30]
        lea ecx, ss:[ebp-0x30]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+0x24], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+0x24]
        push edx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        mov byte ptr ss : [ebp-4], 9
        call public_632c490
        mov byte ptr ss : [ebp-4], 8
        public_632bad0 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        test ecx, ecx
        je public_632bcba
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        jmp public_632bcba
        public_632bae6 : nop
        push esi
/*FIXUP push offset public_63a4740 @0x632bae7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4740
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632bbd3
        xor ebx, ebx
        mov dword ptr ss : [ebp-0x30], offset public_63a431c
        mov dword ptr ss : [ebp-0x2C], ebx
        mov esi, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[ebp+0x24]
        push ecx
        push esi
        mov dword ptr ss : [ebp-4], 0xA
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jle public_632bb92
        public_632bb21 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[ebp+0x18]
        push eax
        lea ecx, ss:[ebp+0x14]
        push ecx
        push ebx
        push esi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[ebp-0x24]
        push eax
        lea ecx, ss:[ebp-0x28]
        push ecx
        push ebx
        push esi
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x14]
        push edx
/*FIXUP push offset public_63a4738 @0x632bb46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4738
        push eax
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632bb8a
        mov ecx, dword ptr ss : [ebp-0x28]
        movzx eax, word ptr ds : [ecx]
        add eax, 0xFFFFFFBD
        cmp eax, 0x2F
        ja public_632bb83
/*FIXUP movzx edx, byte ptr ds : [eax+public_632bce0] @0x632bb63*/
/*FIXUP jmp dword ptr ds : [edx*4+public_632bcd4] @0x632bb6a*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_632bb7a
  JMPTB cmp eax, 1
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 2
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 3
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 4
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 5
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 6
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 7
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 8
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 9
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 1
  JMPTB je public_632bb71
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x13
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x14
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x15
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x16
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x17
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x18
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x19
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x1A
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x1B
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x1C
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x1D
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x1E
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x1F
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x20
  JMPTB mov edx, 0
  JMPTB je public_632bb7a
  JMPTB cmp eax, 0x21
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x22
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x23
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x24
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x25
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x26
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x27
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x28
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x29
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x2A
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x2B
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x2C
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x2D
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x2E
  JMPTB mov edx, 2
  JMPTB je public_632bb83
  JMPTB cmp eax, 0x2F
  JMPTB mov edx, 1
  JMPTB je public_632bb71
  JMPTB int 3
        public_632bb71 : nop
        mov dword ptr ss : [ebp-0x2C], 2
        jmp public_632bb8a
        public_632bb7a : nop
        mov dword ptr ss : [ebp-0x2C], 1
        jmp public_632bb8a
        public_632bb83 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        public_632bb8a : nop
        mov eax, dword ptr ss : [ebp+0x24]
        inc ebx
        cmp ebx, eax
        jl public_632bb21
        public_632bb92 : nop
        mov eax, dword ptr ss : [ebp-0x30]
        lea ecx, ss:[ebp-0x30]
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp+0x18]
        push edx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        mov byte ptr ss : [ebp-4], 0xB
        call public_632c490
        mov ecx, dword ptr ss : [ebp+0x18]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0xA
        je public_632bcba
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        jmp public_632bcba
        public_632bbd3 : nop
        push esi
/*FIXUP push offset public_63a472c @0x632bbd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a472c
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632bc34
        mov dword ptr ss : [ebp-0x30], offset public_63a40fc
        mov dword ptr ss : [ebp-0x2C], eax
        mov ebx, 0xC
        lea ecx, ss:[ebp-0x30]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_63a4118]
        mov dword ptr ss : [ebp+0x24], eax
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        mov byte ptr ss : [ebp-4], 0xD
        call public_62b9490
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[ebp+0x24]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_632d550
        mov byte ptr ss : [ebp-4], bl
        jmp public_632bca3
        public_632bc34 : nop
        push esi
/*FIXUP push offset public_63a4724 @0x632bc35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4724
        push ebx
        call edi
        add esp, 0xC
        test eax, eax
        jne public_632bcba
        mov dword ptr ss : [ebp-0x30], offset public_63a40fc
        mov dword ptr ss : [ebp-0x2C], 1
        lea ecx, ss:[ebp-0x30]
        mov dword ptr ss : [ebp-4], 0xE
        call dword ptr ds : [public_63a4118]
        mov dword ptr ss : [ebp+0x24], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ecx+0xC]
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        mov byte ptr ss : [ebp-4], 0xF
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_632bc87
        mov ebx, eax
        public_632bc87 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[ebp+0x24]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_632d550
        mov byte ptr ss : [ebp-4], 0xE
        public_632bca3 : nop
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [ebp+0x24]
        test ecx, ecx
        je public_632bcba
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_632bcba : nop
        xor eax, eax
        lea esp, ss:[ebp-0x58]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x20
        UNREACHABLE_TRAP(0x632b020)
        ASM_EXPORT_ENTRY_FIRST(0x632bb71, public_632bb71)
        ASM_EXPORT_ENTRY(0x632bb7a, public_632bb7a)
        ASM_EXPORT_ENTRY_LAST(0x632bb83, public_632bb83)
    }
}

#undef public_632b0b0
#undef public_632b142
#undef public_632b155
#undef public_632b1c0
#undef public_632b1d6
#undef public_632b241
#undef public_632b257
#undef public_632b332
#undef public_632b33e
#undef public_632b34c
#undef public_632b36f
#undef public_632b371
#undef public_632b397
#undef public_632b3b7
#undef public_632b3d3
#undef public_632b3dc
#undef public_632b404
#undef public_632b450
#undef public_632b45b
#undef public_632b47d
#undef public_632b4a5
#undef public_632b4d5
#undef public_632b50a
#undef public_632b520
#undef public_632b543
#undef public_632b558
#undef public_632b576
#undef public_632b5ab
#undef public_632b5ad
#undef public_632b5c3
#undef public_632b5e7
#undef public_632b605
#undef public_632b63a
#undef public_632b63c
#undef public_632b64e
#undef public_632b651
#undef public_632b654
#undef public_632b666
#undef public_632b6b2
#undef public_632b749
#undef public_632b79f
#undef public_632b7f0
#undef public_632b842
#undef public_632b876
#undef public_632b8b0
#undef public_632b8e5
#undef public_632b8ec
#undef public_632b920
#undef public_632b955
#undef public_632b957
#undef public_632b95a
#undef public_632b960
#undef public_632b96f
#undef public_632b99f
#undef public_632b9e0
#undef public_632ba70
#undef public_632ba81
#undef public_632ba90
#undef public_632baa5
#undef public_632bad0
#undef public_632bae6
#undef public_632bb21
#undef public_632bb71
#undef public_632bb7a
#undef public_632bb83
#undef public_632bb8a
#undef public_632bb92
#undef public_632bbd3
#undef public_632bc34
#undef public_632bc87
#undef public_632bca3
#undef public_632bcba

#pragma init_seg(compiler)
extern "C" void const* const public_632bb71 = __AsmFindLabelExport(&internal_632b020, 0x632bb71);
extern "C" void const* const public_632bb7a = __AsmFindLabelExport(&internal_632b020, 0x632bb7a);
extern "C" void const* const public_632bb83 = __AsmFindLabelExport(&internal_632b020, 0x632bb83);
