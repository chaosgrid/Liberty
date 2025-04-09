#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_53a960);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53a99c _public_53a99c
#define public_53a9ae _public_53a9ae

PROC_DECLARE(0x53a960, internal_53a960, public_53a960);
extern "C" NAKED register_t __cdecl internal_53a960()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xA0]
        test eax, eax
        jg public_53a9ae
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        and ecx, 0xFFFFFFF9
        add ecx, 8
        mov dword ptr ds : [esi+0xA0], ecx
        call public_54baf0
        test eax, eax
        je public_53a99c
        push esi
        push eax
        call public_45a490
        add esp, 8
        mov dword ptr ds : [esi+0x9C], eax
        pop esi
        ret 
        public_53a99c : nop
        mov dword ptr ds : [esi+0x9C], 0
        mov eax, dword ptr ds : [esi+0x9C]
        pop esi
        ret 
        public_53a9ae : nop
        dec eax
        mov dword ptr ds : [esi+0xA0], eax
        mov eax, dword ptr ds : [esi+0x9C]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x53a960)
    }
}

#undef public_53a99c
#undef public_53a9ae
