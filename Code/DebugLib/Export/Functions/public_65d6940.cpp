#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6940);
CLANG_FORWARD_JUMP_SYMBOL(public_65e0121);

#define public_65d697c _public_65d697c

PROC_DECLARE(0x65d6940, internal_65d6940, public_65d6940);
extern "C" NAKED register_t __cdecl internal_65d6940()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65e0121 @0x65d6942*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65e0121
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], 0
        je public_65d697c
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        je public_65d697c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65d697c : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d6940)
    }
}

#undef public_65d697c
