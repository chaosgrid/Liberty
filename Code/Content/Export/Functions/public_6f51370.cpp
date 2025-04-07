#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f5139c _public_6f5139c
#define public_6f513a4 _public_6f513a4
#define public_6f513b0 _public_6f513b0

PROC_DECLARE(0x6f51370, internal_6f51370, public_6f51370);
extern "C" NAKED register_t __cdecl internal_6f51370()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fd0ca4
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0ca8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f5139c
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f5139c
        lea eax, ss:[esp+0xC]
        jmp public_6f513a4
        public_6f5139c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f513a4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6f513b0
        add eax, 0x10
        pop ecx
        ret 
        public_6f513b0 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f51370)
    }
}

#undef public_6f5139c
#undef public_6f513a4
#undef public_6f513b0
