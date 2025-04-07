#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6b80);
CLANG_FORWARD_PROC_SYMBOL(public_6efc8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f69a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafcd0);

#define public_6f68de0 _public_6f68de0
#define public_6f68e0a _public_6f68e0a

PROC_DECLARE(0x6f68cf0, internal_6f68cf0, public_6f68cf0);
extern "C" NAKED register_t __cdecl internal_6f68cf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafcd0 @0x6f68cf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafcd0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        mov al, byte ptr ss : [esp+0x3C]
        push ebx
        push esi
        push edi
        push 0x50C
        mov esi, ecx
        mov byte ptr ss : [esp+0x20], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [esp+0x1C]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x30], edx
        mov byte ptr ss : [esp+0x34], al
        call public_6ef6b80
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebx
        mov edi, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push edx
        lea ecx, ss:[esp+0x38]
        call public_6f6a2e0
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], 1
        call public_6f69a40
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x4C], bl
        call public_6efc8c0
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x48], ecx
        je public_6f68e0a
        lea ecx, ds:[ecx]
        public_6f68de0 : nop
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f1f4b0
        cmp dword ptr ss : [esp+0x48], esi
        jne public_6f68de0
        mov eax, dword ptr ss : [esp+0x20]
        public_6f68e0a : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6f68cf0)
    }
}

#undef public_6f68de0
#undef public_6f68e0a
