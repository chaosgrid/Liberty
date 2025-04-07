#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b220);
CLANG_FORWARD_PROC_SYMBOL(public_630cd40);
CLANG_FORWARD_JUMP_SYMBOL(public_639626b);

PROC_DECLARE(0x630b220, internal_630b220, public_630b220);
extern "C" NAKED register_t __cdecl internal_630b220()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639626b @0x630b222*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639626b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov dword ptr ss : [esp+4], ecx
        lea esi, ds:[ecx+0x14]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call public_630cd40
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_630cd40
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x630b220)
    }
}
