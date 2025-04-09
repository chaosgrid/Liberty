#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d42e0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4340);
CLANG_FORWARD_PROC_SYMBOL(public_4d4710);
CLANG_FORWARD_PROC_SYMBOL(public_4d47f0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4820);
CLANG_FORWARD_PROC_SYMBOL(public_4d4970);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdf91);

#define public_4d43c7 _public_4d43c7
#define public_4d43f9 _public_4d43f9
#define public_4d4410 _public_4d4410
#define public_4d4450 _public_4d4450
#define public_4d4483 _public_4d4483
#define public_4d4486 _public_4d4486
#define public_4d448a _public_4d448a
#define public_4d449e _public_4d449e
#define public_4d44b4 _public_4d44b4
#define public_4d44dc _public_4d44dc
#define public_4d4520 _public_4d4520
#define public_4d4553 _public_4d4553
#define public_4d4559 _public_4d4559
#define public_4d455d _public_4d455d
#define public_4d4575 _public_4d4575
#define public_4d4599 _public_4d4599
#define public_4d45b7 _public_4d45b7
#define public_4d45d0 _public_4d45d0
#define public_4d45de _public_4d45de
#define public_4d460f _public_4d460f

PROC_DECLARE(0x4d4340, internal_4d4340, public_4d4340);
extern "C" NAKED register_t __cdecl internal_4d4340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdf91 @0x4d4342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdf91
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE8
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+8], 2
        mov dword ptr ss : [esp+0x24], ebp
        jb public_4d460f
        mov al, byte ptr ss : [ebp]
        push ebx
        push esi
        push 0x24
        mov byte ptr ss : [esp+0x10], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
/*FIXUP push offset _public_4d42e0 @0x4d438e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d42e0
/*FIXUP push offset _public_4d4710 @0x4d4393*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d4710
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x110], ebx
        call public_5b7fba
        cmp dword ptr ss : [ebp+8], ebx
        mov byte ptr ss : [esp+0xFC], 1
        mov dword ptr ss : [esp+0x1C], ebx
        je public_4d45de
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        public_4d43c7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edx]
        cmp edx, ecx
        je public_4d43f9
        mov esi, dword ptr ds : [ecx]
        cmp edx, esi
        je public_4d43f9
        push esi
        push ecx
        push ebp
        push edx
        lea ecx, ss:[esp+0x20]
        call public_4d4970
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+8]
        inc eax
        dec ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [ebp+8], ecx
        public_4d43f9 : nop
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], edi
        jbe public_4d4599
        lea esi, ss:[esp+0x3C]
        nop 
        lea esp, ss:[esp]
        public_4d4410 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_4d44dc
        lea ecx, ds:[esi-4]
        lea edx, ss:[esp+0x10]
        cmp edx, ecx
        je public_4d44b4
        mov ebx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_53e430
        cmp ebp, ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], edx
        je public_4d448a
        lea esp, ss:[esp]
        public_4d4450 : nop
        cmp ecx, edx
        je public_4d449e
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ss : [ebp+0x14]
        fnstsw ax
        test ah, 5
        jp public_4d4483
        mov edi, dword ptr ds : [ecx]
        push edi
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        lea ecx, ds:[esi-4]
        call public_4d4970
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_4d4486
        public_4d4483 : nop
        mov ebp, dword ptr ss : [ebp]
        public_4d4486 : nop
        cmp ebp, ebx
        jne public_4d4450
        public_4d448a : nop
        cmp ecx, edx
        je public_4d449e
        push edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        lea ecx, ds:[esi-4]
        call public_4d4970
        public_4d449e : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [esi+4], ecx
        xor eax, eax
        public_4d44b4 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        inc edi
        mov eax, ecx
        add esi, 0xC
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x2C], edi
        jb public_4d4410
        public_4d44dc : nop
        cmp edi, 0xF
        jne public_4d4599
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_53e430
        mov ebx, dword ptr ss : [esp+0xF0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_53e430
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, ebx
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        je public_4d455d
        nop 
        lea esp, ss:[esp]
        public_4d4520 : nop
        cmp ecx, ebp
        je public_4d4575
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ds : [edx+0x14]
        fnstsw ax
        test ah, 5
        jp public_4d4553
        mov esi, dword ptr ds : [ecx]
        push esi
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        push edx
        lea ecx, ss:[esp+0xFC]
        call public_4d4970
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_4d4559
        public_4d4553 : nop
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], edx
        public_4d4559 : nop
        cmp edx, ebx
        jne public_4d4520
        public_4d455d : nop
        cmp ecx, ebp
        je public_4d4575
        push ebp
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0xFC]
        call public_4d4970
        public_4d4575 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF4]
        mov ebp, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ss : [esp+0xF4], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jmp public_4d45b7
        public_4d4599 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[edi+edi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x3C]
        call public_4d47f0
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x18]
        jne public_4d45b7
        inc ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_4d45b7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        jne public_4d43c7
        test ebx, ebx
        pop edi
        jbe public_4d45de
        lea edx, ds:[ebx+ebx*2]
        lea esi, ss:[esp+edx*4+0x34]
        mov edi, edi
        public_4d45d0 : nop
        sub esi, 0xC
        push esi
        mov ecx, ebp
        call public_4d4820
        dec ebx
        jne public_4d45d0
/*FIXUP public_4d45de : nop
        push offset _public_4d42e0 @0x4d45de*/
  FIXUP public_4d45de : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d42e0
        push 0x10
        push 0xC
        lea eax, ss:[esp+0x40]
        push eax
        mov byte ptr ss : [esp+0x10C], 0
        call public_5b7ec6
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xFC], 0xFFFFFFFF
        call public_4d42e0
        pop esi
        pop ebx
        public_4d460f : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x4d4340)
    }
}

#undef public_4d43c7
#undef public_4d43f9
#undef public_4d4410
#undef public_4d4450
#undef public_4d4483
#undef public_4d4486
#undef public_4d448a
#undef public_4d449e
#undef public_4d44b4
#undef public_4d44dc
#undef public_4d4520
#undef public_4d4553
#undef public_4d4559
#undef public_4d455d
#undef public_4d4575
#undef public_4d4599
#undef public_4d45b7
#undef public_4d45d0
#undef public_4d45de
#undef public_4d460f
