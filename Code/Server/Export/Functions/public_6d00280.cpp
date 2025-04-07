#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d0028f _public_6d0028f
#define public_6d002bb _public_6d002bb
#define public_6d002c3 _public_6d002c3
#define public_6d002cd _public_6d002cd

PROC_DECLARE(0x6d00280, internal_6d00280, public_6d00280);
extern "C" NAKED register_t __cdecl internal_6d00280()
{
    __asm
    {
        push ecx
        test dword ptr ss : [esp+8], 0x3FFFFFFF
        jne public_6d0028f
        xor eax, eax
        pop ecx
        ret 
        public_6d0028f : nop
        lea eax, ss:[esp+8]
        push eax
        mov ecx, offset public_6d8da2c
        call public_6d59ea0
        mov ecx, dword ptr ds : [public_6d8da30]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_6d002bb
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d002bb
        lea eax, ss:[esp]
        jmp public_6d002c3
        public_6d002bb : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6d002c3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d002cd
        xor eax, eax
        pop ecx
        ret 
        public_6d002cd : nop
        add eax, 0x10
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d00280)
    }
}

#undef public_6d0028f
#undef public_6d002bb
#undef public_6d002c3
#undef public_6d002cd
