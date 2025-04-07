#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7b90);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9948);

#define public_6ea7bda _public_6ea7bda

PROC_DECLARE(0x6ea7b90, internal_6ea7b90, public_6ea7b90);
extern "C" NAKED register_t __cdecl internal_6ea7b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9948 @0x6ea7b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9948
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6fb43ec
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6ea7bda
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], 0
        public_6ea7bda : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb43f8
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ea7b90)
    }
}

#undef public_6ea7bda
