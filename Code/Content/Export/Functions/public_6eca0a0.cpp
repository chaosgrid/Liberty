#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca0a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

PROC_DECLARE(0x6eca0a0, internal_6eca0a0, public_6eca0a0);
extern "C" NAKED register_t __cdecl internal_6eca0a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6eca0a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaea8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [public_6fb3030]
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi+4], eax
        call edi
        mov dword ptr ds : [esi], offset public_6fb5a90
        lea ebx, ds:[esi+0xC]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0
        call edi
        lea ebp, ds:[esi+0x10]
        mov ecx, ebp
        call edi
        mov edi, dword ptr ds : [public_6fb3000]
        push 0
        mov dword ptr ds : [esi], offset public_6fb5dc4
        call edi
        mov dword ptr ds : [ebx], eax
        xor ebx, ebx
        push ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ss : [ebp], eax
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6eca0a0)
    }
}
