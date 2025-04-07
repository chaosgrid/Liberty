#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628d450);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_628a01f _public_628a01f
#define public_628a027 _public_628a027

PROC_DECLARE(0x6289ff0, internal_6289ff0, public_6289ff0);
extern "C" NAKED register_t __cdecl internal_6289ff0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fc098
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_628a01f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_628a01f
        lea eax, ss:[esp]
        jmp public_628a027
        public_628a01f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_628a027 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        lea ecx, ds:[eax+0x10]
        call public_628d450
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6289ff0)
    }
}

#undef public_628a01f
#undef public_628a027
