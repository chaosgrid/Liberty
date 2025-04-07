#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a550);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf838);

PROC_DECLARE(0x6f5a550, internal_6f5a550, public_6f5a550);
extern "C" NAKED register_t __cdecl internal_6f5a550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf838 @0x6f5a552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf838
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], offset public_6fbbb4c
        mov ecx, dword ptr ds : [eax]
        push 0x40400000
/*FIXUP push offset public_6fd0e64 @0x6f5a57e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0e64
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [public_6fd0e64], ecx
        call dword ptr ds : [public_6fb36a4]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f5a550)
    }
}
