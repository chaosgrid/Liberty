#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_430b00);
CLANG_FORWARD_PROC_SYMBOL(public_4311d0);
CLANG_FORWARD_PROC_SYMBOL(public_4312e0);
CLANG_FORWARD_PROC_SYMBOL(public_431690);
CLANG_FORWARD_PROC_SYMBOL(public_4316c0);
CLANG_FORWARD_PROC_SYMBOL(public_431910);
CLANG_FORWARD_PROC_SYMBOL(public_4319d0);
CLANG_FORWARD_PROC_SYMBOL(public_431a30);
CLANG_FORWARD_PROC_SYMBOL(public_431ba0);
CLANG_FORWARD_PROC_SYMBOL(public_431cd0);
CLANG_FORWARD_PROC_SYMBOL(public_431d90);
CLANG_FORWARD_PROC_SYMBOL(public_431ed0);
CLANG_FORWARD_PROC_SYMBOL(public_431f90);
CLANG_FORWARD_PROC_SYMBOL(public_4320b0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43bca0);
CLANG_FORWARD_PROC_SYMBOL(public_5a67c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8f85);

#define public_430b80 _public_430b80
#define public_430c50 _public_430c50
#define public_430c96 _public_430c96
#define public_430cc6 _public_430cc6
#define public_430ce8 _public_430ce8
#define public_430d60 _public_430d60
#define public_430da9 _public_430da9
#define public_430dbe _public_430dbe
#define public_430e2d _public_430e2d
#define public_430e68 _public_430e68
#define public_430e6a _public_430e6a
#define public_430ebc _public_430ebc
#define public_430ee4 _public_430ee4
#define public_430f20 _public_430f20
#define public_430f64 _public_430f64
#define public_430f9c _public_430f9c
#define public_430fbf _public_430fbf
#define public_430fdf _public_430fdf
#define public_431020 _public_431020
#define public_43105c _public_43105c
#define public_431071 _public_431071
#define public_4310b6 _public_4310b6
#define public_431118 _public_431118
#define public_43112e _public_43112e

PROC_DECLARE(0x430b00, internal_430b00, public_430b00);
extern "C" NAKED register_t __cdecl internal_430b00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8f85 @0x430b08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8f85
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x170C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ds : [public_667e28]
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x1B0]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c605c]
        mov ecx, dword ptr ss : [esp+0x1728]
        xor edi, edi
        push edi
        push ecx
        lea ecx, ss:[esp+0x1B8]
        mov dword ptr ss : [esp+0x1728], edi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_43112e
        lea ecx, ss:[esp+0x1B0]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_43112e
        mov ebx, dword ptr ds : [public_5c6038]
        push ebp
        nop 
        lea esp, ss:[esp]
        public_430b80 : nop
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5cad30 @0x430b86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cad30
        lea ecx, ss:[esp+0x1B8]
        call esi
        test al, al
        je public_430ebc
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x58], offset public_5cad10
        call dword ptr ds : [public_5c6030]
        lea ecx, ss:[esp+0x60]
        call dword ptr ds : [public_5c69a0]
        lea edx, ss:[esp+0x16]
        push edx
        xor ebp, ebp
        push ebp
        lea eax, ss:[esp+0x1F]
        push eax
        lea ecx, ss:[esp+0x70]
        call public_431f90
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x1728], 1
        call public_43bca0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x1728], 2
        call dword ptr ds : [public_5c6f98]
        lea eax, ss:[esp+0x15]
        push eax
        lea ecx, ss:[esp+0x16]
        push ecx
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x172C], 3
        call public_5a67c0
        mov dword ptr ss : [esp+0x58], offset public_5cacec
        lea ecx, ss:[esp+0x1B4]
        mov byte ptr ss : [esp+0x1724], 4
        mov dword ptr ss : [esp+0xB0], ebp
        mov byte ptr ss : [esp+0xB4], 0
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_430dbe
        public_430c50 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c866c @0x430c56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x1B8]
        call esi
        test al, al
        lea ecx, ss:[esp+0x1B4]
        je public_430c96
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        push esi
        call dword ptr ds : [public_5c6020]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x68], eax
        call dword ptr ds : [public_5c6028]
        add esp, 0xC
        mov dword ptr ss : [esp+0x60], eax
        jmp public_430da9
/*FIXUP public_430c96 : nop
        push offset public_5cace0 @0x430c96*/
  FIXUP public_430c96 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cace0
        call esi
        test al, al
        lea ecx, ss:[esp+0x1B4]
        je public_430ce8
        call dword ptr ds : [public_5c6698]
        cmp eax, ebp
        jne public_430cc6
        mov dword ptr ss : [esp+0xB0], ebp
        mov byte ptr ss : [esp+0xB4], 0
        jmp public_430da9
        public_430cc6 : nop
        push eax
        lea edx, ss:[esp+0xB8]
        push 0x80
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0xB0], eax
        jmp public_430da9
/*FIXUP public_430ce8 : nop
        push offset public_5cacd8 @0x430ce8*/
  FIXUP public_430ce8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cacd8
        call esi
        test al, al
        je public_430d60
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x12]
        push ebp
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x4C], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c7088]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x1728], 5
        call public_431a30
        push 1
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x1728], 4
        call dword ptr ds : [public_5c7084]
        jmp public_430da9
        lea esp, ss:[esp]
        public_430d60 : nop
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_5c6044]
        lea ecx, ss:[esp+0x1B4]
        mov esi, eax
        mov edi, 0x100002
        call dword ptr ds : [public_5c60b8]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push esi
        push 0x203
/*FIXUP push offset public_5cacac @0x430d8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cacac
/*FIXUP push offset public_5cac70 @0x430d90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cac70
        push edi
        call dword ptr ds : [edx]
        add esp, 0x18
/*FIXUP push offset public_5c865c @0x430d9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x1B8]
        call ebx
        public_430da9 : nop
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_430c50
        public_430dbe : nop
        cmp dword ptr ss : [esp+0xB0], ebp
        jne public_430e2d
        mov eax, dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x150]
        mov dword ptr ss : [esp+0x14C], eax
        call public_431d90
        lea edx, ss:[esp+0x148]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, offset public_667e18
        mov byte ptr ss : [esp+0x172C], 6
        call public_431cd0
        lea ecx, ss:[esp+0x14C]
        mov byte ptr ss : [esp+0x1724], 4
        call public_4316c0
        cmp byte ptr ss : [esp+0x44], 1
        jne public_430e68
        mov ecx, dword ptr ss : [esp+0x40]
        lea edi, ds:[ecx+0x10]
        mov ecx, edi
        call public_4312e0
        jmp public_430e6a
        public_430e2d : nop
        lea edx, ss:[esp+0xB4]
        push edx
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, offset public_667e18
        call public_432240
        mov eax, dword ptr ds : [public_667e1c]
        mov ecx, dword ptr ss : [esp+0x3C]
        cmp ecx, eax
        je public_430e68
        lea edi, ds:[ecx+0x10]
        jmp public_430e6a
        public_430e68 : nop
        xor edi, edi
        public_430e6a : nop
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x1724], 9
        call public_431ba0
        push 1
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x1728], 8
        call dword ptr ds : [public_5c7084]
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x1724], 7
        call public_4319d0
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x1724], 0
        call public_431910
        jmp public_431118
/*FIXUP public_430ebc : nop
        push offset public_5ca570 @0x430ebc*/
  FIXUP public_430ebc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca570
        lea ecx, ss:[esp+0x1B8]
        call esi
        test al, al
        jne public_430ee4
/*FIXUP push offset public_5cac64 @0x430ece*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cac64
        lea ecx, ss:[esp+0x1B8]
        call esi
        test al, al
        je public_431118
        public_430ee4 : nop
        test edi, edi
        jne public_430f20
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cac38 @0x430eee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cac38
        push 0x21F
/*FIXUP push offset public_5cacac @0x430ef8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cacac
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x430f02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
/*FIXUP push offset public_5c865c @0x430f0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x1B8]
        call ebx
        jmp public_431118
        public_430f20 : nop
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6030]
        lea ecx, ss:[esp+0x1B4]
        mov dword ptr ss : [esp+0x20], offset public_5cabfc
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x31], 0
        mov word ptr ss : [esp+0x32], 0
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_431071
        public_430f64 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c99cc @0x430f6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c99cc
        lea ecx, ss:[esp+0x1B8]
        call esi
        test al, al
        lea ecx, ss:[esp+0x1B4]
        je public_430f9c
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [edx]
        jmp public_43105c
/*FIXUP public_430f9c : nop
        push offset public_5cabec @0x430f9c*/
  FIXUP public_430f9c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabec
        call esi
        test al, al
        lea ecx, ss:[esp+0x1B4]
        je public_430fbf
        push 0
        call dword ptr ds : [public_5c6d00]
        mov byte ptr ss : [esp+0x30], al
        jmp public_43105c
/*FIXUP public_430fbf : nop
        push offset public_5c8ab4 @0x430fbf*/
  FIXUP public_430fbf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ab4
        call esi
        test al, al
        lea ecx, ss:[esp+0x1B4]
        je public_430fdf
        push 0
        call dword ptr ds : [public_5c6d00]
        mov byte ptr ss : [esp+0x31], al
        jmp public_43105c
/*FIXUP public_430fdf : nop
        push offset public_5cabe0 @0x430fdf*/
  FIXUP public_430fdf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabe0
        call esi
        test al, al
        jne public_43105c
/*FIXUP push offset public_5cabdc @0x430fea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cabdc
        lea ecx, ss:[esp+0x1B8]
        call esi
        test al, al
        lea ecx, ss:[esp+0x1B4]
        je public_431020
        push 0
        call dword ptr ds : [public_5c6024]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        jmp public_43105c
        nop 
        lea esp, ss:[esp]
        public_431020 : nop
        mov esi, 0x100002
        call dword ptr ds : [public_5c60b8]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x249
/*FIXUP push offset public_5cacac @0x43103e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cacac
/*FIXUP push offset public_5cab98 @0x431043*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab98
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
/*FIXUP push offset public_5c865c @0x43104e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x1B8]
        call ebx
        public_43105c : nop
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_430f64
        public_431071 : nop
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6040]
        test al, al
        je public_4310b6
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov esi, 0x100001
        call dword ptr ds : [edx+0x10]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x250
/*FIXUP push offset public_5cacac @0x431096*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cacac
/*FIXUP push offset public_5cab54 @0x43109b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cab54
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
/*FIXUP push offset public_5c865c @0x4310a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x1B8]
        call ebx
        jmp public_431118
        public_4310b6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ds : [edi+0x10]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x20], ecx
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, esi
        call public_432240
        cmp dword ptr ss : [esp+0x34], ebp
        jne public_431118
        lea ecx, ss:[esp+0x134]
        call public_4311d0
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1A4]
        call public_4320b0
        push eax
        lea edx, ss:[esp+0xAC]
        push edx
        mov ecx, esi
        call public_431ed0
        mov eax, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[eax+0x10]
        call public_431690
        public_431118 : nop
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_430b80
        pop ebp
        public_43112e : nop
        mov eax, dword ptr ds : [public_667e28]
        sub eax, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov ebx, 0xA
        lea edx, ss:[esp+0x15D8]
        mov dword ptr ss : [esp+0x1720], ebx
        mov dword ptr ss : [esp+0x14], edx
        lea ecx, ss:[esp+0x15D8]
        mov byte ptr ss : [esp+0x1720], 0xB
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x15DC]
        mov byte ptr ss : [esp+0x1724], bl
        call dword ptr ds : [public_5c7084]
        lea ecx, ss:[esp+0x1B0]
        mov dword ptr ss : [esp+0x1720], 0xC
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x1B4]
        mov dword ptr ss : [esp+0x1724], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x1718]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1718
        ret 
        UNREACHABLE_TRAP(0x430b00)
    }
}

#undef public_430b80
#undef public_430c50
#undef public_430c96
#undef public_430cc6
#undef public_430ce8
#undef public_430d60
#undef public_430da9
#undef public_430dbe
#undef public_430e2d
#undef public_430e68
#undef public_430e6a
#undef public_430ebc
#undef public_430ee4
#undef public_430f20
#undef public_430f64
#undef public_430f9c
#undef public_430fbf
#undef public_430fdf
#undef public_431020
#undef public_43105c
#undef public_431071
#undef public_4310b6
#undef public_431118
#undef public_43112e
