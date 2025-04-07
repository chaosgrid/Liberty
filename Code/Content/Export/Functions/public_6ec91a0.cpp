#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec91a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

PROC_DECLARE(0x6ec91a0, internal_6ec91a0, public_6ec91a0);
extern "C" NAKED register_t __cdecl internal_6ec91a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6ec91a2*/
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
        mov ebx, dword ptr ds : [public_6fb3030]
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], eax
        call ebx
        mov dword ptr ds : [esi], offset public_6fb5a90
        lea edi, ds:[esi+0xC]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0
        call ebx
/*FIXUP push offset public_6fb572c @0x6ec91e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        mov dword ptr ds : [esi], offset public_6fb5cd8
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [edi], eax
        pop edi
        mov dword ptr ds : [esi+0x10], 4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec91a0)
    }
}
