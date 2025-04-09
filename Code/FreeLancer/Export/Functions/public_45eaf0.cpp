#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_45eed0);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_579870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba3e4);

#define public_45eb40 _public_45eb40
#define public_45eb60 _public_45eb60
#define public_45eb7d _public_45eb7d
#define public_45eb9a _public_45eb9a
#define public_45ebb7 _public_45ebb7
#define public_45ebe6 _public_45ebe6
#define public_45ebea _public_45ebea
#define public_45ebf2 _public_45ebf2
#define public_45ebf7 _public_45ebf7
#define public_45ed30 _public_45ed30
#define public_45ed51 _public_45ed51
#define public_45edc6 _public_45edc6
#define public_45edf0 _public_45edf0
#define public_45ee05 _public_45ee05
#define public_45ee45 _public_45ee45
#define public_45ee86 _public_45ee86

PROC_DECLARE(0x45eaf0, internal_45eaf0, public_45eaf0);
extern "C" NAKED register_t __cdecl internal_45eaf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba3e4 @0x45eaf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba3e4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_66da40]
        xor ebp, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], offset public_5cef90
        jne public_45eb40
        mov dword ptr ss : [esp+0x58], 0xD801
        lea ebp, ds:[edi+0x56C]
/*FIXUP push offset public_611564 @0x45eb36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_611564
        jmp public_45ebf7
        public_45eb40 : nop
        cmp eax, dword ptr ds : [public_66da3c]
        jne public_45eb60
        mov dword ptr ss : [esp+0x58], 0x1D9D
        lea ebp, ds:[edi+0x578]
/*FIXUP push offset public_611568 @0x45eb56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_611568
        jmp public_45ebf7
        public_45eb60 : nop
        cmp eax, dword ptr ds : [public_66da38]
        jne public_45eb7d
        mov dword ptr ss : [esp+0x58], 0xBA28
        lea ebp, ds:[edi+0x584]
/*FIXUP push offset public_611570 @0x45eb76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_611570
        jmp public_45ebf7
        public_45eb7d : nop
        cmp eax, dword ptr ds : [public_66da44]
        jne public_45eb9a
        mov dword ptr ss : [esp+0x58], 0xD681
        lea ebp, ds:[edi+0x59C]
/*FIXUP push offset public_611560 @0x45eb93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_611560
        jmp public_45ebf7
        public_45eb9a : nop
        cmp eax, dword ptr ds : [public_66da48]
        jne public_45ebb7
        mov dword ptr ss : [esp+0x58], 0x73F7
        lea ebp, ds:[edi+0x590]
/*FIXUP push offset public_611574 @0x45ebb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_611574
        jmp public_45ebf7
        public_45ebb7 : nop
        mov esi, dword ptr ds : [edi+0x530]
        test esi, esi
        mov dword ptr ss : [esp+0x58], 0x8283
        je public_45ebea
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_46cd50
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_45ebe6
        mov ebp, dword ptr ds : [eax+0x10]
        jmp public_45ebf2
        public_45ebe6 : nop
        xor ebp, ebp
        jmp public_45ebf2
        public_45ebea : nop
        mov dword ptr ss : [esp+0x14], offset public_5cef84
/*FIXUP public_45ebf2 : nop
        push offset public_61156c @0x45ebf2*/
  FIXUP public_45ebf2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_61156c
        public_45ebf7 : nop
        mov ecx, edi
        call public_579870
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edi+0x568], ecx
        mov eax, dword ptr ds : [edi+0x4E0]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x4DC]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_46c860
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x5C], 1
        call public_46c800
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x50], 0
        call public_45eeb0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ss : [esp+0x14]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 2
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x5C], 3
        call public_46c800
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x50], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        test ebp, ebp
        je public_45ed51
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_46baf0
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x14]
        call public_46bba0
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_45eed0
        mov ecx, eax
        call public_46baf0
        mov ebp, dword ptr ds : [eax]
        mov ecx, edi
        call public_45eed0
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_45ed51
        lea esp, ss:[esp]
        public_45ed30 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 8
        push eax
        push ebp
        lea eax, ss:[esp+0x2C]
        push eax
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_45ed30
        public_45ed51 : nop
        mov edx, dword ptr ds : [public_61155c]
        push 0xFFFFFFFF
        push edx
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 4
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        push ebp
        mov ecx, esi
        mov byte ptr ss : [esp+0x58], 5
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x50], bl
        je public_45edc6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_45edc6 : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov ebp, dword ptr ds : [edi+0x500]
        mov esi, dword ptr ss : [ebp]
        add edi, 0x4FC
        cmp esi, ebp
        je public_45ee05
        nop 
        lea esp, ss:[esp]
        public_45edf0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_46d680
        cmp esi, ebp
        jne public_45edf0
        public_45ee05 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 6
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        mov byte ptr ss : [esp+0x54], 7
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_45ee45
        mov ebp, eax
        public_45ee45 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        pop edi
        pop esi
        pop ebp
        mov byte ptr ss : [esp+0x44], bl
        pop ebx
        je public_45ee86
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+4], 0
        public_45ee86 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x45eaf0)
    }
}

#undef public_45eb40
#undef public_45eb60
#undef public_45eb7d
#undef public_45eb9a
#undef public_45ebb7
#undef public_45ebe6
#undef public_45ebea
#undef public_45ebf2
#undef public_45ebf7
#undef public_45ed30
#undef public_45ed51
#undef public_45edc6
#undef public_45edf0
#undef public_45ee05
#undef public_45ee45
#undef public_45ee86
