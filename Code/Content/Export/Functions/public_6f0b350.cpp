#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad293);

#define public_6f0b3df _public_6f0b3df
#define public_6f0b3ff _public_6f0b3ff

PROC_DECLARE(0x6f0b350, internal_6f0b350, public_6f0b350);
extern "C" NAKED register_t __cdecl internal_6f0b350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad293 @0x6f0b352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad293
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x3C
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f0b3ff
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi], offset public_6fb43f8
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov dl, byte ptr ds : [edi+0x10]
        mov dword ptr ds : [esi], offset public_6fb8240
        mov byte ptr ds : [esi+0x10], dl
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi], offset public_6fb81d8
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], ecx
        mov ecx, dword ptr ds : [edi+0x28]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi+0x28], ecx
        je public_6f0b3df
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f0b3df : nop
        mov eax, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], eax
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], edx
        mov eax, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi], offset public_6fb8138
        mov eax, esi
        public_6f0b3ff : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f0b350)
    }
}

#undef public_6f0b3df
#undef public_6f0b3ff
