#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8f90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7980);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa83f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8750);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb21d1);

#define public_6fa78ae _public_6fa78ae
#define public_6fa78f0 _public_6fa78f0
#define public_6fa7906 _public_6fa7906

PROC_DECLARE(0x6fa77c0, internal_6fa77c0, public_6fa77c0);
extern "C" NAKED register_t __cdecl internal_6fa77c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb21d1 @0x6fa77c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb21d1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x9C
        mov eax, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3030]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x50], eax
        call ebp
        xor ebx, ebx
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [esp+0x5C], ebx
        mov byte ptr ss : [esp+0x60], 1
        mov byte ptr ss : [esp+0x61], bl
        mov byte ptr ss : [esp+0x62], bl
        mov byte ptr ss : [esp+0x63], bl
        mov dword ptr ss : [esp+0x64], 1
        call public_6ef8f90
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xB4], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call ebp
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x20], cl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x4C], bl
        mov ecx, dword ptr ss : [esp+0xC0]
        xor edx, edx
        mov dl, byte ptr ds : [esi+8]
        lea eax, ss:[esp+0x18]
        mov byte ptr ss : [esp+0xB4], 1
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_6fa7980
        test al, al
        je public_6fa78ae
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x50]
        push edx
        push 1
        push eax
        call public_6fa8750
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        je public_6fa78ae
        cmp dword ptr ss : [esp+0x18], ebx
        je public_6fa78ae
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        push eax
        call public_6fa83f0
        public_6fa78ae : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_6fa8fe0
        lea ecx, ss:[esp+0x6C]
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov edi, dword ptr ss : [esp+0x90]
        mov esi, dword ptr ss : [esp+0x8C]
        cmp esi, edi
        mov dword ptr ss : [esp+0xB4], 2
        je public_6fa7906
        lea esp, ss:[esp]
        public_6fa78f0 : nop
        push ebx
        mov ecx, esi
        call public_6fa8ee0
        add esi, 0x50
        cmp esi, edi
        jne public_6fa78f0
        mov esi, dword ptr ss : [esp+0x8C]
        public_6fa7906 : nop
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x80]
        add esp, 4
        mov dword ptr ss : [esp+0x8C], ebx
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x94], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0xC0], 0xFFFFFFFF
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x7C]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xB0]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA8
        ret 8
        UNREACHABLE_TRAP(0x6fa77c0)
    }
}

#undef public_6fa78ae
#undef public_6fa78f0
#undef public_6fa7906
