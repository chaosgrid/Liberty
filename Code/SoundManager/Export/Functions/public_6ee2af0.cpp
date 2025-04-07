#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7600);

#define public_6ee2bc2 _public_6ee2bc2
#define public_6ee2bcc _public_6ee2bcc
#define public_6ee2bd5 _public_6ee2bd5

PROC_DECLARE(0x6ee2af0, internal_6ee2af0, public_6ee2af0);
extern "C" NAKED register_t __cdecl internal_6ee2af0()
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
        je public_6ee2bd5
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
        je public_6ee2bcc
        mov esi, dword ptr ds : [esi+0x130]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x50]
        push ecx
/*FIXUP push offset public_6ee917c @0x6ee2b76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee917c
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        jne public_6ee2bcc
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
        test byte ptr ss : [esp+0xC], 2
        je public_6ee2bc2
        mov ecx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        push 0
        push 0
        push esi
        push edi
        push eax
        call dword ptr ds : [edx+0x10]
        xor ebp, ebp
        public_6ee2bc2 : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ee2bcc : nop
        lea ecx, ss:[esp+0x24]
        call public_6ee7600
        public_6ee2bd5 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x40
        ret 0x14
        UNREACHABLE_TRAP(0x6ee2af0)
    }
}

#undef public_6ee2bc2
#undef public_6ee2bcc
#undef public_6ee2bd5
