#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4faa0);

#define public_6d4fabd _public_6d4fabd
#define public_6d4fae6 _public_6d4fae6

PROC_DECLARE(0x6d4faa0, internal_6d4faa0, public_6d4faa0);
extern "C" NAKED register_t __cdecl internal_6d4faa0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x264]
        push eax
        call dword ptr ds : [public_6d643c0]
        add esp, 4
        test eax, eax
        jne public_6d4fabd
        xor al, al
        pop esi
        pop ecx
        ret 
        public_6d4fabd : nop
        mov ecx, dword ptr ds : [eax+0x100]
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ds:[esi+0x278]
        call dword ptr ds : [public_6d643f8]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6d4fae6
        mov eax, 1
        pop esi
        pop ecx
        ret 
        public_6d4fae6 : nop
        xor eax, eax
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d4faa0)
    }
}

#undef public_6d4fabd
#undef public_6d4fae6
