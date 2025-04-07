#include "Server-PCH.h"


#define public_6d03d94 _public_6d03d94

PROC_DECLARE(0x6d03d80, internal_6d03d80, public_6d03d80);
extern "C" NAKED register_t __cdecl internal_6d03d80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        jne public_6d03d94
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        ret 4
        public_6d03d94 : nop
        call dword ptr ds : [public_6d6462c]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d03d80)
    }
}

#undef public_6d03d94
