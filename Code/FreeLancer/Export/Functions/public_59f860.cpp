#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4ed8);

PROC_DECLARE(0x59f860, internal_59f860, public_59f860);
extern "C" NAKED register_t __cdecl internal_59f860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4ed8 @0x59f862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4ed8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xF8
        or al, 8
        mov dword ptr ds : [esi], offset public_5d5544
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov byte ptr ds : [esi+0x6C], al
        inc dword ptr ds : [public_67dcd4]
        lea edi, ds:[esi+0x80]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [esi+0x7C], offset public_5e5efc
        call public_420d40
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x1C], eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x318], eax
        mov dword ptr ds : [esi+0x308], eax
        mov dword ptr ds : [esi+0x2F8], eax
        mov dword ptr ds : [esi+0x314], ebx
        mov dword ptr ds : [esi+0x310], ebx
        mov dword ptr ds : [esi+0x30C], ebx
        mov dword ptr ds : [esi+0x304], ebx
        mov dword ptr ds : [esi+0x300], ebx
        mov dword ptr ds : [esi+0x2FC], ebx
        mov dword ptr ds : [esi+0x324], ebx
        mov dword ptr ds : [esi+0x320], ebx
        mov dword ptr ds : [esi+0x31C], ebx
        mov edx, ebx
        lea ecx, ds:[esi+0xA8]
        mov dword ptr ds : [ecx], edx
        mov eax, ebx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea eax, ds:[esi+0xB4]
        mov ecx, ebx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi], offset public_5e5e44
        mov dword ptr ds : [esi+0x7C], offset public_5e5e38
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi+0x2D0], bl
        mov byte ptr ds : [esi+0x2D1], bl
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0x2EC], ebx
        mov dword ptr ds : [esi+0x2F0], ebx
        mov al, 1
        or byte ptr ds : [esi+0x2F4], al
        mov byte ptr ds : [esi+0x2D3], al
        mov eax, ebx
        lea edx, ds:[esi+0xC0]
        mov dword ptr ds : [edx], eax
        mov ecx, ebx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        lea ecx, ds:[esi+0x2E0]
        mov edx, ebx
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0x18], 0x461C4000
        mov edx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x328], bl
        mov byte ptr ds : [esi+0xD0], bl
        mov byte ptr ds : [esi+0x1D0], bl
        mov byte ptr ds : [esi+0x2D2], bl
        pop edi
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, esi
        pop esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0xC], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x59f860)
    }
}
