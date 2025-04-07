#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d5b5ef _public_6d5b5ef
#define public_6d5b5f7 _public_6d5b5f7
#define public_6d5b603 _public_6d5b603

PROC_DECLARE(0x6d5b5c0, internal_6d5b5c0, public_6d5b5c0);
extern "C" NAKED register_t __cdecl internal_6d5b5c0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_6d90400
        call public_6d59ea0
        mov ecx, dword ptr ds : [public_6d90404]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6d5b5ef
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d5b5ef
        lea eax, ss:[esp]
        jmp public_6d5b5f7
        public_6d5b5ef : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6d5b5f7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d5b603
        xor eax, eax
        add esp, 8
        ret 
        public_6d5b603 : nop
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d5b5c0)
    }
}

#undef public_6d5b5ef
#undef public_6d5b5f7
#undef public_6d5b603
