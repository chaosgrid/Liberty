#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_560c00);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_579870);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a60);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57b520);
CLANG_FORWARD_PROC_SYMBOL(public_57bdb0);
CLANG_FORWARD_PROC_SYMBOL(public_57bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57c860);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_591cd0);
CLANG_FORWARD_PROC_SYMBOL(public_59a110);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1b81);

#define public_5608ba _public_5608ba
#define public_560922 _public_560922
#define public_56098e _public_56098e

PROC_DECLARE(0x560310, internal_560310, public_560310);
extern "C" NAKED register_t __cdecl internal_560310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1b81 @0x560312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1b81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push eax
        mov esi, ecx
        call public_591cd0
        lea edi, ds:[esi+0x7C]
        mov dword ptr ds : [esi+0xB4], 0
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e1b10 @0x560349*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1b10
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x100], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e1b04 @0x56035b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1b04
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x104], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e1afc @0x56036d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1afc
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x108], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e1af0 @0x56037f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1af0
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x10C], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e1ae0 @0x560391*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1ae0
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x110], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e1ad0 @0x5603a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1ad0
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x114], eax
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_5e1ac8 @0x5603b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1ac8
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x118], eax
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_5e1abc @0x5603c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1abc
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        push 0xF
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0x11C], eax
        call public_5760d0
        mov ecx, dword ptr ds : [esi+0x110]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAD8
        mov ecx, dword ptr ds : [esi+0x108]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xADC
        mov ecx, dword ptr ds : [esi+0x10C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xADD
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0xC0]
        push eax
        push ecx
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, ebp
        call public_46c860
        push ebp
        push 0x60029
        call public_57da40
        push ebp
        call public_57eb40
        add esp, 0xC
        mov eax, dword ptr ds : [esi+0xD0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0xCC]
        push eax
        push ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, edi
        call public_46c860
        push edi
        push 0x60028
        call public_57da40
        push edi
        call public_57eb40
        mov eax, dword ptr ds : [esi+0x130]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea ebx, ds:[esi+0x12C]
        push eax
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, ebx
        call public_46c860
        push ebx
        push 0x6006C
        call public_57da40
        push ebx
        call public_57eb40
        mov eax, dword ptr ds : [esi+0x13C]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea edi, ds:[esi+0x138]
        push eax
        push ecx
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x6006B
        call public_57da40
        push edi
        call public_57eb40
        mov ecx, dword ptr ds : [esi+0x148]
        lea edi, ds:[esi+0x144]
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x4C], ecx
        push edx
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x6006E
        call public_57da40
        push edi
        call public_57eb40
        mov ecx, dword ptr ds : [esi+0x154]
        lea edi, ds:[esi+0x150]
        add esp, 0xC
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x4C], ecx
        push edx
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x6006A
        call public_57da40
        push edi
        call public_57eb40
        mov ecx, dword ptr ds : [esi+0x160]
        lea edi, ds:[esi+0x15C]
        add esp, 0xC
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x4C], ecx
        push edx
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x60063
        call public_57da40
        push edi
        call public_57eb40
        mov ecx, dword ptr ds : [esi+0x178]
        lea edi, ds:[esi+0x174]
        add esp, 0xC
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x4C], ecx
        push edx
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_46c860
        push edi
        push 0x60034
        call public_57da40
        push edi
        call public_57eb40
        add esp, 0xC
        push 1
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x11C]
        push eax
        mov dword ptr ss : [esp+0x48], 0
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        push 0x9CA4
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x11C]
        push eax
        mov dword ptr ss : [esp+0x48], 1
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [esi+0x11C]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x48], 2
        call public_57b470
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        lea ecx, ss:[esp+0x1C]
        mov ebx, dword ptr ds : [public_5c62c8]
        call ebx
        mov ecx, dword ptr ds : [esi+0x118]
        call public_57b370
        push 0x1DF5
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x118]
        push eax
        mov dword ptr ss : [esp+0x48], 3
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x118]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x48], 4
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call ebx
        mov eax, dword ptr ds : [esi+0x104]
        mov dword ptr ds : [eax+0x3EC], 0xC0C00000
        mov eax, dword ptr ds : [esi+0x104]
        mov dword ptr ds : [eax+0x3F0], 0xBF666666
        mov edi, dword ptr ds : [public_67dca4]
        mov eax, dword ptr ds : [public_67dcac]
        sub eax, edi
        mov edi, dword ptr ds : [esi+0x104]
        mov ecx, dword ptr ds : [edi+0x324]
        add edi, 0x324
        push edi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [public_67dc90]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        sub edx, ecx
        mov dword ptr ss : [esp+0x4C], edx
        fild dword ptr ss : [esp+0x4C]
        push ecx
        mov ecx, edi
        fmul st, st(1)
        fidiv dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_40f8c0
        push 0x42C80000
        push 0x3F800000
        mov ecx, edi
        call public_40fb60
        mov eax, dword ptr ds : [esi+0x108]
        lea ecx, ds:[eax+0x4B4]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        call public_46c860
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x44], 5
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+0x108]
        lea ecx, ds:[eax+0x4B4]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x44], 6
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_46c800
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x44], 5
        call public_45eeb0
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x44], edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x108]
        call public_59a110
        mov ecx, dword ptr ds : [esi+0x114]
        push 1
        call public_5799f0
        push 1
        mov ecx, esi
        call public_560c00
        mov ecx, dword ptr ds : [esi+0x110]
        call public_57c750
        mov ecx, dword ptr ds : [esi+0x110]
        push 0x17
        call public_57bdb0
        mov ecx, dword ptr ds : [esi+0x110]
        push 5
/*FIXUP push offset public_614338 @0x560844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_614338
        call public_57c860
        mov ecx, dword ptr ds : [esi+0x110]
        push 1
        call public_57bdd0
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 7
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+0x110]
        lea ecx, ds:[eax+0x4FC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x50], 8
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x4C]
        xor ebp, ebp
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x44], bl
        je public_5608ba
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ebp
        public_5608ba : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x44], edi
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 9
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [esi+0x110]
        lea ecx, ds:[eax+0x4DC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0x50], 0xA
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x44], bl
        je public_560922
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x4C], ebp
        public_560922 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x44], edi
        call dword ptr ds : [public_5c62bc]
        push edi
/*FIXUP push offset public_5cef90 @0x560931*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xB
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x110]
        lea ecx, ds:[eax+0x4DC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        mov byte ptr ss : [esp+0x50], 0xC
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x44], bl
        je public_56098e
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ebp
        public_56098e : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x44], edi
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ds : [esi+0x110]
        push 1
        call public_579860
        mov ecx, dword ptr ds : [esi+0x110]
/*FIXUP push offset public_679bb4 @0x5609af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_579870
        mov ecx, dword ptr ds : [esi+0x110]
        push 2
        call public_579a60
        mov ecx, dword ptr ds : [esi+0x110]
        push ebp
        call public_57b520
        mov eax, dword ptr ds : [esi+0x100]
        mov dword ptr ds : [esi+0xD8], ebp
        mov dword ptr ds : [esi+0xDC], 0xBFF00000
        mov dword ptr ds : [esi+0xE4], ebp
        mov byte ptr ds : [esi+0xE0], 0
        add eax, 0x60
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xF4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [esi+0x110]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x104]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x11C]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x114]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x118]
        and byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0x108]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x10C]
        push 1
        call public_579a90
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x560310)
    }
}

#undef public_5608ba
#undef public_560922
#undef public_56098e
