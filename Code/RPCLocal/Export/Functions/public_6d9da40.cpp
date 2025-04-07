#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9da40);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db28ee);

PROC_DECLARE(0x6d9da40, internal_6d9da40, public_6d9da40);
extern "C" NAKED register_t __cdecl internal_6d9da40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db28ee @0x6d9da42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db28ee
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6db4fbc
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x38], edi
        push 0xC
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0x3C], al
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x40], eax
        add esp, 4
        mov dword ptr ds : [esi], offset public_6db3c90
        mov dword ptr ds : [esi+0xC], 0x20035
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d9da40)
    }
}
