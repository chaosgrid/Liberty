#include "Server-PCH.h"


#define public_6d54d12 _public_6d54d12

PROC_DECLARE(0x6d54cc0, internal_6d54cc0, public_6d54cc0);
extern "C" NAKED register_t __cdecl internal_6d54cc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0xBF800000
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        jbe public_6d54d12
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d54d12
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push ebx
        mov ebx, dword ptr ds : [edx+esi+0x348]
        test ebx, ebx
        pop ebx
        je public_6d54d12
        imul ecx, 0x418
        xor eax, eax
        fld dword ptr ds : [ecx+esi-0x1B0]
        fstp dword ptr ds : [edi]
        public_6d54d12 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d54cc0)
    }
}

#undef public_6d54d12
