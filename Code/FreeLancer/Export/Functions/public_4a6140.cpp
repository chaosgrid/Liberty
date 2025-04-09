#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a6140);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcc58);

PROC_DECLARE(0x4a6140, internal_4a6140, public_4a6140);
extern "C" NAKED register_t __cdecl internal_4a6140()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcc58 @0x4a6142*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcc58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x32C]
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5d443c
        mov dword ptr ds : [esi+0x7C], offset public_5d442c
        mov dword ptr ds : [ecx], offset public_5d4424
        xor eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ds : [public_67dcc8], al
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4a6140)
    }
}
