#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3db0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d609e4);

PROC_DECLARE(0x6cf3db0, internal_6cf3db0, public_6cf3db0);
extern "C" NAKED register_t __cdecl internal_6cf3db0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d609e4 @0x6cf3db2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d609e4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi-0xC]
        lea edi, ds:[esi+0x54]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [ecx], offset public_6d6653c
        mov dword ptr ds : [esi-8], offset public_6d664bc
        mov dword ptr ds : [esi], offset public_6d664b0
        mov dword ptr ds : [edi], offset public_6d66700
        mov dword ptr ds : [esi+0x64], offset public_6d664a4
        mov dword ptr ss : [esp+0x18], 1
        call dword ptr ds : [public_6d66698]
        mov eax, dword ptr ds : [esi+0x68]
        push eax
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
        UNREACHABLE_TRAP(0x6cf3db0)
    }
}
