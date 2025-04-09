#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_576190);
CLANG_FORWARD_PROC_SYMBOL(public_59d410);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4e38);

PROC_DECLARE(0x59d410, internal_59d410, public_59d410);
extern "C" NAKED register_t __cdecl internal_59d410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4e38 @0x59d412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4e38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e5dcc
        mov dword ptr ss : [esp+0x10], 0
        call public_576190
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_576010
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x59d410)
    }
}
