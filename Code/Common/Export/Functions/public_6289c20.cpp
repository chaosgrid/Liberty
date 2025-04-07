#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289c20);
CLANG_FORWARD_PROC_SYMBOL(public_628d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6289c4f _public_6289c4f
#define public_6289c57 _public_6289c57
#define public_6289c63 _public_6289c63

PROC_DECLARE(0x6289c20, internal_6289c20, public_6289c20);
extern "C" NAKED register_t __cdecl internal_6289c20()
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
        je public_6289c4f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6289c4f
        lea eax, ss:[esp]
        jmp public_6289c57
        public_6289c4f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6289c57 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6289c63
        xor eax, eax
        add esp, 8
        ret 
        public_6289c63 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        lea ecx, ds:[eax+0x10]
        call public_628d1a0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6289c20)
    }
}

#undef public_6289c4f
#undef public_6289c57
#undef public_6289c63
