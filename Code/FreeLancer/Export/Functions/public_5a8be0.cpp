#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_531050);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5a8be0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae6e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b62a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7392);
CLANG_FORWARD_JUMP_SYMBOL(public_5c545f);

#define public_5a8ddc _public_5a8ddc

PROC_DECLARE(0x5a8be0, internal_5a8be0, public_5a8be0);
extern "C" NAKED register_t __cdecl internal_5a8be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c545f @0x5a8be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c545f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [esi], offset public_5c9348
        call public_5b7392
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x94]
        xor ebx, ebx
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ds:[edi+0x18]
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [edi+0x14], ebx
        call public_5a6900
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[edi+0x44]
        mov byte ptr ss : [esp+0x2C], 2
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x2C], 0xFFFFFFFE
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebx
        mov dword ptr ds : [edi+0x38], ebx
        mov byte ptr ds : [edi+0x3C], bl
        mov byte ptr ds : [edi+0x3D], bl
        mov byte ptr ds : [edi+0x3E], bl
        mov dword ptr ds : [edi+0x40], ebx
        call dword ptr ds : [public_5c6fc0]
        lea eax, ss:[esp+0x15]
        push eax
        lea ecx, ds:[edi+0x54]
        mov byte ptr ss : [esp+0x2C], 3
        call dword ptr ds : [public_5c6fc0]
        lea ecx, ss:[esp+0x16]
        push ecx
        lea ecx, ds:[edi+0x64]
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [public_5c6f98]
        lea edx, ss:[esp+0x17]
        push edx
        lea ecx, ds:[edi+0x74]
        mov byte ptr ss : [esp+0x2C], 5
        call dword ptr ds : [public_5c6f98]
        mov dword ptr ds : [edi+0x84], ebx
        mov dword ptr ds : [edi+0x88], ebx
        mov dword ptr ds : [edi+0x8C], ebx
        mov dword ptr ds : [edi+0x90], ebx
        mov byte ptr ds : [edi+0x94], bl
        mov byte ptr ds : [edi+0x95], 1
        mov byte ptr ds : [edi+0x96], 1
        mov dword ptr ds : [edi+0x98], ebx
        mov al, byte ptr ss : [esp+0x17]
        lea ecx, ds:[esi+0x130]
        push ebx
        mov byte ptr ss : [esp+0x2C], 6
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_5c6fb8]
        mov cl, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x140], cl
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov dword ptr ds : [esi+0x14C], ebx
        mov dl, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x150], dl
        mov dword ptr ds : [esi+0x154], ebx
        mov dword ptr ds : [esi+0x158], ebx
        mov dword ptr ds : [esi+0x15C], ebx
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x160], al
        mov dword ptr ds : [esi+0x164], ebx
        mov dword ptr ds : [esi+0x168], ebx
        mov dword ptr ds : [esi+0x16C], ebx
        mov cl, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x170], cl
        mov dword ptr ds : [esi+0x174], ebx
        mov dword ptr ds : [esi+0x178], ebx
        mov dword ptr ds : [esi+0x17C], ebx
        mov edx, dword ptr ds : [public_5e64c0]
        mov al, byte ptr ss : [esp+0x17]
        lea edi, ds:[esi+0x188]
        mov dword ptr ds : [esi+0x180], edx
        mov byte ptr ds : [esi+0x184], bl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0xB
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_5c6fb8]
/*FIXUP push offset public_5e3094 @0x5a8d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e3094
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push 1
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5a8ddc
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+4]
        push ebp
/*FIXUP push offset public_5e3094 @0x5a8dc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e3094
        push eax
        call public_41d8a0
        add esp, 0xC
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_5c7054]
        public_5a8ddc : nop
        mov dl, byte ptr ss : [esp+0x17]
        lea ecx, ds:[esi+0x198]
        push ebx
        mov byte ptr ss : [esp+0x2C], 0xC
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_5c6fb8]
        mov byte ptr ds : [esi+0x1A8], bl
        mov eax, dword ptr ds : [public_5e64c4]
        lea edi, ds:[esi+0x1B4]
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0xD
        mov dword ptr ds : [esi+0x1AC], eax
        mov byte ptr ds : [esi+0x1B0], bl
        mov byte ptr ds : [esi+0x1B1], 5
        call public_5ae6e0
        mov dword ptr ds : [edi], offset public_5e6520
        mov ecx, dword ptr ds : [public_5e64c8]
        mov dl, byte ptr ss : [esp+0x17]
        mov dword ptr ds : [esi+0x1D0], ecx
        mov byte ptr ds : [esi+0x1D4], bl
        mov byte ptr ds : [esi+0x1D8], dl
        mov dword ptr ds : [esi+0x1DC], ebx
        mov dword ptr ds : [esi+0x1E0], ebx
        mov dword ptr ds : [esi+0x1E4], ebx
        mov eax, dword ptr ds : [public_5e64cc]
        mov cl, byte ptr ss : [esp+0x17]
        lea ebp, ds:[esi+0x220]
        mov dword ptr ds : [esi+0x218], eax
        mov byte ptr ds : [esi+0x21C], bl
        mov byte ptr ss : [ebp], cl
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2C], 0xF
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5e650c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5e650c @0x5a8e95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e650c
        mov ecx, ebp
        call dword ptr ds : [public_5c7088]
        lea edx, ss:[esp+0x17]
        push edx
        lea eax, ss:[esp+0x1A]
        lea edi, ds:[esi+0x244]
        push eax
        lea ecx, ds:[edi+4]
        mov byte ptr ss : [esp+0x30], 0x10
        mov dword ptr ds : [esi+0x230], 0x708A
        mov dword ptr ds : [esi+0x234], ebx
        mov byte ptr ds : [esi+0x238], bl
        mov dword ptr ds : [esi+0x23C], ebx
        mov byte ptr ds : [esi+0x240], bl
        call public_531050
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x11
        mov dword ptr ds : [esi+0x25C], ebx
        mov dword ptr ds : [esi], offset public_5e6508
        mov dword ptr ds : [esi+4], offset public_5e64f0
        mov word ptr ds : [esi+0x1E8], bx
        call public_5b62a0
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5a8be0)
    }
}

#undef public_5a8ddc
