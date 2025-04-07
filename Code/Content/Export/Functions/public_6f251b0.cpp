#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f251b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae348);

PROC_DECLARE(0x6f251b0, internal_6f251b0, public_6f251b0);
extern "C" NAKED register_t __cdecl internal_6f251b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae348 @0x6f251b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae348
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        xor eax, eax
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [esi+0xC], al
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6fb8314
        lea ecx, ds:[esi+0x10C]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6fb31ac]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb9098
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f251b0)
    }
}
