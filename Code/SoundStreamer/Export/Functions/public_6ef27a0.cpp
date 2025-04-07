#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef10b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1df0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef24f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef27a0);

#define public_6ef27b6 _public_6ef27b6
#define public_6ef27d9 _public_6ef27d9
#define public_6ef27f3 _public_6ef27f3
#define public_6ef27f8 _public_6ef27f8

PROC_DECLARE(0x6ef27a0, internal_6ef27a0, public_6ef27a0);
extern "C" NAKED register_t __cdecl internal_6ef27a0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        cmp eax, 3
        je public_6ef27b6
        cmp eax, 2
        jne public_6ef27f8
        public_6ef27b6 : nop
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_6ef10b0
        cmp eax, dword ptr ds : [esi+0xB4]
        jb public_6ef27f8
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        jbe public_6ef27d9
        mov ecx, eax
        public_6ef27d9 : nop
        test ecx, ecx
        jbe public_6ef27f8
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        push ecx
        mov ecx, esi
        je public_6ef27f3
        call public_6ef24f0
        pop esi
        add esp, 8
        ret 4
        public_6ef27f3 : nop
        call public_6ef1df0
        public_6ef27f8 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ef27a0)
    }
}

#undef public_6ef27b6
#undef public_6ef27d9
#undef public_6ef27f3
#undef public_6ef27f8
