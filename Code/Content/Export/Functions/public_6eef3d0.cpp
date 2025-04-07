#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eef3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ca70);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabe4e);

#define public_6eef419 _public_6eef419

PROC_DECLARE(0x6eef3d0, internal_6eef3d0, public_6eef3d0);
extern "C" NAKED register_t __cdecl internal_6eef3d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabe4e @0x6eef3d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabe4e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        push esi
        push edi
        push ebx
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_6f4b0d0
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ds : [esi+0x240], ebx
        je public_6eef419
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ds:[ebx+4]
        call dword ptr ds : [edx]
        public_6eef419 : nop
        mov eax, dword ptr ds : [esi+0x240]
        add eax, 0x10
        mov ebx, 1
        push eax
        mov byte ptr ss : [esp+0x28], bl
        call public_6f75f30
        lea ebp, ds:[esi+0x248]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [esi+0x244], eax
        call public_6f1ca70
        mov dword ptr ss : [ebp], offset public_6fb478c
        mov dword ptr ss : [ebp+0x10], edi
        mov al, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0x26C], al
        mov dword ptr ds : [esi+0x270], edi
        mov dword ptr ds : [esi+0x274], edi
        mov dword ptr ds : [esi+0x278], edi
        mov cl, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0x27C], cl
        mov dword ptr ds : [esi+0x280], edi
        mov dword ptr ds : [esi+0x284], edi
        mov dword ptr ds : [esi+0x288], edi
        mov dl, byte ptr ss : [esp+0x30]
        mov byte ptr ds : [esi+0x28C], dl
        mov dword ptr ds : [esi+0x290], edi
        mov dword ptr ds : [esi+0x294], edi
        mov dword ptr ds : [esi+0x298], edi
        mov eax, dword ptr ds : [esi+0x240]
        mov dword ptr ds : [esi], offset public_6fb7658
        mov dword ptr ds : [esi+0x1B0], offset public_6fb7638
        mov dword ptr ds : [esi+0x1C0], offset public_6fb7624
        mov edx, dword ptr ds : [eax+0x80]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+8]
        mov al, byte ptr ds : [edx+0x54]
        lea ecx, ds:[esi+0x1B0]
        lea edx, ss:[esp+0x14]
        push edx
        mov byte ptr ss : [esp+0x28], 5
        mov byte ptr ds : [esi+0x80], al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x18], offset public_6fb7620
        call dword ptr ds : [public_6fb30f4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6eef3d0)
    }
}

#undef public_6eef419
