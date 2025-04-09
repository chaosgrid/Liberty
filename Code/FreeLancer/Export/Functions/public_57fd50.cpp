#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_492250);
CLANG_FORWARD_PROC_SYMBOL(public_57fd50);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5c41f0);

PROC_DECLARE(0x57fd50, internal_57fd50, public_57fd50);
extern "C" NAKED register_t __cdecl internal_57fd50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c41f0 @0x57fd52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c41f0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        call public_59f860
        lea ebp, ds:[esi+0x32C]
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x14], ebp
        call public_420d40
        lea ecx, ss:[ebp+0x14]
        mov byte ptr ss : [esp+0x2C], 1
        call public_492250
        mov dword ptr ss : [ebp], offset public_5d2efc
        mov dword ptr ss : [ebp+0x10], 0xFFFFFFFF
        lea ebp, ds:[esi+0x360]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x2C], 2
        call public_4215b0
        lea edi, ds:[esi+0x3A0]
        mov ecx, edi
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x3D0]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        call public_420d40
        lea ecx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0x2C], 3
        call public_492250
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea edi, ds:[esi+0x404]
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 4
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x444]
        mov ecx, edi
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x474]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        call public_420d40
        lea ecx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0x2C], 5
        call public_492250
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea edi, ds:[esi+0x4A8]
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 6
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x4E8]
        mov ecx, edi
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x518]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        call public_420d40
        lea ecx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0x2C], 7
        call public_492250
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea edi, ds:[esi+0x540]
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 8
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x570]
        mov ecx, edi
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea edi, ds:[esi+0x5B8]
        mov ecx, edi
        call public_4215b0
        lea ecx, ds:[esi+0x5F8]
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        call public_4215b0
        lea ecx, ds:[esi+0x628]
        mov dword ptr ds : [esi+0x624], ebx
        mov dword ptr ds : [esi+0x620], ebx
        mov dword ptr ds : [esi+0x61C], ebx
        call public_4215b0
        mov dword ptr ds : [esi+0x654], ebx
        mov dword ptr ds : [esi+0x650], ebx
        mov dword ptr ds : [esi+0x64C], ebx
        mov ecx, ebx
        lea eax, ds:[esi+0x354]
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, ebp
        mov dword ptr ds : [esi], offset public_5e4984
        mov dword ptr ds : [esi+0x7C], offset public_5e4978
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call public_4215b0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov eax, ebx
        lea edx, ds:[esi+0x390]
        mov dword ptr ds : [edx], eax
        mov ecx, ebx
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, ebx
        lea ecx, ds:[esi+0x3F8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea ebp, ds:[esi+0x404]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, ebp
        mov byte ptr ds : [esi+0x39C], bl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        call public_4215b0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov ecx, ebx
        lea eax, ds:[esi+0x434]
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, ebx
        lea edx, ds:[esi+0x49C]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        lea ebp, ds:[esi+0x4A8]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, ebp
        mov byte ptr ds : [esi+0x440], bl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [edx+8], eax
        call public_4215b0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov edx, ebx
        lea ecx, ds:[esi+0x4D8]
        mov dword ptr ds : [ecx], edx
        mov eax, ebx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        lea ebp, ds:[esi+0x540]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi+0x4E4], bl
        call public_4215b0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        lea ebp, ds:[esi+0x570]
        mov ecx, ebp
        call public_4215b0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov ecx, ebx
        lea eax, ds:[esi+0x5A0]
        mov dword ptr ds : [eax], ecx
        mov edx, ebx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, ebx
        lea edx, ds:[esi+0x5AC]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea ecx, ds:[esi+0x5E8]
        mov edx, ebx
        mov dword ptr ds : [ecx], edx
        mov eax, ebx
        mov dword ptr ds : [ecx+4], eax
        mov eax, 1
        mov dword ptr ds : [esi+0x660], eax
        mov dword ptr ds : [esi+0x668], eax
        pop edi
        mov byte ptr ds : [esi+0x5F4], bl
        mov dword ptr ds : [esi+0x658], ebx
        mov dword ptr ds : [esi+0x65C], ebx
        mov dword ptr ds : [esi+0x664], ebx
        mov byte ptr ds : [esi+0x66C], bl
        mov byte ptr ds : [esi+0x2D1], bl
        mov byte ptr ds : [esi+0x66D], bl
        mov byte ptr ds : [esi+0x674], bl
        mov byte ptr ds : [esi+0x675], bl
        mov byte ptr ds : [esi+0x676], bl
        mov byte ptr ds : [esi+0x677], bl
        mov byte ptr ds : [esi+0x678], bl
        mov byte ptr ds : [esi+0x679], bl
        mov byte ptr ds : [esi+0x67A], bl
        mov eax, esi
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x1C]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x57fd50)
    }
}
