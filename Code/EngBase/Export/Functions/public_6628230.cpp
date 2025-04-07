#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_662823c _public_662823c
#define public_6628250 _public_6628250

PROC_DECLARE(0x6628230, internal_6628230, public_6628230);
extern "C" NAKED register_t __cdecl internal_6628230()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6628250
        public_662823c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_662823c
        public_6628250 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6628230)
    }
}

#undef public_662823c
#undef public_6628250
