#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c7020);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62dae20);
CLANG_FORWARD_PROC_SYMBOL(public_62db0c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6394bc8);

PROC_DECLARE(0x62c7020, internal_62c7020, public_62c7020);
extern "C" NAKED register_t __cdecl internal_62c7020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394bc8 @0x62c7022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394bc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62d2020
        xor ebx, ebx
        lea ecx, ds:[esi+0x4C]
        mov dword ptr ss : [esp+0x14], ebx
        call public_62dae20
        lea ecx, ds:[esi+0xBC]
        call public_62db0c0
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi+0x2C], bl
        mov byte ptr ds : [esi+0x38], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi], offset public_639f64c
        mov dword ptr ds : [esi+0x30], 4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c7020)
    }
}
