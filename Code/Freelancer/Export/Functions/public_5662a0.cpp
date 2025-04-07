#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5662a0);
CLANG_FORWARD_PROC_SYMBOL(public_566380);
CLANG_FORWARD_PROC_SYMBOL(public_59ce40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2053);

PROC_DECLARE(0x5662a0, internal_5662a0, public_5662a0);
extern "C" NAKED register_t __cdecl internal_5662a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c2053 @0x5662a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2053
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
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x60], ebx
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
        mov edx, dword ptr ds : [public_67dcd4]
        inc edx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [public_67dcd4], edx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x7C], offset public_5cbed8
/*FIXUP push offset _public_59ce40 @0x56632f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ce40
/*FIXUP push offset _public_566380 @0x566334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_566380
        push 5
        push 0xF0
        lea ecx, ds:[esi+0x84]
        push ecx
        mov byte ptr ss : [esp+0x28], 1
        call public_5b7fba
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x550], ebx
        mov dword ptr ds : [esi+0x54C], ebx
        mov dword ptr ds : [esi], offset public_5e27cc
        mov dword ptr ds : [esi+0x7C], offset public_5e27c4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5662a0)
    }
}
