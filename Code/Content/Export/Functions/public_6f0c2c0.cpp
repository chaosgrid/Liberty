#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f0c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad338);

#define public_6f0c340 _public_6f0c340
#define public_6f0c35f _public_6f0c35f

PROC_DECLARE(0x6f0c2c0, internal_6f0c2c0, public_6f0c2c0);
extern "C" NAKED register_t __cdecl internal_6f0c2c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad338 @0x6f0c2c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad338
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0x24]
        push edi
        lea edi, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], offset public_6fb839c
        push 0xC
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ds : [edi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebp, ebp
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebp
        call public_6ed2a00
        lea edx, ds:[ebx+8]
        push edx
        mov ecx, edi
        call public_6f93490
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [edi+4]
        je public_6f0c35f
        lea ecx, ds:[ecx]
        public_6f0c340 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [edi+4]
        jne public_6f0c340
        public_6f0c35f : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [ebx+0x24]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [ebx+0x28]
        mov dl, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [ebx+0x2C]
        mov al, byte ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x2C], ecx
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x38], ebp
        mov dword ptr ds : [esi+0x3C], ebp
        mov byte ptr ds : [esi+0x30], dl
        mov byte ptr ds : [esi+0x40], al
        mov dword ptr ds : [esi+0x44], ebp
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x4C], ebp
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [esi+0x50], ecx
        mov edx, dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [esi+0x54], edx
        mov eax, dword ptr ds : [ebx+0x58]
        mov dword ptr ds : [esi+0x58], eax
        mov cl, byte ptr ds : [ebx+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov dl, byte ptr ds : [ebx+0x61]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov byte ptr ds : [esi+0x61], dl
        mov dword ptr ds : [esi], offset public_6fb8520
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f0c2c0)
    }
}

#undef public_6f0c340
#undef public_6f0c35f
