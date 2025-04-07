#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7190);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f571a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf764);

#define public_6f57209 _public_6f57209
#define public_6f57211 _public_6f57211
#define public_6f57217 _public_6f57217

PROC_DECLARE(0x6f571a0, internal_6f571a0, public_6f571a0);
extern "C" NAKED register_t __cdecl internal_6f571a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf764 @0x6f571a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf764
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_6eb7190
        xor ebx, ebx
        mov dword ptr ds : [esi+0x118], offset public_6fbba1c
        mov byte ptr ds : [esi+0x11C], bl
        mov byte ptr ds : [esi+0x11D], bl
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x124], ebx
        mov al, byte ptr ds : [edi+0x50]
        lea ebp, ds:[esi+0x128]
        mov byte ptr ss : [ebp], al
        mov ecx, dword ptr ds : [edi+0x54]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6f57209
        xor eax, eax
        jmp public_6f57211
        public_6f57209 : nop
        mov eax, dword ptr ds : [edi+0x58]
        sub eax, ecx
        sar eax, 2
        public_6f57211 : nop
        cmp eax, ebx
        jge public_6f57217
        xor eax, eax
        public_6f57217 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+0x58]
        mov edx, dword ptr ds : [edi+0x54]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6eed270
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ds : [edi+0x74]
        mov dl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x138], eax
        mov byte ptr ds : [esi+0x13C], dl
        mov dword ptr ds : [esi+0x140], ebx
        mov dword ptr ds : [esi+0x144], ebx
        mov dword ptr ds : [esi+0x148], ebx
        mov eax, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [esi+0x14C], eax
        mov ecx, dword ptr ds : [edi+0x44]
        mov al, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x150], ecx
        mov edx, dword ptr ds : [edi+0x4C]
        mov dword ptr ds : [esi+0x154], edx
        push 0xC
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [esi+0x158], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x15C], eax
        mov dword ptr ds : [esi+0x160], ebx
        mov ecx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x168], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x16C], ebx
        mov edx, dword ptr ds : [edi+0x6C]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x170], edx
        mov dword ptr ds : [esi], offset public_6fbba08
        mov dword ptr ds : [esi+0x118], offset public_6fbba04
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f571a0)
    }
}

#undef public_6f57209
#undef public_6f57211
#undef public_6f57217
