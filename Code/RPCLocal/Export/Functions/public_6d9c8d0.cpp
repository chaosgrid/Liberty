#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2848);

PROC_DECLARE(0x6d9c8d0, internal_6d9c8d0, public_6d9c8d0);
extern "C" NAKED register_t __cdecl internal_6d9c8d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2848 @0x6d9c8d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2848
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6db4fbc
        mov al, byte ptr ss : [esp+0xB]
        push 0x14
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x24], al
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x30], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        add esp, 4
        mov dword ptr ds : [esi], offset public_6db3cb0
        mov dword ptr ds : [esi+0xC], 0x20005
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d9c8d0)
    }
}
