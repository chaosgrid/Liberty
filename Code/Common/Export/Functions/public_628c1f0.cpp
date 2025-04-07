#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628c1f0);
CLANG_FORWARD_PROC_SYMBOL(public_634bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393559);

PROC_DECLARE(0x628c1f0, internal_628c1f0, public_628c1f0);
extern "C" NAKED register_t __cdecl internal_628c1f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393559 @0x628c1f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393559
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_639c288
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+4], offset public_639c2a0
        mov dword ptr ds : [esi+8], 1
        lea edi, ds:[esi+0xC]
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        call public_634bcb0
        mov eax, dword ptr ss : [esp+0x24]
        mov cl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], ebx
        mov byte ptr ds : [esi+0x1C], cl
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dl, byte ptr ss : [esp+0x24]
        mov al, byte ptr ss : [esp+0x24]
        push 0x14
        mov byte ptr ss : [esp+0x20], 3
        mov byte ptr ds : [esi+0x2C], dl
        mov byte ptr ds : [esi+0x2D], al
        mov byte ptr ds : [esi+0x38], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+0x34], eax
        mov byte ptr ds : [eax+0x11], 1
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [ecx], ebx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edx+8], ebx
        mov ebp, dword ptr ds : [esi+0x34]
        push 0x14
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x10], bl
        mov byte ptr ds : [eax+0x11], bl
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x3C], ebx
        add esp, 8
        mov dword ptr ds : [edi], offset public_639c3d4
        pop edi
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi], offset public_639c3bc
        mov dword ptr ds : [esi+4], offset public_639c3a4
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x628c1f0)
    }
}
