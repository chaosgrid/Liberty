#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6352150);
CLANG_FORWARD_PROC_SYMBOL(public_6362ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_6398058);

PROC_DECLARE(0x6352150, internal_6352150, public_6352150);
extern "C" NAKED register_t __cdecl internal_6352150()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398058 @0x6352152*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398058
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        push 8
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x18], edi
        call public_6362ef0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6352150)
    }
}
