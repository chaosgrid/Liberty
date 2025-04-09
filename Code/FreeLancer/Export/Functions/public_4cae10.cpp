#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_428db0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4cae10);
CLANG_FORWARD_PROC_SYMBOL(public_501c60);
CLANG_FORWARD_PROC_SYMBOL(public_501f80);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_4cae71 _public_4cae71
#define public_4cae87 _public_4cae87
#define public_4caea5 _public_4caea5
#define public_4caeaf _public_4caeaf
#define public_4caef3 _public_4caef3
#define public_4caf08 _public_4caf08
#define public_4caf0d _public_4caf0d
#define public_4caf30 _public_4caf30
#define public_4caf59 _public_4caf59
#define public_4caf84 _public_4caf84
#define public_4caf90 _public_4caf90
#define public_4caf99 _public_4caf99
#define public_4caf9f _public_4caf9f
#define public_4cafa3 _public_4cafa3
#define public_4cafb7 _public_4cafb7
#define public_4cafe6 _public_4cafe6
#define public_4cb012 _public_4cb012
#define public_4cb057 _public_4cb057
#define public_4cb083 _public_4cb083
#define public_4cb092 _public_4cb092
#define public_4cb10d _public_4cb10d
#define public_4cb10f _public_4cb10f
#define public_4cb11c _public_4cb11c
#define public_4cb122 _public_4cb122
#define public_4cb12f _public_4cb12f
#define public_4cb133 _public_4cb133
#define public_4cb1b3 _public_4cb1b3
#define public_4cb1ba _public_4cb1ba
#define public_4cb1eb _public_4cb1eb
#define public_4cb1f5 _public_4cb1f5
#define public_4cb237 _public_4cb237

PROC_DECLARE(0x4cae10, internal_4cae10, public_4cae10);
extern "C" NAKED register_t __cdecl internal_4cae10()
{
    __asm
    {
        sub esp, 0x264
        mov eax, dword ptr ss : [esp+0x278]
        mov edx, dword ptr ss : [esp+0x280]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x280]
        push ebp
        mov byte ptr ds : [ebx+0x15], 0
        xor ebp, ebp
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [ecx], ebp
        mov cl, byte ptr ss : [esp+0x27C]
        push esi
        mov dword ptr ds : [edx], ebp
        push edi
        mov edi, dword ptr ss : [esp+0x278]
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [ebx+0x18], eax
        mov byte ptr ds : [ebx+0x20], cl
        mov edx, dword ptr ds : [edi+0x3C]
        push edx
        call public_430ab0
        mov esi, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ebx+0x2C]
        add esp, 4
        cmp esi, eax
        je public_4caeaf
        public_4cae71 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_4cae87
        cmp byte ptr ds : [esi+8], 1
        jne public_4cae87
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov byte ptr ds : [esi+8], 0
        public_4cae87 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebp
        je public_4caea5
        mov ecx, eax
        cmp ecx, ebp
        je public_4caea5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebp
        public_4caea5 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        add esi, 0x10
        cmp esi, eax
        jne public_4cae71
        public_4caeaf : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        mov eax, dword ptr ds : [ebx+0x28]
        lea ecx, ds:[ebx+0x24]
        push edx
        push eax
        call public_501f80
        mov eax, dword ptr ds : [edi+0x88]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebp
        je public_4caf59
        mov edx, dword ptr ds : [public_67eca8]
        push 0x100
        lea ecx, ss:[esp+0x78]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        je public_4caf30
        lea esi, ss:[esp+0x74]
        public_4caef3 : nop
        mov ax, word ptr ds : [esi]
        cmp ax, 0x20
        je public_4caf08
        cmp ax, 9
        je public_4caf08
        cmp ax, 0x2C
        jne public_4caf0d
        public_4caf08 : nop
        add esi, 2
        jmp public_4caef3
        public_4caf0d : nop
        push 0xA
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call dword ptr ds : [public_5c7104]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp ecx, esi
        jbe public_4caf9f
        mov dword ptr ss : [esp+ebp*4+0x34], eax
        inc ebp
        mov esi, ecx
        jmp public_4caef3
        nop 
        public_4caf30 : nop
        mov ecx, dword ptr ds : [edi+0x88]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x2E8
/*FIXUP push offset public_5d7220 @0x4caf42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov eax, 0x100001
/*FIXUP push offset public_5d73b8 @0x4caf4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d73b8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_4cafa3
        public_4caf59 : nop
        mov eax, dword ptr ds : [edi+0x84]
        cmp eax, 1
        jle public_4caf84
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x2F3
/*FIXUP push offset public_5d7220 @0x4caf6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov ecx, 0x100002
/*FIXUP push offset public_5d7368 @0x4caf79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7368
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4caf84 : nop
        mov ecx, dword ptr ds : [edi+0x84]
        xor eax, eax
        test ecx, ecx
        jle public_4caf99
        public_4caf90 : nop
        mov dword ptr ss : [esp+eax*4+0x34], eax
        inc eax
        cmp eax, ecx
        jl public_4caf90
        public_4caf99 : nop
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_4cafa3
        public_4caf9f : nop
        mov dword ptr ss : [esp+0x14], ebp
        public_4cafa3 : nop
        mov ecx, dword ptr ds : [edi+0x84]
        xor ebp, ebp
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jle public_4cb092
        public_4cafb7 : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp ebp, edx
        jl public_4cafe6
        mov ecx, dword ptr ds : [public_5c6d18]
        push edx
        push ebp
        push 0x305
/*FIXUP push offset public_5d7220 @0x4cafcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov eax, 0x100002
/*FIXUP push offset public_5d7308 @0x4cafd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7308
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        jmp public_4cb083
        public_4cafe6 : nop
        mov eax, dword ptr ss : [esp+ebp*4+0x34]
        cmp eax, ecx
        jl public_4cb012
        push ecx
        push eax
        push 0x30F
/*FIXUP push offset public_5d7220 @0x4caff5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
        mov edx, 0x100002
/*FIXUP push offset public_5d72a8 @0x4cafff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d72a8
        push edx
        mov edx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [edx]
        add esp, 0x18
        jmp public_4cb083
        public_4cb012 : nop
        mov esi, dword ptr ds : [edi+eax*4+0x44]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        jne public_4cb057
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov edi, 0x100002
        call dword ptr ds : [edx+0x10]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push esi
        push 0x318
/*FIXUP push offset public_5d7220 @0x4cb03e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7220
/*FIXUP push offset public_5d7260 @0x4cb043*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7260
        push edi
        call dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x290]
        add esp, 0x18
        jmp public_4cb083
        public_4cb057 : nop
        mov edx, dword ptr ds : [ebx+0x2C]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[ebx+0x24]
        push 1
        push edx
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x34], 0
        mov byte ptr ss : [esp+0x30], 0
        call public_501c60
        mov dword ptr ss : [esp+0x10], esi
        public_4cb083 : nop
        mov ecx, dword ptr ds : [edi+0x84]
        inc ebp
        cmp ebp, ecx
        jl public_4cafb7
        public_4cb092 : nop
        mov ecx, dword ptr ds : [ebx+0x28]
        xor esi, esi
        cmp ecx, esi
        je public_4cb237
        mov eax, dword ptr ds : [ebx+0x2C]
        sub eax, ecx
        sar eax, 4
        cmp eax, esi
        je public_4cb237
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x288]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x28C]
        mov edx, dword ptr ss : [esp+0x290]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        je public_4cb122
        push esi
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, esi
        je public_4cb10d
        add eax, 0xC
        cmp eax, esi
        je public_4cb10d
        mov eax, dword ptr ds : [eax+4]
        cmp eax, esi
        je public_4cb10d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4cb10d
        add eax, 0x9C
        jmp public_4cb10f
        public_4cb10d : nop
        xor eax, eax
        public_4cb10f : nop
        cmp eax, dword ptr ds : [ebx]
        je public_4cb11c
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c62a8]
        public_4cb11c : nop
        mov byte ptr ds : [ebx+8], 1
        jmp public_4cb133
        public_4cb122 : nop
        cmp dword ptr ds : [ebx], esi
        je public_4cb12f
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c62a8]
        public_4cb12f : nop
        mov byte ptr ds : [ebx+8], 0
        public_4cb133 : nop
        mov al, byte ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x18]
        mov dl, byte ptr ds : [ebx+0x15]
        fadd dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [ebx+0x28]
        and al, 0xF8
        shl dl, 2
        fstp dword ptr ss : [esp+0x30]
        xor dl, al
        and dl, 4
        xor al, dl
        mov dword ptr ds : [ebx+0x10], esi
        mov dword ptr ds : [ebx+0x34], ecx
        mov dword ptr ss : [esp+0x1C], esi
        lea esi, ds:[ecx+0xC]
        push 0
        mov byte ptr ss : [esp+0x24], al
        mov eax, dword ptr ds : [ecx+4]
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_428680
        add esp, 0x10
        test al, al
        je public_4cb1b3
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], 2
        fld dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [esi]
        fadd dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x80]
        jmp public_4cb1ba
        public_4cb1b3 : nop
        mov dword ptr ds : [ebx+0x10], 0x40400000
        public_4cb1ba : nop
        mov al, byte ptr ss : [esp+0x280]
        test al, al
        je public_4cb1f5
        call public_428db0
        mov eax, dword ptr ds : [public_6735b0]
        test eax, eax
        jne public_4cb1eb
        mov ecx, dword ptr ds : [public_6108f0]
        mov edx, dword ptr ds : [public_6108f4]
        mov dword ptr ds : [public_6735a4], ecx
        mov dword ptr ds : [public_6735ac], edx
        public_4cb1eb : nop
        inc dword ptr ds : [public_6735b0]
        mov byte ptr ds : [ebx+0x14], 1
        public_4cb1f5 : nop
        mov al, byte ptr ss : [esp+0x27C]
        test al, al
        je public_4cb237
/*FIXUP push offset public_5d7250 @0x4cb200*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7250
        call dword ptr ds : [public_5c6020]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_42ae40
        push 0
        add ebx, 0xC
        push ebx
        push 0
        push eax
        call public_428680
        add esp, 0x18
        test al, al
        je public_4cb237
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx+4], 2
        public_4cb237 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x264
        ret 0x1C
        UNREACHABLE_TRAP(0x4cae10)
    }
}

#undef public_4cae71
#undef public_4cae87
#undef public_4caea5
#undef public_4caeaf
#undef public_4caef3
#undef public_4caf08
#undef public_4caf0d
#undef public_4caf30
#undef public_4caf59
#undef public_4caf84
#undef public_4caf90
#undef public_4caf99
#undef public_4caf9f
#undef public_4cafa3
#undef public_4cafb7
#undef public_4cafe6
#undef public_4cb012
#undef public_4cb057
#undef public_4cb083
#undef public_4cb092
#undef public_4cb10d
#undef public_4cb10f
#undef public_4cb11c
#undef public_4cb122
#undef public_4cb12f
#undef public_4cb133
#undef public_4cb1b3
#undef public_4cb1ba
#undef public_4cb1eb
#undef public_4cb1f5
#undef public_4cb237
