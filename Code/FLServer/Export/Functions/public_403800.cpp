#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403800);
CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_JUMP_SYMBOL(public_419ba8);

PROC_DECLARE(0x403800, internal_403800, public_403800);
extern "C" NAKED register_t __cdecl internal_403800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419ba8 @0x403802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419ba8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x64]
        mov dword ptr ss : [esp+0x10], 0
        call public_40fc80
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x403800)
    }
}
