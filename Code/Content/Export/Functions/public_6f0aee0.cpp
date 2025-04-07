#include "Content-PCH.h"


#define public_6f0af18 _public_6f0af18
#define public_6f0af2a _public_6f0af2a

PROC_DECLARE(0x6f0aee0, internal_6f0aee0, public_6f0aee0);
extern "C" NAKED register_t __cdecl internal_6f0aee0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [ecx]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [edx+0xC]
        cmp eax, 1
        jne public_6f0af18
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 5
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        ret 8
        public_6f0af18 : nop
        cmp edi, eax
        je public_6f0af2a
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 1
        call dword ptr ds : [eax+0x10]
        public_6f0af2a : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f0aee0)
    }
}

#undef public_6f0af18
#undef public_6f0af2a
