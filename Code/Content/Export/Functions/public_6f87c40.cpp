#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fb0bec);

#define public_6f87c92 _public_6f87c92

PROC_DECLARE(0x6f87c40, internal_6f87c40, public_6f87c40);
extern "C" NAKED register_t __cdecl internal_6f87c40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0bec @0x6f87c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0bec
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x24
        mov edi, ecx
        call dword ptr ds : [public_6fb3264]
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_6f87c92
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3260]
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi], offset public_6fbc87c
        mov eax, esi
        public_6f87c92 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f87c40)
    }
}

#undef public_6f87c92
