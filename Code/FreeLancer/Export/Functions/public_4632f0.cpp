#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_462e30);
CLANG_FORWARD_PROC_SYMBOL(public_4632f0);
CLANG_FORWARD_PROC_SYMBOL(public_4683b0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46d600);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_JUMP_SYMBOL(public_5badd2);

#define public_463320 _public_463320
#define public_463333 _public_463333
#define public_463335 _public_463335
#define public_463340 _public_463340
#define public_46338a _public_46338a
#define public_46338f _public_46338f
#define public_4633a6 _public_4633a6
#define public_463418 _public_463418
#define public_46342b _public_46342b
#define public_463430 _public_463430
#define public_463550 _public_463550
#define public_46356f _public_46356f
#define public_463590 _public_463590
#define public_4635a3 _public_4635a3
#define public_4635b6 _public_4635b6
#define public_46360f _public_46360f

PROC_DECLARE(0x4632f0, internal_4632f0, public_4632f0);
extern "C" NAKED register_t __cdecl internal_4632f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov edx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_5badd2 @0x4632fc*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5badd2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        mov esi, dword ptr ds : [ebx+0x358]
        mov eax, dword ptr ds : [esi]
        push edi
        xor cl, cl
        lea esp, ss:[esp]
        public_463320 : nop
        cmp eax, esi
        je public_463340
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_463333
        cmp ecx, edx
        jne public_463333
        mov cl, 1
        jmp public_463335
        public_463333 : nop
        xor cl, cl
        public_463335 : nop
        test cl, cl
        mov eax, dword ptr ds : [eax]
        je public_463320
        jmp public_46360f
        public_463340 : nop
        test cl, cl
        jne public_46360f
        xor esi, esi
        push 1
        push edx
        mov word ptr ss : [esp+0x3C], si
        mov byte ptr ss : [esp+0x3E], 0
        mov byte ptr ss : [esp+0x3F], 0
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x40], edx
        call public_5416c0
        add esp, 8
        cmp eax, esi
        je public_4633a6
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, esi
        je public_46338a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_46338a
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_46338f
        public_46338a : nop
        call public_54bb00
        public_46338f : nop
        mov word ptr ss : [esp+0x4C], ax
        mov byte ptr ss : [esp+0x4E], 0
        mov byte ptr ss : [esp+0x4F], 0
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x34], edx
        public_4633a6 : nop
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [ebx+0x358]
        imul edx, 0x3E8
        mov dword ptr ss : [esp+0x30], edx
        lea ecx, ds:[ebx+0x354]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_46d600
        mov ecx, ebx
        call public_462e30
        mov al, byte ptr ds : [public_66d44c]
        test al, 1
        jne public_463418
        mov dl, al
        or dl, 1
        mov ecx, offset public_66d440
        mov byte ptr ds : [public_66d44c], dl
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_468bf0 @0x46340b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_463418 : nop
        mov ecx, dword ptr ds : [public_66da60]
        cmp ecx, esi
        je public_46342b
        call public_4683b0
        mov esi, eax
        jmp public_463430
        public_46342b : nop
        mov esi, offset public_66d440
        public_463430 : nop
        mov edi, dword ptr ds : [public_66da7c]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, edi
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+4]
        je public_463590
        mov ebp, dword ptr ds : [eax+0x10]
        test ebp, ebp
        je public_463590
        push 0x3EA8
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x50], 1
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x44], 0
        call public_45eeb0
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], edi
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ds : [public_5c62cc]
        add ebx, 0x378
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], eax
        mov ebx, 2
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x50], 3
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x44], edi
        call dword ptr ds : [public_5c62c8]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x50]
        call public_46bba0
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, edi
        je public_46356f
        mov edi, edi
        public_463550 : nop
        add eax, 8
        push eax
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, edi
        mov dword ptr ss : [esp+0x4C], eax
        jne public_463550
        public_46356f : nop
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_46360f
        mov esi, ecx
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        jmp public_46360f
        public_463590 : nop
        mov ebp, dword ptr ds : [public_66da60]
        test ebp, ebp
        je public_46360f
        mov eax, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_46360f
        public_4635a3 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_4635b6
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_4635a3
        jmp public_46360f
        public_4635b6 : nop
        mov esi, ecx
        call public_46bb50
        lea ecx, ss:[ebp+0xC]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_5947a0
        push 0
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], edi
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+8], eax
        public_46360f : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x4632f0)
    }
}

#undef public_463320
#undef public_463333
#undef public_463335
#undef public_463340
#undef public_46338a
#undef public_46338f
#undef public_4633a6
#undef public_463418
#undef public_46342b
#undef public_463430
#undef public_463550
#undef public_46356f
#undef public_463590
#undef public_4635a3
#undef public_4635b6
#undef public_46360f
