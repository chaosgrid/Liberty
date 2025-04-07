#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e130);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ee30);

#define public_6f4b857 _public_6f4b857
#define public_6f4b89b _public_6f4b89b

PROC_DECLARE(0x6f4b840, internal_6f4b840, public_6f4b840);
extern "C" NAKED register_t __cdecl internal_6f4b840()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jge public_6f4b857
        cmp esi, 0xFFFFFFFF
        je public_6f4b857
        push esi
        call public_6f4e130
        add esp, 4
        public_6f4b857 : nop
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        call public_6f4ee30
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        cmp edx, ecx
        pop esi
        jb public_6f4b89b
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4b89b : nop
        add dword ptr ds : [eax], 0x10
        jmp public_6f4edc0
        UNREACHABLE_TRAP(0x6f4b840)
    }
}

#undef public_6f4b857
#undef public_6f4b89b
