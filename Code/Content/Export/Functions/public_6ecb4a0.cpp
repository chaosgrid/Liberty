#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb4a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaf68);

PROC_DECLARE(0x6ecb4a0, internal_6ecb4a0, public_6ecb4a0);
extern "C" NAKED register_t __cdecl internal_6ecb4a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaf68 @0x6ecb4a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaf68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x20]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [public_6fb3030]
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], eax
        call edi
        mov dword ptr ds : [esi], offset public_6fb5a90
        xor ebx, ebx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x24], ebx
        call edi
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov dword ptr ds : [esi+0x44], ebx
        mov byte ptr ds : [esi+0x48], bl
        mov eax, 1
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi], offset public_6fb5e48
        mov ecx, dword ptr ds : [public_6fb4674]
        mov byte ptr ds : [esi+0x91], al
        mov eax, ebx
        mov dword ptr ds : [esi+0x88], ecx
        lea edx, ds:[esi+0x78]
        mov dword ptr ds : [edx], eax
        mov ecx, ebx
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x90], bl
        mov dword ptr ds : [edx+8], eax
        mov byte ptr ds : [esi+0x84], bl
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6ecb4a0)
    }
}
