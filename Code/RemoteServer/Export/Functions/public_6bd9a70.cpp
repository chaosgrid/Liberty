#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd1050);
CLANG_FORWARD_PROC_SYMBOL(public_6bda190);

#define public_6bd9a82 _public_6bd9a82
#define public_6bd9a97 _public_6bd9a97
#define public_6bd9aa3 _public_6bd9aa3

PROC_DECLARE(0x6bd9a70, internal_6bd9a70, public_6bd9a70);
extern "C" NAKED register_t __cdecl internal_6bd9a70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_6c13a04]
        test ecx, ecx
        je public_6bd9a82
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        public_6bd9a82 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6bd9a97
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0xC], 0
        public_6bd9a97 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6bd9aa3
        call public_6bda190
        public_6bd9aa3 : nop
        add esi, 0x10
        push esi
        call dword ptr ds : [public_6c0b138]
        mov eax, dword ptr ds : [public_6c13a04]
        push eax
        call public_6bd1050
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd9a70)
    }
}

#undef public_6bd9a82
#undef public_6bd9a97
#undef public_6bd9aa3
