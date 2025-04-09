#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_567020);
CLANG_FORWARD_PROC_SYMBOL(public_591ae0);
CLANG_FORWARD_PROC_SYMBOL(public_591e30);
CLANG_FORWARD_PROC_SYMBOL(public_594580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5c220d);

PROC_DECLARE(0x567020, internal_567020, public_567020);
extern "C" NAKED register_t __cdecl internal_567020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c220d @0x567022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c220d
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
        push edi
        lea edi, ds:[esi+0x28C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], esi
        call public_594580
        push eax
        mov ecx, esi
        call public_591ae0
        xor ebx, ebx
        lea ebp, ds:[esi+0x8C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [ebp], bl
        call public_591e30
        mov dword ptr ds : [esi+0x2B8], ebx
        mov dword ptr ds : [esi+0x2BC], ebx
        mov dword ptr ds : [esi+0x2C0], ebx
        mov dword ptr ds : [esi+0x2C4], ebx
        mov dword ptr ds : [esi+0x2C8], ebx
        mov dword ptr ds : [esi+0x2CC], ebx
        mov dword ptr ds : [esi+0x2D0], ebx
        mov dword ptr ds : [esi+0x2D4], ebx
        mov dword ptr ds : [esi+0x2D8], ebx
        mov dword ptr ds : [esi+0x2DC], ebx
        mov dword ptr ds : [esi+0x2E0], ebx
        mov dword ptr ds : [esi+0x2E4], ebx
        mov dword ptr ds : [esi+0x2E8], ebx
        mov eax, dword ptr ds : [public_5c62c4]
        mov ecx, dword ptr ds : [public_5c62dc]
        push eax
        push ecx
        push 5
        push 0xC
        lea edx, ds:[esi+0x2F0]
        push edx
        mov byte ptr ss : [esp+0x34], 0xE
        call public_5b7fba
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x32C]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xF
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x338]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x10
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x20], 0x11
        lea edi, ds:[esi+0x344]
        mov dl, byte ptr ss : [esp+0x13]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x350]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x12
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x35C]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x13
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x368]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x14
        mov byte ptr ds : [edi], dl
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x374]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x15
        mov byte ptr ds : [edi], al
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [esi+0x381]
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x380], bl
        and ecx, 0xFF52EAF5
        or ecx, 0x52EAF5
        mov dword ptr ds : [esi+0x381], ecx
        mov byte ptr ds : [esi+0x399], bl
        mov byte ptr ds : [esi+0x5A0], dl
        mov dword ptr ds : [esi+0x5A4], ebx
        mov dword ptr ds : [esi+0x5A8], ebx
        mov dword ptr ds : [esi+0x5AC], ebx
        mov byte ptr ds : [esi+0x5B0], al
        mov dword ptr ds : [esi+0x5B4], ebx
        mov dword ptr ds : [esi+0x5B8], ebx
        mov dword ptr ds : [esi+0x5BC], ebx
        lea edx, ds:[esi+0x394]
        xor ecx, ecx
        mov dword ptr ds : [esi], offset public_5e2934
        mov dword ptr ds : [esi+0x7C], offset public_5e291c
        mov dword ptr ds : [esi+0x80], offset public_5e2914
        mov byte ptr ds : [esi+0x5F8], bl
        mov byte ptr ds : [esi+0x5F9], bl
        mov dword ptr ds : [esi+0x2B4], ebx
        mov dword ptr ds : [esi+0x390], ebx
        mov byte ptr ss : [esp+0x20], 0x17
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
/*FIXUP push offset public_67bd40 @0x56725a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bd40
        mov ecx, ebp
        mov dword ptr ds : [esi+0x59C], ebx
        mov dword ptr ds : [esi+0x2EC], ebx
        call dword ptr ds : [public_5c63cc]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x567020)
    }
}
