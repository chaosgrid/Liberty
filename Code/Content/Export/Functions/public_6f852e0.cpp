#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0a3e);

PROC_DECLARE(0x6f852e0, internal_6f852e0, public_6f852e0);
extern "C" NAKED register_t __cdecl internal_6f852e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0a3e @0x6f852e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0a3e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        call dword ptr ds : [public_6fb309c]
        mov byte ptr ds : [esi+0x3E0], bl
        mov dword ptr ds : [esi+0x3E4], 0x43160000
        lea edi, ds:[esi+0x41C]
        mov ecx, edi
        mov dword ptr ds : [esi+0x3E8], ebx
        mov byte ptr ds : [esi+0x3EC], bl
        call public_6efc7a0
        mov al, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        or ebp, 0xFFFFFFFF
        lea edi, ds:[esi+0x46C]
        push ebx
        mov dword ptr ds : [esi+0x44C], ebx
        mov dword ptr ds : [esi+0x450], ebx
        mov dword ptr ds : [esi+0x454], ebx
        mov dword ptr ds : [esi+0x458], ebp
        mov dword ptr ds : [esi+0x45C], ebp
        mov dword ptr ds : [esi+0x460], ebx
        mov dword ptr ds : [esi+0x464], ebx
        mov dword ptr ds : [esi+0x468], ebx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x4AC]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+0x478], ebx
        mov dword ptr ds : [esi+0x47C], ebx
        mov dword ptr ds : [esi+0x480], ebx
        mov dword ptr ds : [esi+0x484], ebx
        mov dword ptr ds : [esi+0x4A8], ebx
        call public_6eac680
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x4C4], bl
        mov ecx, dword ptr ds : [public_6fbc2e8]
        mov dword ptr ds : [esi+0x4C8], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x4CC], ebx
        mov dword ptr ds : [esi+0x4D0], ebp
        mov dword ptr ds : [esi+0x4D4], ebx
        mov dword ptr ds : [esi+0x4D8], 1
        mov dword ptr ds : [esi+0x4DC], ebx
        mov byte ptr ds : [esi+0x4E0], bl
        mov dword ptr ds : [esi+0x4E4], ebp
        pop edi
        mov dword ptr ds : [esi+0x4EC], ebx
        mov dword ptr ds : [esi+0x4F0], ebx
        mov dword ptr ds : [esi+0x4F4], ebx
        mov byte ptr ds : [esi+0x4E8], dl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f852e0)
    }
}
