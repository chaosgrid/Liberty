#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f84d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f88240);
CLANG_FORWARD_PROC_SYMBOL(public_6f891a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f89400);
CLANG_FORWARD_PROC_SYMBOL(public_6f93280);
CLANG_FORWARD_PROC_SYMBOL(public_6f93430);
CLANG_FORWARD_PROC_SYMBOL(public_6f93640);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0dac);

PROC_DECLARE(0x6f88240, internal_6f88240, public_6f88240);
extern "C" NAKED register_t __cdecl internal_6f88240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0dac @0x6f88242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0dac
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x1C]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_6f89400
        mov ecx, dword ptr ds : [public_6fcf254]
        lea edi, ds:[esi+0xB8]
        push ecx
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_6fb3254]
        mov dl, byte ptr ss : [esp+0x2C]
        lea ebp, ds:[edi+0x10]
        push ebx
        mov byte ptr ds : [edi+0xC], bl
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ss : [ebp], dl
        call public_6f93640
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        lea eax, ss:[esp+0x2C]
        push eax
        push ebx
        lea edx, ss:[esp+0x1B]
        lea ecx, ds:[edi+0x20]
        push edx
        mov byte ptr ss : [esp+0x30], 2
        call public_6f1f4f0
        mov dword ptr ds : [edi+0x1C], offset public_6fbc6cc
        mov dword ptr ds : [edi], offset public_6fbc6ac
        lea edi, ds:[esi+0xEC]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 3
        mov dword ptr ss : [esp+0x18], edi
        call public_6f84d70
        lea ecx, ds:[edi+0x34]
        mov byte ptr ss : [esp+0x24], 4
        call public_6eac620
        or ebp, 0xFFFFFFFF
        mov dword ptr ds : [edi+0x50], ebx
        mov dword ptr ds : [edi+0x54], ebp
        mov dword ptr ds : [edi], offset public_6fbc8dc
        mov byte ptr ds : [edi+0xC], bl
        mov eax, dword ptr ds : [public_6fcf254]
        lea edi, ds:[esi+0x144]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_6fb3254]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x28], 6
        mov byte ptr ds : [edi+0xC], bl
        call public_6f93280
        lea ecx, ds:[edi+0x1C]
        mov byte ptr ss : [esp+0x24], 7
        call public_6f891a0
        mov dword ptr ds : [edi], offset public_6fbc6ac
        lea edx, ss:[esp+0x13]
        mov byte ptr ss : [esp+0x24], 8
        push edx
        lea ecx, ds:[edi+0x40]
        call public_6f93430
        mov dword ptr ds : [edi], offset public_6fbc8bc
        lea edi, ds:[esi+0x190]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 9
        mov dword ptr ss : [esp+0x18], edi
        call public_6f84d70
        lea ecx, ds:[edi+0x34]
        mov byte ptr ss : [esp+0x24], 0xA
        call public_6eac620
        mov dword ptr ds : [edi], offset public_6fbc89c
        lea edi, ds:[esi+0x1E0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 0xB
        mov dword ptr ss : [esp+0x2C], edi
        call public_6eac680
        lea ecx, ds:[edi+0x18]
        mov byte ptr ss : [esp+0x24], 0xC
        call public_6eac680
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x30], ebx
        mov dword ptr ds : [edi+0x34], ebp
        pop edi
        mov dword ptr ds : [esi], offset public_6fbc898
        mov dword ptr ds : [esi+4], offset public_6fbc88c
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f88240)
    }
}
