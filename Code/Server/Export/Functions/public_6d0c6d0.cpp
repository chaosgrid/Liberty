#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);

#define public_6d0c716 _public_6d0c716
#define public_6d0c71c _public_6d0c71c

PROC_DECLARE(0x6d0c6d0, internal_6d0c6d0, public_6d0c6d0);
extern "C" NAKED register_t __cdecl internal_6d0c6d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x154]
        test eax, 0xFDFF
        je public_6d0c71c
        add esi, 0xD4
        mov ecx, esi
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d0c716
        mov dword ptr ds : [ecx], eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        public_6d0c716 : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        public_6d0c71c : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0c6d0)
    }
}

#undef public_6d0c716
#undef public_6d0c71c
