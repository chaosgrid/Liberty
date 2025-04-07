#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b750);
CLANG_FORWARD_PROC_SYMBOL(public_620b7d0);
CLANG_FORWARD_JUMP_SYMBOL(public_62477f0);

#define public_620b788 _public_620b788
#define public_620b7af _public_620b7af

PROC_DECLARE(0x620b750, internal_620b750, public_620b750);
extern "C" NAKED register_t __cdecl internal_620b750()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62477f0 @0x620b752*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62477f0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x28]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        je public_620b7af
        public_620b788 : nop
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x10], esp
        mov dword ptr ds : [eax], ecx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_620b7d0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], 0
        cmp ecx, edi
        mov dword ptr ss : [esp+0x24], ecx
        jne public_620b788
        public_620b7af : nop
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x620b750)
    }
}

#undef public_620b788
#undef public_620b7af
