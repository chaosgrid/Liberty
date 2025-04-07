#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211060);
CLANG_FORWARD_PROC_SYMBOL(public_62110e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247dd0);

#define public_6211098 _public_6211098
#define public_62110bf _public_62110bf

PROC_DECLARE(0x6211060, internal_6211060, public_6211060);
extern "C" NAKED register_t __cdecl internal_6211060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247dd0 @0x6211062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247dd0
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
        je public_62110bf
        public_6211098 : nop
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x10], esp
        mov dword ptr ds : [eax], ecx
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_62110e0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], 0
        cmp ecx, edi
        mov dword ptr ss : [esp+0x24], ecx
        jne public_6211098
        public_62110bf : nop
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6211060)
    }
}

#undef public_6211098
#undef public_62110bf
