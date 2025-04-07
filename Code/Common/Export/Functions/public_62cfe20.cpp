#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cfe20);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_JUMP_SYMBOL(public_6394fc3);

PROC_DECLARE(0x62cfe20, internal_62cfe20, public_62cfe20);
extern "C" NAKED register_t __cdecl internal_62cfe20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394fc3 @0x62cfe22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394fc3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+8], esi
        call public_62d2020
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x10], 0
        call public_62d4e60
        lea ecx, ds:[esi+0xA8]
        mov byte ptr ss : [esp+0x10], 1
        call public_62d6750
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_639ff24
        mov dword ptr ds : [esi+0x2C], 0x44BB8000
        mov dword ptr ds : [esi+0x168], 0
        mov dword ptr ds : [esi+0x16C], 0
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62cfe20)
    }
}
