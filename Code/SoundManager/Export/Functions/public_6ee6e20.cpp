#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee6d50);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6e20);

#define public_6ee6e9f _public_6ee6e9f
#define public_6ee6eb9 _public_6ee6eb9
#define public_6ee6ed3 _public_6ee6ed3
#define public_6ee6eed _public_6ee6eed
#define public_6ee6f07 _public_6ee6f07
#define public_6ee6f21 _public_6ee6f21

PROC_DECLARE(0x6ee6e20, internal_6ee6e20, public_6ee6e20);
extern "C" NAKED register_t __cdecl internal_6ee6e20()
{
    __asm
    {
        sub esp, 0x28
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push edi
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x14], 0x3F800000
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jl public_6ee6e9f
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        call dword ptr ds : [eax+0x34]
        public_6ee6e9f : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edi
        call dword ptr ds : [eax+0x10]
        test eax, eax
        jl public_6ee6eb9
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call dword ptr ds : [edx+0x3C]
        public_6ee6eb9 : nop
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0xC]
        push edx
        push edi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jl public_6ee6ed3
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call dword ptr ds : [eax+0x40]
        public_6ee6ed3 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+8]
        push eax
        push edi
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jl public_6ee6eed
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        call dword ptr ds : [ecx+0x44]
        public_6ee6eed : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        push edi
        call dword ptr ds : [eax+0x1C]
        test eax, eax
        jl public_6ee6f07
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [edx+0x48]
        public_6ee6f07 : nop
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+8]
        push edx
        push edi
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jl public_6ee6f21
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x4C]
        public_6ee6f21 : nop
        mov ecx, esi
        call public_6ee6d50
        pop edi
        pop esi
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6ee6e20)
    }
}

#undef public_6ee6e9f
#undef public_6ee6eb9
#undef public_6ee6ed3
#undef public_6ee6eed
#undef public_6ee6f07
#undef public_6ee6f21
