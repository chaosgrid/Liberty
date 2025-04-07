#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807b80);
CLANG_FORWARD_PROC_SYMBOL(public_6808690);

#define public_68086b9 _public_68086b9
#define public_68086e5 _public_68086e5
#define public_68086f9 _public_68086f9

PROC_DECLARE(0x6808690, internal_6808690, public_6808690);
extern "C" NAKED register_t __cdecl internal_6808690()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6807b80
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], 1
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        cmp eax, 0x2C
        jne public_68086e5
        public_68086b9 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        inc eax
        push esi
        mov dword ptr ds : [edi], eax
        call public_6807630
        push esi
        call public_6806a20
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call public_6807b80
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x14
        cmp eax, 0x2C
        je public_68086b9
        public_68086e5 : nop
        cmp dword ptr ss : [esp+8], 4
        jne public_68086f9
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], eax
        pop edi
        pop esi
        add esp, 8
        ret 
        public_68086f9 : nop
        lea ecx, ss:[esp+8]
        push ecx
        push esi
        call public_6807630
        add esp, 8
        mov dword ptr ds : [edi+4], 0
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6808690)
    }
}

#undef public_68086b9
#undef public_68086e5
#undef public_68086f9
