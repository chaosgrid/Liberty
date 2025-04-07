#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d115c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11b70);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61a8c);

PROC_DECLARE(0x6d11b70, internal_6d11b70, public_6d11b70);
extern "C" NAKED register_t __cdecl internal_6d11b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61a8c @0x6d11b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61a8c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x10], offset public_6d68348
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x1C], bl
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x28], offset public_6d68340
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov byte ptr ds : [esi+0x34], bl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x40], offset public_6d68338
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov byte ptr ds : [esi+0x4C], bl
        mov dword ptr ds : [esi+0x3C], ebx
        lea edi, ds:[esi+0x54]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 2
        call public_6d115c0
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 3
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x3C], edi
        call public_6ce1090
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d11b70)
    }
}
