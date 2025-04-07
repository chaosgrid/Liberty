#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6facf0e);

#define public_6f06f6b _public_6f06f6b
#define public_6f06f79 _public_6f06f79
#define public_6f06f8c _public_6f06f8c

PROC_DECLARE(0x6f06ed0, internal_6f06ed0, public_6f06ed0);
extern "C" NAKED register_t __cdecl internal_6f06ed0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facf0e @0x6f06ed2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facf0e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f06f8c
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi], offset public_6fb43f8
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov al, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi], offset public_6fb8240
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi+0x24], 0
        mov dword ptr ds : [esi], offset public_6fb8188
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 2
        je public_6f06f6b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x24], 0
        public_6f06f6b : nop
        mov ecx, dword ptr ds : [edi+0x24]
        test ecx, ecx
        mov dword ptr ds : [esi+0x24], ecx
        je public_6f06f79
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f06f79 : nop
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f06f8c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f06ed0)
    }
}

#undef public_6f06f6b
#undef public_6f06f79
#undef public_6f06f8c
