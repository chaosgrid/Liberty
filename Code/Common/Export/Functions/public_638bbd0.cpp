#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_638baa0);
CLANG_FORWARD_PROC_SYMBOL(public_638bbd0);

#define public_638bc11 _public_638bc11
#define public_638bc24 _public_638bc24

PROC_DECLARE(0x638bbd0, internal_638bbd0, public_638bbd0);
extern "C" NAKED register_t __cdecl internal_638bbd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        push eax
        push ecx
        push edx
        call public_6386380
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        call dword ptr ds : [public_63992d8]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x14
        test eax, eax
        je public_638bc24
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638bc24
        public_638bc11 : nop
        push eax
        push edi
        call public_638baa0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_638bc11
        public_638bc24 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_636ecc0
        add esp, 4
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x638bbd0)
    }
}

#undef public_638bc11
#undef public_638bc24
