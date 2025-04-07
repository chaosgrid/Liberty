#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ab40);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63c41);

#define public_6d5ab75 _public_6d5ab75

PROC_DECLARE(0x6d5ab40, internal_6d5ab40, public_6d5ab40);
extern "C" NAKED register_t __cdecl internal_6d5ab40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63c41 @0x6d5ab42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63c41
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
        je public_6d5ab75
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_6d64894]
        public_6d5ab75 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d5ab40)
    }
}

#undef public_6d5ab75
