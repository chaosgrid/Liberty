#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345290);
CLANG_FORWARD_PROC_SYMBOL(public_63456b0);
CLANG_FORWARD_PROC_SYMBOL(public_63521b0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397ae8);

PROC_DECLARE(0x6345290, internal_6345290, public_6345290);
/* CHUNK of public_6345100 */
extern "C" NAKED register_t __cdecl internal_6345290()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397ae8 @0x6345292*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397ae8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x10], 0
        call public_63521b0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_63456b0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6345290)
    }
}
