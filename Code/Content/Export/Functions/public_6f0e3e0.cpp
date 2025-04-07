#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);
CLANG_FORWARD_PROC_SYMBOL(public_6f0e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e800);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ed80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e290);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8bb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad5a0);

PROC_DECLARE(0x6f0e3e0, internal_6f0e3e0, public_6f0e3e0);
extern "C" NAKED register_t __cdecl internal_6f0e3e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad5a0 @0x6f0e3e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad5a0
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
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6fb385c
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ss : [esp+0x28]
        xor ebx, ebx
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [ebp], ecx
        lea edi, ds:[esi+0x1C]
        push ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x18], bl
        mov byte ptr ds : [esi+0x19], bl
        push ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ds : [edi], dl
        call public_6fa8bb0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x30], bl
        mov dword ptr ds : [esi+0x34], 0xBF800000
        call dword ptr ds : [public_6fb3030]
        mov al, byte ptr ss : [esp+0x28]
        mov dl, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x3C]
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov byte ptr ds : [esi+0x58], bl
        mov byte ptr ds : [esi+0x59], bl
        mov byte ptr ds : [esi+0x5A], bl
        mov byte ptr ds : [esi+0x5B], bl
        mov byte ptr ds : [esi+0x5C], bl
        mov byte ptr ds : [esi+0x5D], bl
        mov byte ptr ds : [esi+0x5E], bl
        mov byte ptr ds : [esi+0x5F], bl
        mov byte ptr ds : [esi+0x60], bl
        mov byte ptr ds : [esi+0x61], bl
        mov byte ptr ds : [esi+0x62], bl
        mov byte ptr ds : [esi+0x63], bl
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov byte ptr ds : [esi+0x70], bl
        mov byte ptr ds : [esi+0x71], bl
        mov byte ptr ds : [esi+0x72], bl
        mov byte ptr ds : [esi+0x73], bl
        mov byte ptr ds : [esi+0x74], bl
        mov byte ptr ds : [esi+0x75], bl
        mov byte ptr ds : [esi+0x76], bl
        mov byte ptr ds : [esi+0x77], bl
        mov byte ptr ds : [esi+0x78], bl
        mov byte ptr ds : [esi+0x79], bl
        mov byte ptr ds : [esi+0x7A], bl
        mov byte ptr ds : [esi+0x7B], bl
        mov byte ptr ds : [esi+0x7C], bl
        mov byte ptr ds : [esi+0x7D], bl
        mov al, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x8C]
        mov dword ptr ds : [esi+0x88], ebx
        mov byte ptr ss : [esp+0x20], 4
        mov byte ptr ds : [edi], al
        push ebx
        push ebx
        mov ecx, edi
        call public_6f1e5b0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x98]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 5
        call public_6f1e670
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x28]
        mov al, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0xA4]
        mov byte ptr ss : [esp+0x20], 6
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov cl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0xB8]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 7
        call public_6f1e800
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0xC4]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 8
        mov byte ptr ds : [edi], dl
        call public_6f1e8e0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0xD0]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 9
        mov byte ptr ds : [edi], al
        call public_6f1e9c0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0xDC], cl
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov dword ptr ds : [esi+0xE8], ebx
        lea edx, ss:[esp+0x28]
        push edx
        push 1
        lea eax, ss:[esp+0x19]
        lea ecx, ds:[esi+0xEC]
        push eax
        mov byte ptr ss : [esp+0x2C], 0xB
        call public_6f1f4f0
        lea edx, ss:[esp+0x12]
        push edx
        mov byte ptr ss : [esp+0x24], 0xC
        lea ecx, ds:[esi+0x100]
        push ebx
        lea eax, ss:[esp+0x1B]
        push eax
        call public_6f2d2f0
        mov dl, byte ptr ss : [esp+0x28]
        mov al, byte ptr ss : [esp+0x28]
        lea ecx, ds:[esi+0x114]
        mov byte ptr ss : [esp+0x20], 0xD
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f2e290
        mov cl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x128]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xE
        call public_6f1e800
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x134]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xF
        mov byte ptr ds : [edi], dl
        call public_6ed0440
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x140]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x10
        mov byte ptr ds : [edi], al
        call public_6ed0440
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x14C]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x11
        call public_6f1ed80
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x28]
        lea edi, ds:[esi+0x158]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0x12
        mov byte ptr ds : [edi], dl
        call public_6ed0440
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x164], al
        mov dword ptr ds : [esi+0x168], ebx
        mov dword ptr ds : [esi+0x16C], ebx
        mov dword ptr ds : [esi+0x170], ebx
        mov cl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [esi+0x174], cl
        mov dword ptr ds : [esi+0x178], ebx
        mov dword ptr ds : [esi+0x17C], ebx
        mov dword ptr ds : [esi+0x180], ebx
        mov byte ptr ss : [esp+0x20], 0x15
        lea ecx, ds:[esi+0x184]
        lea edx, ss:[esp+0x28]
        push edx
        push ebx
        lea eax, ss:[esp+0x1B]
        push eax
        call public_6f1f0c0
        lea ecx, ss:[esp+0x12]
        push ecx
        lea edx, ss:[esp+0x15]
        push edx
        lea ecx, ds:[esi+0x198]
        mov byte ptr ss : [esp+0x28], 0x16
        call public_6f1d4f0
        push 0x3D088889
        push ebp
        mov byte ptr ss : [esp+0x28], 0x17
        mov dword ptr ds : [esi], offset public_6fb85d8
        mov dword ptr ds : [esi+0x14], 0x3D088889
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0x1AC], 3
        call dword ptr ds : [public_6fb36a4]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        pop edi
        mov byte ptr ds : [esi+0x81], bl
        mov byte ptr ds : [esi+0x80], 7
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6f0e3e0)
    }
}
