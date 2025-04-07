#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624530);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6624542 _public_6624542
#define public_6624574 _public_6624574
#define public_662457d _public_662457d
#define public_6624586 _public_6624586

PROC_DECLARE(0x6624530, internal_6624530, public_6624530);
extern "C" NAKED register_t __cdecl internal_6624530()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+8]
        cmp edi, eax
        mov esi, edi
        je public_6624586
        public_6624542 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, ebx
        push eax
        call public_6624530
        mov eax, dword ptr ds : [public_662b198]
        mov esi, dword ptr ds : [esi]
        cmp eax, 0x40
        jge public_6624574
        mov ecx, dword ptr ds : [public_662b18c]
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [public_662b198]
        inc eax
        mov dword ptr ds : [public_662b18c], edi
        mov dword ptr ds : [public_662b198], eax
        jmp public_662457d
        public_6624574 : nop
        push edi
        call public_66281d0
        add esp, 4
        public_662457d : nop
        mov eax, dword ptr ds : [ebx+8]
        mov edi, esi
        cmp esi, eax
        jne public_6624542
        public_6624586 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6624530)
    }
}

#undef public_6624542
#undef public_6624574
#undef public_662457d
#undef public_6624586
