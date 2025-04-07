#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6272a40);
CLANG_FORWARD_PROC_SYMBOL(public_6273bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62bee20);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_632f440);
CLANG_FORWARD_PROC_SYMBOL(public_632f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_632fa30);
CLANG_FORWARD_PROC_SYMBOL(public_6330630);
CLANG_FORWARD_PROC_SYMBOL(public_6330990);
CLANG_FORWARD_PROC_SYMBOL(public_6331cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6332050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);
CLANG_FORWARD_JUMP_SYMBOL(public_6397540);

#define public_6330388 _public_6330388
#define public_63303b0 _public_63303b0
#define public_63303cc _public_63303cc
#define public_6330410 _public_6330410
#define public_6330427 _public_6330427
#define public_6330472 _public_6330472
#define public_6330533 _public_6330533
#define public_6330554 _public_6330554
#define public_633057b _public_633057b
#define public_63305a2 _public_63305a2
#define public_63305ce _public_63305ce
#define public_63305e0 _public_63305e0
#define public_6330603 _public_6330603

PROC_DECLARE(0x6330340, internal_6330340, public_6330340);
extern "C" NAKED register_t __cdecl internal_6330340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397540 @0x6330342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397540
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        mov al, byte ptr ss : [esp+0x6C]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov eax, dword ptr ss : [esp+0x7C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x70], ebx
        jbe public_6330427
        jge public_6330388
        xor eax, eax
        public_6330388 : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        mov ebx, edi
        mov dword ptr ss : [esp+0x14], eax
        je public_63303cc
        nop 
        lea esp, ss:[esp]
        public_63303b0 : nop
        push esi
        push ebx
        call public_62bee20
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 0x14
        add esp, 8
        add ebx, 0x14
        cmp esi, eax
        jne public_63303b0
        mov esi, dword ptr ss : [esp+0x1C]
        public_63303cc : nop
        push esi
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x80]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], eax
        call public_6272a40
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ss : [esp+0x7C]
        xor ebx, ebx
        cmp eax, ebx
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x1C], edi
        jbe public_6330427
        mov esi, dword ptr ss : [esp+0x78]
        mov edi, eax
        lea ecx, ds:[ecx]
        public_6330410 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push 1
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6331cf0
        add esi, 0x14
        dec edi
        jne public_6330410
        public_6330427 : nop
        cmp dword ptr ss : [ebp+4], ebx
        jne public_6330603
        mov al, byte ptr ds : [public_658e738]
        test al, 1
        jne public_6330472
/*FIXUP push offset _public_6261260 @0x6330439*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6261260
        push 8
        mov cl, al
        push 0x14
        or cl, 1
/*FIXUP push offset public_658e75c @0x6330447*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e75c
        mov byte ptr ds : [public_658e738], cl
        call public_6273bc0
        xor eax, eax
        mov ecx, 0x2F
        mov edi, offset public_658e740
/*FIXUP push offset _public_62a8920 @0x6330463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        rep stosd
        call public_6391f9e
        add esp, 4
        public_6330472 : nop
        mov ecx, dword ptr ds : [public_640a73c]
/*FIXUP push offset public_658e740 @0x6330478*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e740
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        mov ecx, offset public_640a728
        call public_6332050
        mov eax, dword ptr ds : [public_640a73c]
        mov esi, dword ptr ds : [eax+4]
        add esi, 8
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [ebp+4], esi
        call public_6272a40
        cmp eax, 8
        jbe public_63305ce
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6315b10
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x74], 1
        call public_6315b10
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x74], 2
        call public_6315b10
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x84], 3
        call public_6330630
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        lea ecx, ss:[esp+0x28]
        xor edi, edi
        call public_6272a40
        test eax, eax
        jbe public_6330554
        public_6330533 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ds:[ebx+ecx]
        push edx
        push esi
        mov ecx, ebp
        call public_632fa30
        lea ecx, ss:[esp+0x28]
        inc edi
        add ebx, 0x14
        call public_6272a40
        cmp edi, eax
        jb public_6330533
        public_6330554 : nop
        lea ecx, ss:[esp+0x48]
        call public_6272a40
        test eax, eax
        jbe public_633057b
        mov ecx, offset public_640a728
        call public_632f9b0
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        mov ecx, ebp
        mov dword ptr ds : [esi+0x14], eax
        call public_6330990
        public_633057b : nop
        lea ecx, ss:[esp+0x38]
        call public_6272a40
        test eax, eax
        jbe public_63305a2
        mov ecx, offset public_640a728
        call public_632f9b0
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        mov ecx, ebp
        mov dword ptr ds : [esi+0x18], eax
        call public_6330990
        public_63305a2 : nop
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x70], 2
        call public_6269110
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x70], 1
        call public_6269110
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x70], 0
        call public_6269110
        jmp public_6330603
        public_63305ce : nop
        lea ecx, ss:[esp+0x18]
        call public_6272a40
        test eax, eax
        jbe public_6330603
        xor edi, edi
        lea ecx, ds:[ecx]
        public_63305e0 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edi+eax]
        push ecx
        mov ecx, esi
        call public_632f440
        inc dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x18]
        inc ebx
        add edi, 0x14
        call public_6272a40
        cmp ebx, eax
        jb public_63305e0
        public_6330603 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_6269110
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 8
        UNREACHABLE_TRAP(0x6330340)
    }
}

#undef public_6330388
#undef public_63303b0
#undef public_63303cc
#undef public_6330410
#undef public_6330427
#undef public_6330472
#undef public_6330533
#undef public_6330554
#undef public_633057b
#undef public_63305a2
#undef public_63305ce
#undef public_63305e0
#undef public_6330603
