#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0600);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabf8e);

#define public_6ef06ac _public_6ef06ac

PROC_DECLARE(0x6ef0600, internal_6ef0600, public_6ef0600);
extern "C" NAKED register_t __cdecl internal_6ef0600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabf8e @0x6ef0602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabf8e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x88
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6ef06ac
        mov ecx, esi
        call public_6f4d2e0
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x54], edi
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov byte ptr ds : [esi+0x6C], al
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x74], edi
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x68], offset public_6fb7750
        mov cl, byte ptr ss : [esp+0x1C]
        push 0xC
        mov byte ptr ss : [esp+0x18], 2
        mov byte ptr ds : [esi+0x7C], cl
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], edi
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fb7744
        mov dword ptr ds : [esi+4], offset public_6fb7738
        pop edi
        mov dword ptr ds : [edx], esi
        mov al, 1
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6ef06ac : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef0600)
    }
}

#undef public_6ef06ac
