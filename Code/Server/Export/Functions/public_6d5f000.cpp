#include "Server-PCH.h"


#define public_6d5f02f _public_6d5f02f

PROC_DECLARE(0x6d5f000, internal_6d5f000, public_6d5f000);
extern "C" NAKED register_t __cdecl internal_6d5f000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push eax
        or edi, 0xFFFFFFFF
        mov dword ptr ds : [esi], 0
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6d5f02f
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        fstp dword ptr ds : [esi]
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6d5f02f : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d5f000)
    }
}

#undef public_6d5f02f
