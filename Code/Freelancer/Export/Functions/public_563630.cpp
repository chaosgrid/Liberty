#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_562930);
CLANG_FORWARD_PROC_SYMBOL(public_562fd0);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);

#define public_563659 _public_563659
#define public_563666 _public_563666
#define public_563691 _public_563691
#define public_5636a4 _public_5636a4
#define public_5636b9 _public_5636b9

PROC_DECLARE(0x563630, internal_563630, public_563630);
extern "C" NAKED register_t __cdecl internal_563630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF004
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        jne public_563666
        mov edx, dword ptr ds : [esi+0x340]
        cmp edx, ecx
        jne public_5636b9
        mov ecx, edx
        test ecx, ecx
        je public_563659
        push 0
        call public_57c7d0
        public_563659 : nop
        mov ecx, esi
        call public_562fd0
        mov al, 1
        pop esi
        ret 0xC
        public_563666 : nop
        cmp eax, 0xF003
        jne public_5636b9
        mov ecx, dword ptr ds : [esi+0x374]
        lea eax, ds:[esi+0x378]
        push eax
        call public_562930
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_5636a4
        push edi
        public_563691 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_563691
        pop edi
        public_5636a4 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov al, 1
        pop esi
        ret 0xC
        public_5636b9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        push eax
        mov ecx, esi
        call public_5a0840
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x563630)
    }
}

#undef public_563659
#undef public_563666
#undef public_563691
#undef public_5636a4
#undef public_5636b9
