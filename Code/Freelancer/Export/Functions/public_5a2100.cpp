#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2100);
CLANG_FORWARD_PROC_SYMBOL(public_5a27e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b33f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5023);

PROC_DECLARE(0x5a2100, internal_5a2100, public_5a2100);
extern "C" NAKED register_t __cdecl internal_5a2100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5023 @0x5a2102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5023
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
/*FIXUP push offset _public_5a27e0 @0x5a2184*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a27e0
/*FIXUP push offset _public_5b33f0 @0x5a2189*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b33f0
        push 0x100
        push 4
        lea ecx, ds:[esi+0x48C]
        push ecx
        mov dword ptr ss : [esp+0x28], ebx
        call public_5b7fba
        mov dword ptr ds : [esi+0x890], ebx
        mov dword ptr ds : [esi+0x894], ebx
        mov cl, 1
        or eax, 0xFFFFFFFF
/*FIXUP push offset public_5d1ea8 @0x5a21b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1ea8
        mov byte ptr ss : [esp+0x18], cl
        mov dword ptr ds : [esi], offset public_5e5f9c
        mov dword ptr ds : [esi+0x8AC], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x8A4], ebx
        mov dword ptr ds : [esi+0x8A8], 0x10
        mov dword ptr ds : [esi+0x88C], ebx
        mov byte ptr ds : [esi+0x8A0], cl
        mov byte ptr ds : [esi+0x8A1], bl
        mov byte ptr ds : [esi+0x8A2], cl
        call public_4177b0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x84], eax
        mov edx, dword ptr ds : [public_5e5f88]
        add esp, 4
        mov dword ptr ds : [esi+0x88], edx
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5a2100)
    }
}
