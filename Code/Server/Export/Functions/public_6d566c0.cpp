#include "Server-PCH.h"


#define public_6d5671c _public_6d5671c

PROC_DECLARE(0x6d566c0, internal_6d566c0, public_6d566c0);
extern "C" NAKED register_t __cdecl internal_6d566c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d5671c
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d5671c
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d5671c
        imul ecx, 0x418
        lea eax, ds:[ecx+esi-0x418]
        add eax, 0x2E4
        push eax
        push 0xB8249F07
        call dword ptr ds : [public_6d647b8]
        mov ecx, eax
        call dword ptr ds : [public_6d647b4]
        xor eax, eax
        public_6d5671c : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d566c0)
    }
}

#undef public_6d5671c
