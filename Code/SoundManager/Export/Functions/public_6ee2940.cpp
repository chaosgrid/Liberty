#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7600);

#define public_6ee2a17 _public_6ee2a17
#define public_6ee2a21 _public_6ee2a21
#define public_6ee2a2a _public_6ee2a2a

PROC_DECLARE(0x6ee2940, internal_6ee2940, public_6ee2940);
extern "C" NAKED register_t __cdecl internal_6ee2940()
{
    __asm
    {
        sub esp, 0x40
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi+0x12C]
        push edi
        xor edi, edi
        or ebp, 0xFFFFFFFF
        cmp eax, edi
        je public_6ee2a2a
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x28]
        mov word ptr ss : [esp+0x14], 1
        mov word ptr ss : [esp+0x16], 2
        mov dword ptr ss : [esp+0x18], 0x5622
        mov dword ptr ss : [esp+0x1C], 0x15888
        mov word ptr ss : [esp+0x20], 4
        mov word ptr ss : [esp+0x22], 0x10
        mov word ptr ss : [esp+0x24], di
        call public_6ee1000
        mov eax, dword ptr ds : [esi+0x12C]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        cmp dword ptr ss : [esp+0x24], edi
        je public_6ee2a21
        mov esi, dword ptr ds : [esi+0x130]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_6ee917c @0x6ee29c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee917c
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        jne public_6ee2a21
        mov esi, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        call dword ptr ds : [edx+0x14]
        test byte ptr ss : [esp+0xC], 1
        je public_6ee2a17
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        push ecx
        push 0
        push 0
        push esi
        push edi
        push eax
        call dword ptr ds : [edx+0xC]
        xor ebp, ebp
        public_6ee2a17 : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ee2a21 : nop
        lea ecx, ss:[esp+0x24]
        call public_6ee7600
        public_6ee2a2a : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x40
        ret 0x18
        UNREACHABLE_TRAP(0x6ee2940)
    }
}

#undef public_6ee2a17
#undef public_6ee2a21
#undef public_6ee2a2a
