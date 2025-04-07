#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee6410);

#define public_6ee6467 _public_6ee6467
#define public_6ee6472 _public_6ee6472
#define public_6ee6494 _public_6ee6494

PROC_DECLARE(0x6ee6410, internal_6ee6410, public_6ee6410);
extern "C" NAKED register_t __cdecl internal_6ee6410()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx]
        push 2
        push 0
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push 0
        push 0
        push ebx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jl public_6ee6494
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        jbe public_6ee6467
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        jmp public_6ee6472
        public_6ee6467 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        public_6ee6472 : nop
        push 0
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push 0
        push ecx
        push edx
        push ebx
        call dword ptr ds : [eax+0x4C]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 
/*FIXUP public_6ee6494 : nop
        push offset public_6eeac28 @0x6ee6494*/
  FIXUP public_6ee6494 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeac28
        push 0xD03
/*FIXUP push offset public_6eea070 @0x6ee649e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee64a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ee6410)
    }
}

#undef public_6ee6467
#undef public_6ee6472
#undef public_6ee6494
