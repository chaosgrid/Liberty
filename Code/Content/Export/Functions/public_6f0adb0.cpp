#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad293);

#define public_6f0ae56 _public_6f0ae56
#define public_6f0ae58 _public_6f0ae58
#define public_6f0ae7c _public_6f0ae7c
#define public_6f0ae94 _public_6f0ae94

PROC_DECLARE(0x6f0adb0, internal_6f0adb0, public_6f0adb0);
extern "C" NAKED register_t __cdecl internal_6f0adb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad293 @0x6f0adb2*/
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
        push 0x34
        mov edi, ecx
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f0ae94
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi], offset public_6fb43f8
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov al, byte ptr ds : [edi+0x10]
        mov dword ptr ds : [esi], offset public_6fb8240
        mov byte ptr ds : [esi+0x10], al
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi], offset public_6fb81d8
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [esi+0x24], dl
        mov al, byte ptr ds : [edi+0x25]
        mov byte ptr ds : [esi+0x25], al
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], ecx
        mov dword ptr ds : [esi], offset public_6fb84d0
        mov ecx, dword ptr ds : [edi+0x2C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x14], 1
        je public_6f0ae56
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        jmp public_6f0ae58
        public_6f0ae56 : nop
        xor eax, eax
        public_6f0ae58 : nop
        mov dword ptr ds : [esi+0x2C], eax
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6f0ae7c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x30], eax
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f0ae7c : nop
        xor eax, eax
        mov dword ptr ds : [esi+0x30], eax
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f0ae94 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f0adb0)
    }
}

#undef public_6f0ae56
#undef public_6f0ae58
#undef public_6f0ae7c
#undef public_6f0ae94
