#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_562930);

#define public_563567 _public_563567
#define public_56357a _public_56357a
#define public_56358f _public_56358f

PROC_DECLARE(0x563530, internal_563530, public_563530);
extern "C" NAKED register_t __cdecl internal_563530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        test byte ptr ds : [eax], 2
        jne public_56358f
        cmp dword ptr ss : [esp+8], 0x1B
        jne public_56358f
        lea ecx, ds:[esi+0x378]
        push ecx
        mov ecx, dword ptr ds : [esi+0x374]
        call public_562930
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_56357a
        push edi
        public_563567 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_563567
        pop edi
        public_56357a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov al, 1
        pop esi
        ret 8
        public_56358f : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x563530)
    }
}

#undef public_563567
#undef public_56357a
#undef public_56358f
