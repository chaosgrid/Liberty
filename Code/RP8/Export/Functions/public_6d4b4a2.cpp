#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4afa6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b373);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b4a2);

#define public_6d4b4ce _public_6d4b4ce

PROC_DECLARE(0x6d4b4a2, internal_6d4b4a2, public_6d4b4a2);
extern "C" NAKED register_t __cdecl internal_6d4b4a2()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push 0x58
        push 1
        push esi
        call dword ptr ds : [eax]
        add esp, 0xC
        mov dword ptr ds : [esi+0x194], eax
        push 4
        pop ecx
        mov dword ptr ds : [eax], offset _public_6d4b373
        mov dword ptr ds : [eax+4], offset _public_6d4afa6
        add eax, 0x34
        pop esi
        public_6d4b4ce : nop
        and dword ptr ds : [eax+0x10], 0
        and dword ptr ds : [eax], 0
        add eax, 4
        dec ecx
        jne public_6d4b4ce
        ret 
        UNREACHABLE_TRAP(0x6d4b4a2)
    }
}

#undef public_6d4b4ce
