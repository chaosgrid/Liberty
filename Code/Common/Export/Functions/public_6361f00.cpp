#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361e00);
CLANG_FORWARD_PROC_SYMBOL(public_6361f00);
CLANG_FORWARD_JUMP_SYMBOL(public_6398478);

PROC_DECLARE(0x6361f00, internal_6361f00, public_6361f00);
extern "C" NAKED register_t __cdecl internal_6361f00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6398478 @0x6361f08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398478
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push esi
        mov esi, ecx
        push eax
        call public_6361e00
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov word ptr ds : [esi+0xC], ax
        mov word ptr ds : [esi+0xE], ax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi], offset public_63a57f4
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6361f00)
    }
}
