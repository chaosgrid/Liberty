#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3520);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41d910 _public_41d910
#define public_41d956 _public_41d956

PROC_DECLARE(0x41d900, internal_41d900, public_41d900);
extern "C" NAKED register_t __cdecl internal_41d900()
{
    __asm
    {
        mov ecx, offset public_61682d
        jmp public_41d910
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_41d910 : nop
        push esi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_41d956
        push ecx
        push ecx
        push eax
        mov dword ptr ds : [eax+4], offset public_5c94ec
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_5c94e4
        mov dword ptr ds : [eax+8], 0x5DD
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        public_41d956 : nop
        push ecx
        xor eax, eax
        push ecx
        push eax
        call public_5b3520
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41d900)
    }
}

#undef public_41d910
#undef public_41d956
