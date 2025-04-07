#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d115c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d12860);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61b61);

PROC_DECLARE(0x6d12860, internal_6d12860, public_6d12860);
extern "C" NAKED register_t __cdecl internal_6d12860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61b61 @0x6d12862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61b61
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
        mov dword ptr ds : [esi+0x14], offset public_6d683d8
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov byte ptr ds : [esi+0x20], bl
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x2C], offset public_6d683d0
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov byte ptr ds : [esi+0x38], bl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x28], ebx
        lea edi, ds:[esi+0x40]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call public_6d115c0
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 2
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x28], edi
        call public_6ce1090
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d12860)
    }
}
