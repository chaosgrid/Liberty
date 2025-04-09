#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4d7b50);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);

#define public_4d7c03 _public_4d7c03
#define public_4d7ee2 _public_4d7ee2

PROC_DECLARE(0x4d7b50, internal_4d7b50, public_4d7b50);
extern "C" NAKED register_t __cdecl internal_4d7b50()
{
    __asm
    {
        sub esp, 0x188
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push 1
        push ebx
        push ebx
        push ebx
        mov esi, ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5d81e0 @0x4d7b7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d81e0
/*FIXUP push offset public_5cb68c @0x4d7b7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb68c
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0x3E343958
        mov dword ptr ss : [esp+0x64], 0xBF000000
        call public_5a0db0
        mov dword ptr ds : [esi+0x380], eax
        add eax, 0x80
        push eax
        lea ecx, ds:[esi+0x398]
        mov dword ptr ds : [esi+0x37C], 9
        call public_5a1340
        mov dword ptr ss : [esp+0x34], ebx
        lea ebp, ds:[esi+0x334]
        mov edi, offset public_612600
        public_4d7c03 : nop
        push ebx
        lea eax, ss:[esp+0x9C]
/*FIXUP push offset public_5d8430 @0x4d7c0b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8430
        push eax
        call dword ptr ds : [public_5c71ec]
        fld dword ptr ds : [edi-4]
        mov eax, dword ptr ds : [esi+0x348]
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi]
        add eax, ecx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+4]
        add eax, 0x28
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x10C]
        mov edx, dword ptr ds : [eax+0x104]
        push ecx
        push 0
        push edx
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4d7c63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
        push eax
        lea eax, ss:[esp+0xD0]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], 0x3C656042
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0
        call public_5a0c90
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp], eax
        lea ecx, ds:[eax+0x2D4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        push 0
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax]
        push 1
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x34]
        add edi, 0xC
        add ecx, 0x148
        inc ebx
        add ebp, 4
        cmp edi, offset public_612630
        mov dword ptr ss : [esp+0x34], ecx
        jl public_4d7c03
        lea eax, ss:[esp+0x1C]
        push eax
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x54]
        push ecx
        push 0
        lea edx, ss:[esp+0x44]
        push edx
/*FIXUP push offset public_5cb498 @0x4d7d05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb498
/*FIXUP push offset public_5cb680 @0x4d7d0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb680
        mov ecx, esi
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x3E958106
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call public_5a0db0
        push 0
        push 1
        mov dword ptr ds : [esi+0x384], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x384]
        add eax, 0x80
        push eax
        lea ecx, ds:[esi+0x3A4]
        call public_5a1340
        push 0x45
        push 0
        push 0xBF9
        push 0
        push 0
        push 1
        push 0
        lea ecx, ss:[esp+0x38]
        push ecx
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        push 0
/*FIXUP push offset public_5ced30 @0x4d7daa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push 0
/*FIXUP push offset public_5d8410 @0x4d7db1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8410
/*FIXUP push offset public_5d83f8 @0x4d7db6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d83f8
        mov ecx, esi
        mov dword ptr ss : [esp+0x58], 0x3C656042
        mov dword ptr ss : [esp+0x5C], 0x3C656042
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0x3E981062
        mov dword ptr ss : [esp+0x6C], 0
        call public_5a0c90
        push 0
        push 1
        mov dword ptr ds : [esi+0x38C], eax
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x38], 0x74
        mov dword ptr ss : [esp+0x3C], 0x76
        mov dword ptr ss : [esp+0x40], 0x79
        mov dword ptr ss : [esp+0x44], 0x7A
        mov dword ptr ss : [esp+0x48], 0x7B
        mov dword ptr ss : [esp+0x4C], 0x77
        mov dword ptr ss : [esp+0x50], 0x78
        mov dword ptr ss : [esp+0x54], 0x7E
        mov dword ptr ss : [esp+0x58], 0x7F
        mov dword ptr ss : [esp+0x5C], 0x80
        mov dword ptr ss : [esp+0x60], 0xC6
        mov dword ptr ss : [esp+0x64], 0x45
        mov dword ptr ss : [esp+0x68], 0x81
        mov dword ptr ss : [esp+0x6C], 0x82
        mov dword ptr ss : [esp+0x70], 0x83
        mov dword ptr ss : [esp+0x74], 0x84
        mov dword ptr ss : [esp+0x78], 0x86
        mov dword ptr ss : [esp+0x7C], 0x85
        mov dword ptr ss : [esp+0x80], 0x87
        mov dword ptr ss : [esp+0x84], 0x88
        mov dword ptr ss : [esp+0x88], 0x43
        mov dword ptr ss : [esp+0x8C], 0x44
        mov dword ptr ss : [esp+0x90], 4
        mov dword ptr ss : [esp+0x94], 0xF
        xor edi, edi
        lea ebx, ds:[esi+0x32C]
        public_4d7ee2 : nop
        mov eax, dword ptr ss : [esp+edi*4+0x38]
        push eax
        mov ecx, ebx
        call public_5760d0
        inc edi
        cmp edi, 0x18
        jb public_4d7ee2
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x24], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x1A0]
        mov edx, dword ptr ss : [esp+0x19C]
        push ecx
        push edx
        mov ecx, esi
        call public_4b5060
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x188
        ret 8
        UNREACHABLE_TRAP(0x4d7b50)
    }
}

#undef public_4d7c03
#undef public_4d7ee2
