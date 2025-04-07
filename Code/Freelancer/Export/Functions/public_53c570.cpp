#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4320);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_548eb0);

#define public_53c59c _public_53c59c
#define public_53c5c0 _public_53c5c0

PROC_DECLARE(0x53c570, internal_53c570, public_53c570);
extern "C" NAKED register_t __cdecl internal_53c570()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53c59c
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [esi+8]
        push 0
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+4]
        push eax
        call dword ptr ds : [edx+0x38]
        public_53c59c : nop
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_548eb0
        add esp, 4
        test al, al
        je public_53c5c0
        mov edx, dword ptr ds : [esi+8]
        xor eax, eax
        mov ax, word ptr ds : [esi+4]
        push edx
        push eax
        push 0
        call public_4c4320
        add esp, 0xC
        public_53c5c0 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x53c570)
    }
}

#undef public_53c59c
#undef public_53c5c0
