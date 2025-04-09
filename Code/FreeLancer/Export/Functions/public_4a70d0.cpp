#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4a70eb _public_4a70eb
#define public_4a7100 _public_4a7100
#define public_4a7113 _public_4a7113
#define public_4a7122 _public_4a7122

PROC_DECLARE(0x4a70d0, internal_4a70d0, public_4a70d0);
extern "C" NAKED register_t __cdecl internal_4a70d0()
{
    __asm
    {
        push edi
        mov edi, ecx
        call public_5a17b0
        call public_41dd90
        test al, al
        jne public_4a70eb
        push 1
        call public_41dda0
        add esp, 4
        public_4a70eb : nop
        mov al, byte ptr ds : [edi+0x331]
        test al, al
        je public_4a7122
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4a7113
        push esi
        lea ecx, ds:[ecx]
        public_4a7100 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4a7100
        pop esi
        public_4a7113 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_4a7122 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4a70d0)
    }
}

#undef public_4a70eb
#undef public_4a7100
#undef public_4a7113
#undef public_4a7122
