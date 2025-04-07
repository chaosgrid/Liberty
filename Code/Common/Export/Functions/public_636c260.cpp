#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_636be20);
CLANG_FORWARD_PROC_SYMBOL(public_636c260);
CLANG_FORWARD_PROC_SYMBOL(public_636c9a0);
CLANG_FORWARD_PROC_SYMBOL(public_636cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6374be0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e50);
CLANG_FORWARD_PROC_SYMBOL(public_6378060);
CLANG_FORWARD_PROC_SYMBOL(public_63784b0);
CLANG_FORWARD_PROC_SYMBOL(public_6392220);
CLANG_FORWARD_PROC_SYMBOL(public_6392250);
CLANG_FORWARD_JUMP_SYMBOL(public_6398851);

#define public_636c2af _public_636c2af
#define public_636c2b3 _public_636c2b3
#define public_636c303 _public_636c303
#define public_636c350 _public_636c350
#define public_636c37a _public_636c37a
#define public_636c391 _public_636c391
#define public_636c3dd _public_636c3dd
#define public_636c408 _public_636c408
#define public_636c434 _public_636c434
#define public_636c458 _public_636c458
#define public_636c47f _public_636c47f
#define public_636c4c8 _public_636c4c8
#define public_636c553 _public_636c553
#define public_636c557 _public_636c557
#define public_636c5a4 _public_636c5a4
#define public_636c5a8 _public_636c5a8
#define public_636c5bd _public_636c5bd
#define public_636c5e2 _public_636c5e2
#define public_636c5ef _public_636c5ef
#define public_636c609 _public_636c609
#define public_636c61f _public_636c61f
#define public_636c646 _public_636c646
#define public_636c671 _public_636c671
#define public_636c698 _public_636c698
#define public_636c6bf _public_636c6bf
#define public_636c6cd _public_636c6cd
#define public_636c6de _public_636c6de
#define public_636c708 _public_636c708
#define public_636c719 _public_636c719
#define public_636c72a _public_636c72a
#define public_636c756 _public_636c756
#define public_636c77a _public_636c77a
#define public_636c79e _public_636c79e

PROC_DECLARE(0x636c260, internal_636c260, public_636c260);
extern "C" NAKED register_t __cdecl internal_636c260()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6398851 @0x636c268*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398851
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x144
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        xor eax, eax
        mov ax, word ptr ds : [ebx+2]
        push esi
        xor esi, esi
        push edi
        mov word ptr ss : [esp+0xC], ax
        mov word ptr ss : [esp+0xE], si
        cmp eax, esi
        je public_636c2af
        shl eax, 2
        push eax
        call public_6343f70
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        jmp public_636c2b3
        public_636c2af : nop
        mov dword ptr ss : [esp+0x10], esi
        public_636c2b3 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+2]
        push 8
        mov dword ptr ss : [esp+0x15C], esi
        shl ecx, 2
        push ecx
        call public_6343f80
        add esp, 8
        mov edi, eax
        push 0x400
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x2C], edi
        call public_63522a0
        mov dword ptr ss : [esp+0x38], offset public_63a590c
        cmp word ptr ds : [ebx+2], si
        mov byte ptr ss : [esp+0x158], 1
        mov dword ptr ss : [esp+0x14], esi
        jbe public_636c391
        add edi, 0x10
        public_636c303 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+eax*4]
        push esi
        lea ecx, ss:[esp+0x3C]
        call public_636cfa0
        push eax
        push esi
        lea ecx, ss:[esp+0x40]
        call public_6352580
        test eax, eax
        jne public_636c37a
        push esi
        lea ecx, ss:[esp+0x3C]
        call public_636cfa0
        push eax
        push esi
        lea ecx, ss:[esp+0x40]
        call public_63523d0
        mov cx, word ptr ss : [esp+0xE]
        cmp cx, word ptr ss : [esp+0xC]
        jb public_636c350
        lea ecx, ss:[esp+0xC]
        call public_63441a0
        public_636c350 : nop
        mov edx, dword ptr ss : [esp+0xE]
        mov eax, dword ptr ss : [esp+0x10]
        and edx, 0xFFFF
        mov dword ptr ds : [eax+edx*4], esi
        inc word ptr ss : [esp+0xE]
        fld dword ptr ds : [esi]
        fstp qword ptr ds : [edi-0x10]
        add edi, 0x18
        fld dword ptr ds : [esi+4]
        fstp qword ptr ds : [edi-0x20]
        fld dword ptr ds : [esi+8]
        fstp qword ptr ds : [edi-0x18]
        public_636c37a : nop
        mov eax, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+2]
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ecx
        jl public_636c303
        public_636c391 : nop
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x158], 0
        call public_6377e50
        mov esi, dword ptr ss : [esp+0xE]
        and esi, 0xFFFF
        push 1
        push esi
        call public_6343f80
        push 1
        push esi
        mov dword ptr ss : [esp+0x30], eax
        call public_6343f80
        add esp, 0x10
        xor ebx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x18], 0x2B8CBCCC
        public_636c3dd : nop
        mov edi, dword ptr ds : [public_639931c]
        lea edx, ss:[esp+0x54]
/*FIXUP push offset public_63ee8e0 @0x636c3e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee8e0
        push edx
        call edi
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 8
        test eax, eax
        je public_636c434
        test ebx, ebx
        je public_636c408
        push 0
        call public_6374be0
        add esp, 4
        public_636c408 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push 0
        push 0
        lea eax, ss:[esp+0x5C]
        push eax
        push 0
        push ecx
        push esi
        push 3
        call public_63784b0
        add esp, 0x1C
        test eax, eax
        mov ebx, 1
        mov dword ptr ss : [esp+0x1C], ebx
        je public_636c4c8
        public_636c434 : nop
        push 1
        mov ecx, offset public_658c730
        call public_6392220
        test eax, eax
        je public_636c458
/*FIXUP push offset public_63ee8a8 @0x636c444*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee8a8
        push 1
/*FIXUP push offset public_658c730 @0x636c44b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658c730
        call public_6392250
        add esp, 0xC
        public_636c458 : nop
        fld dword ptr ss : [esp+0x18]
        sub esp, 8
        fstp qword ptr ss : [esp]
        lea edx, ss:[esp+0x5C]
/*FIXUP push offset public_63ee880 @0x636c466*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee880
        push edx
        call edi
        add esp, 0x10
        test ebx, ebx
        je public_636c47f
        push 0
        call public_6374be0
        add esp, 4
        public_636c47f : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push 0
        push 0
        lea eax, ss:[esp+0x5C]
        push eax
        push 0
        push ecx
        push esi
        push 3
        call public_63784b0
        add esp, 0x1C
        test eax, eax
        mov ebx, 1
        mov dword ptr ss : [esp+0x1C], ebx
        je public_636c4c8
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], 0
        fadd dword ptr ds : [public_63a5494]
        fmul dword ptr ds : [public_63a5668]
        fstp dword ptr ss : [esp+0x18]
        jmp public_636c5ef
        public_636c4c8 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        xor eax, eax
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov edi, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ecx, esi
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x5C], 0
        call public_636be20
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_636c61f
        xor edi, edi
        xor edx, edx
        test esi, esi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x50], edx
        jle public_636c5bd
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x2C]
        lea eax, ds:[ecx+0x10]
        sub edi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov ecx, eax
        mov dword ptr ss : [esp+0x48], edi
        jmp public_636c557
        public_636c553 : nop
        mov edi, dword ptr ss : [esp+0x48]
        public_636c557 : nop
        cmp byte ptr ds : [edi+ebx], 0
        je public_636c5a4
        cmp byte ptr ds : [ebx], 0
        jne public_636c5a4
        mov edi, dword ptr ds : [ecx-0x10]
        mov dword ptr ds : [eax-0x10], edi
        mov edi, dword ptr ds : [ecx-0xC]
        mov dword ptr ds : [eax-0xC], edi
        mov edi, dword ptr ds : [ecx-8]
        mov dword ptr ds : [eax-8], edi
        mov edi, dword ptr ds : [ecx-4]
        mov dword ptr ds : [eax-4], edi
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx+edx*4]
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ebx+edi*4], edx
        mov ebx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x50]
        inc edi
        mov dword ptr ss : [esp+0x24], edi
        add eax, 0x18
        jmp public_636c5a8
        public_636c5a4 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_636c5a8 : nop
        inc edx
        inc ebx
        add ecx, 0x18
        cmp edx, esi
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x34], ebx
        jl public_636c553
        mov ebx, dword ptr ss : [esp+0x1C]
        public_636c5bd : nop
        cmp esi, edi
        mov word ptr ss : [esp+0xE], di
        jne public_636c5e2
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x30], 0
        fadd dword ptr ds : [public_63a5494]
        fmul dword ptr ds : [public_63a5668]
        fstp dword ptr ss : [esp+0x18]
        public_636c5e2 : nop
        cmp edi, 3
        mov esi, edi
        je public_636c609
        jle public_636c6de
        public_636c5ef : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a5908]
        fnstsw ax
        test ah, 1
        je public_636c6de
        jmp public_636c3dd
        public_636c609 : nop
        lea eax, ss:[esp+0xC]
        push eax
        call public_636c9a0
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_636c6de
        public_636c61f : nop
        push 0x400
        lea ecx, ss:[esp+0x3C]
        call public_63522a0
        mov dword ptr ss : [esp+0x38], offset public_63a590c
        xor esi, esi
        cmp word ptr ss : [esp+0xE], si
        mov byte ptr ss : [esp+0x158], 2
        jbe public_636c671
        public_636c646 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+esi*4]
        push edi
        lea ecx, ss:[esp+0x3C]
        call public_636cfa0
        push eax
        push edi
        lea ecx, ss:[esp+0x40]
        call public_63523d0
        mov edx, dword ptr ss : [esp+0xE]
        inc esi
        and edx, 0xFFFF
        cmp esi, edx
        jl public_636c646
        public_636c671 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+8]
        movsx ecx, word ptr ds : [ebx+0xC]
        shr eax, 8
        shl eax, 4
        cdq 
        and edx, 0xF
        add eax, edx
        sar eax, 4
        sub eax, ecx
        dec eax
        test eax, eax
        jle public_636c6cd
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], eax
        public_636c698 : nop
        mov ecx, dword ptr ds : [ebx]
        mov esi, edi
        add esi, ecx
        add esi, ebx
        push esi
        lea ecx, ss:[esp+0x3C]
        call public_636cfa0
        push eax
        push esi
        lea ecx, ss:[esp+0x40]
        call public_6352580
        test eax, eax
        je public_636c6bf
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0xC], edx
        public_636c6bf : nop
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_636c698
        public_636c6cd : nop
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x158], 0
        call public_6377e50
        public_636c6de : nop
        push 0
        call public_6374be0
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_6378060
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0xC
        test eax, eax
        je public_636c708
        push eax
        call public_6343fb0
        add esp, 4
        public_636c708 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_636c719
        push eax
        call public_6343fb0
        add esp, 4
        public_636c719 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_636c72a
        push eax
        call public_6343fb0
        add esp, 4
        public_636c72a : nop
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        jne public_636c756
        push 1
        mov ecx, offset public_658c730
        call public_6392220
        test eax, eax
        je public_636c756
/*FIXUP push offset public_63ee804 @0x636c742*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee804
        push 1
/*FIXUP push offset public_658c730 @0x636c749*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658c730
        call public_6392250
        add esp, 0xC
        public_636c756 : nop
        push 1
        mov ecx, offset public_658c730
        call public_6392220
        test eax, eax
        je public_636c77a
/*FIXUP push offset public_63ee7e0 @0x636c766*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee7e0
        push 1
/*FIXUP push offset public_658c730 @0x636c76d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658c730
        call public_6392250
        add esp, 0xC
        public_636c77a : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        cmp eax, edx
        mov dword ptr ss : [esp+0x158], 0xFFFFFFFF
        je public_636c79e
        test eax, eax
        je public_636c79e
        push eax
        call public_6343fb0
        add esp, 4
        public_636c79e : nop
        mov ecx, dword ptr ss : [esp+0x150]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x636c260)
    }
}

#undef public_636c2af
#undef public_636c2b3
#undef public_636c303
#undef public_636c350
#undef public_636c37a
#undef public_636c391
#undef public_636c3dd
#undef public_636c408
#undef public_636c434
#undef public_636c458
#undef public_636c47f
#undef public_636c4c8
#undef public_636c553
#undef public_636c557
#undef public_636c5a4
#undef public_636c5a8
#undef public_636c5bd
#undef public_636c5e2
#undef public_636c5ef
#undef public_636c609
#undef public_636c61f
#undef public_636c646
#undef public_636c671
#undef public_636c698
#undef public_636c6bf
#undef public_636c6cd
#undef public_636c6de
#undef public_636c708
#undef public_636c719
#undef public_636c72a
#undef public_636c756
#undef public_636c77a
#undef public_636c79e
