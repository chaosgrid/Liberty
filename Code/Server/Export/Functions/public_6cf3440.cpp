#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3440);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60984);

PROC_DECLARE(0x6cf3440, internal_6cf3440, public_6cf3440);
extern "C" NAKED register_t __cdecl internal_6cf3440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60984 @0x6cf3442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60984
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x54]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi-0xC], offset public_6d6606c
        mov dword ptr ds : [esi-8], offset public_6d65fec
        mov dword ptr ds : [esi], offset public_6d65fe4
        mov dword ptr ds : [edi], offset public_6d6622c
        mov dword ptr ds : [esi+0x64], offset public_6d65fd8
        mov eax, dword ptr ds : [esi+0x68]
        push eax
        mov dword ptr ss : [esp+0x1C], 1
        call dword ptr ds : [public_6d64440]
        xor eax, eax
        add esp, 4
        lea ecx, ds:[esi-0xC]
        neg ecx
        sbb ecx, ecx
        and ecx, edi
        mov dword ptr ds : [esi+0x68], eax
        mov byte ptr ss : [esp+0x18], al
        call dword ptr ds : [public_6d6443c]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6cee4a0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6cf3440)
    }
}
