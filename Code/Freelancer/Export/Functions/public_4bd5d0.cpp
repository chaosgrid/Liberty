#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd5d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd4c1);

#define public_4bd605 _public_4bd605

PROC_DECLARE(0x4bd5d0, internal_4bd5d0, public_4bd5d0);
extern "C" NAKED register_t __cdecl internal_4bd5d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd4c1 @0x4bd5d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd4c1
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
        je public_4bd605
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [public_5c6420]
        public_4bd605 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4bd5d0)
    }
}

#undef public_4bd605
