#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_562930);
CLANG_FORWARD_PROC_SYMBOL(public_562a60);
CLANG_FORWARD_PROC_SYMBOL(public_5630f0);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a0db0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1e1b);

#define public_563200 _public_563200
#define public_5634e0 _public_5634e0
#define public_563516 _public_563516

PROC_DECLARE(0x5631c0, internal_5631c0, public_5631c0);
extern "C" NAKED register_t __cdecl internal_5631c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1e1b @0x5631c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1e1b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_4b5060
        test al, al
        jne public_563200
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        public_563200 : nop
        mov edx, dword ptr ds : [esi]
        push ebp
        push edi
        push ebx
/*FIXUP push offset public_5d21b0 @0x563205*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d21b0
        mov ecx, esi
        mov dword ptr ds : [esi+0xB0], 0xBF800000
        call dword ptr ds : [edx+0x98]
        fld dword ptr ds : [esi+0xB0]
        fadd dword ptr ds : [public_5c99c8]
        mov eax, dword ptr ds : [esi+0xAC]
        push ecx
        mov ecx, dword ptr ds : [esi+0xA8]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call public_422b80
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        push ebx
        push ebx
        push 1
        push ebx
        push 1
        push 1
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x3C]
        push eax
        push ebx
        lea ecx, ss:[esp+0x74]
        push ecx
/*FIXUP push offset public_5ce934 @0x563290*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce934
/*FIXUP push offset public_5e21c8 @0x563295*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21c8
        mov ecx, esi
        call public_5a0db0
        mov eax, dword ptr ss : [esp+0x60]
        push eax
        lea ecx, ds:[esi+0x378]
        mov dword ptr ds : [esi+0x374], eax
        call public_562930
        push ebx
        push esi
/*FIXUP push offset public_5cf24c @0x5632b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf24c
/*FIXUP push offset public_5e21bc @0x5632be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21bc
        call public_59db20
        mov dword ptr ds : [esi+0x334], eax
        fld dword ptr ds : [public_5e2088]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [public_5e208c]
        add esp, 0x10
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xB0]
        lea edx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        push edx
        fadd dword ptr ds : [esi+0xAC]
        mov ecx, eax
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0xA8]
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        call public_579c40
        mov eax, dword ptr ds : [public_5e2094]
        mov ecx, dword ptr ds : [public_5e2090]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_579cc0
        mov dl, byte ptr ss : [esp+0x5C]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call public_42a7e0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x60079
        mov dword ptr ss : [esp+0x5C], ebx
        call public_57da40
        mov ecx, dword ptr ds : [esi+0x334]
        add esp, 8
        call public_57b370
        mov edi, dword ptr ds : [public_5c62b8]
        push 0x9CA4
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x334]
        push eax
        mov byte ptr ss : [esp+0x58], 1
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62b4]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x54], 0
        call ebp
        push 0x1DF5
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0x334]
        push eax
        mov byte ptr ss : [esp+0x58], 2
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x54], 0
        call ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_57b3e0
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_5b7e1d
        add esp, 4
        push ebx
        push ebx
        push 0x409
        push ebx
        push ebx
        push ebx
        push ebx
        lea edx, ss:[esp+0x38]
        push edx
        push ebx
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x44], 0x3CA3D70A
        mov dword ptr ss : [esp+0x48], 0x3CA3D70A
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x38], 0x3E666666
        mov dword ptr ss : [esp+0x3C], 0x3E333333
        mov dword ptr ss : [esp+0x40], 0xBF800000
        push ebx
/*FIXUP push offset public_5ced30 @0x563455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5cf1f4 @0x56345b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf1f4
/*FIXUP push offset public_5e21ac @0x563460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21ac
        mov ecx, esi
        call public_5a0c90
        push ebx
        push ebx
        push 0x411
        push 0xBDB
        push ebx
        push ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
/*FIXUP push offset public_5ced30 @0x563484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
/*FIXUP push offset public_5e21a0 @0x563489*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21a0
        mov ecx, esi
        mov dword ptr ds : [esi+0x330], eax
        mov dword ptr ss : [esp+0x50], 0x3D4CCCCD
        mov dword ptr ss : [esp+0x54], 0x3C8B4396
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0xBE2E147B
        mov dword ptr ss : [esp+0x64], 0xBF800000
        call public_5a1950
        lea ebx, ds:[esi+0x338]
        mov dword ptr ds : [esi+0x32C], eax
        mov edi, offset public_614828
        mov ebp, ebx
        mov edi, edi
        public_5634e0 : nop
        push edi
        push esi
        mov ecx, ebp
        call public_562a60
        add edi, 0x20
        add ebp, 0xC
        cmp edi, offset public_6148c8
        jl public_5634e0
        mov ecx, esi
        call public_5630f0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        pop edi
        pop ebp
        je public_563516
        call public_57c750
        public_563516 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x5631c0)
    }
}

#undef public_563200
#undef public_5634e0
#undef public_563516
