#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec69c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

PROC_DECLARE(0x6ec69c0, internal_6ec69c0, public_6ec69c0);
extern "C" NAKED register_t __cdecl internal_6ec69c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6ec69c2*/
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
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x10], bl
        mov dword ptr ds : [esi+0x40], ebx
        mov byte ptr ds : [esi+0x44], bl
        mov dword ptr ds : [esi+0x74], ebx
        mov byte ptr ds : [esi+0x78], bl
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        lea ecx, ds:[esi+0xE0]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0xDC], bl
        mov byte ptr ds : [esi+0xDD], bl
        pop edi
        mov dword ptr ds : [esi], offset public_6fb5b54
        mov dword ptr ds : [esi+0xE4], 0xBF800000
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ec69c0)
    }
}
