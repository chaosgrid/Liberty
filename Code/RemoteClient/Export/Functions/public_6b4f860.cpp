#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f860);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6aba8);

#define public_6b4f8a3 _public_6b4f8a3

PROC_DECLARE(0x6b4f860, internal_6b4f860, public_6b4f860);
extern "C" NAKED register_t __cdecl internal_6b4f860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6aba8 @0x6b4f862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6aba8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ds : [edi], offset public_6b6e0f4
        mov esi, dword ptr ds : [edi+0x20]
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6b4f8a3
        mov ecx, esi
        call public_6b3a450
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4f8a3 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6b4e730
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6b4f860)
    }
}

#undef public_6b4f8a3
