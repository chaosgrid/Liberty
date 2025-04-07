#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d970);
CLANG_FORWARD_PROC_SYMBOL(public_6fa10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1a8d);

#define public_6f9d9f0 _public_6f9d9f0

PROC_DECLARE(0x6f9d970, internal_6f9d970, public_6f9d970);
extern "C" NAKED register_t __cdecl internal_6f9d970()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1a8d @0x6f9d972*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1a8d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fbd4fc
        mov al, byte ptr ds : [esi+4]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ss : [esp+0x20], 2
        je public_6f9d9f0
        mov byte ptr ds : [esi+4], bl
        mov byte ptr ds : [esi+5], bl
        mov dword ptr ds : [esi+8], 0xFFFFFFFF
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        lea edi, ds:[esi+0xC]
        push ebp
        push ecx
        push eax
        push eax
        call public_6f6a640
        mov ebp, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ebp
        mov ecx, edi
        call public_6ea1490
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x1C]
        push eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6fa10b0
        pop ebp
        public_6f9d9f0 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x1C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 1
        call public_6fa10b0
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6fa8fe0
        mov dword ptr ds : [edi+8], ebx
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        pop edi
        pop esi
        mov dword ptr ds : [public_6fcf25c], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f9d970)
    }
}

#undef public_6f9d9f0
