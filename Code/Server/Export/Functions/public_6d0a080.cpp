#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0a080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6144f);

#define public_6d0a0c0 _public_6d0a0c0
#define public_6d0a0d6 _public_6d0a0d6

PROC_DECLARE(0x6d0a080, internal_6d0a080, public_6d0a080);
extern "C" NAKED register_t __cdecl internal_6d0a080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6144f @0x6d0a082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6144f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0xB0]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0xAC]
        mov dword ptr ss : [esp+0x20], 0
        je public_6d0a0d6
        lea esp, ss:[esp]
        public_6d0a0c0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d643d0]
        cmp esi, ebx
        jne public_6d0a0c0
        public_6d0a0d6 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6d5ffb0
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov edx, dword ptr ss : [ebp+0xA0]
        push edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp+0xA0], esi
        mov dword ptr ss : [ebp+0xA4], esi
        mov dword ptr ss : [ebp+0xA8], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d0a080)
    }
}

#undef public_6d0a0c0
#undef public_6d0a0d6
