#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_474420);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbb88);

PROC_DECLARE(0x474420, internal_474420, public_474420);
extern "C" NAKED register_t __cdecl internal_474420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbb88 @0x474422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbb88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5d08e4
        mov dword ptr ds : [esi+0x7C], offset public_5d08d8
        mov edx, dword ptr ds : [public_67dccc]
        dec edx
        push 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ds : [public_67dccc], edx
        call public_59d8c0
        add esp, 4
        call public_42d6d0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x474420)
    }
}
