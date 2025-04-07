#include "Server-PCH.h"


#define public_6d54bc2 _public_6d54bc2

PROC_DECLARE(0x6d54b70, internal_6d54b70, public_6d54b70);
extern "C" NAKED register_t __cdecl internal_6d54b70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0xFFFFFFFF
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        jbe public_6d54bc2
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d54bc2
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push ebx
        mov ebx, dword ptr ds : [edx+esi+0x348]
        test ebx, ebx
        pop ebx
        je public_6d54bc2
        imul ecx, 0x418
        mov edx, dword ptr ds : [ecx+esi-0x100]
        mov dword ptr ds : [edi], edx
        xor eax, eax
        public_6d54bc2 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d54b70)
    }
}

#undef public_6d54bc2
