#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fadbf3);

#define public_6f1a46b _public_6f1a46b

PROC_DECLARE(0x6f1a3e0, internal_6f1a3e0, public_6f1a3e0);
extern "C" NAKED register_t __cdecl internal_6f1a3e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fadbf3 @0x6f1a3e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fadbf3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x50
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f1a46b
        mov al, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], al
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        push ebx
        mov ebx, dword ptr ds : [public_6fb3084]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        lea ecx, ds:[edi+0x20]
        push ecx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ds : [esi+0x1C], eax
        call ebx
        mov dword ptr ds : [esi], offset public_6fb8ccc
        add edi, 0x38
        push edi
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x1C], 1
        call ebx
        mov dword ptr ds : [esi], offset public_6fb8c5c
        mov eax, esi
        pop ebx
        public_6f1a46b : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f1a3e0)
    }
}

#undef public_6f1a46b
