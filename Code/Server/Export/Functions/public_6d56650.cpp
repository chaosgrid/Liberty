#include "Server-PCH.h"


#define public_6d566bb _public_6d566bb

PROC_DECLARE(0x6d56650, internal_6d56650, public_6d56650);
extern "C" NAKED register_t __cdecl internal_6d56650()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d566bb
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d566bb
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d566bb
        imul ecx, 0x418
        lea eax, ds:[ecx+esi-0x418]
        mov dword ptr ds : [eax+0x2E4], 0
        mov dword ptr ds : [eax+0x2E8], 0x8DFFC147
        mov dword ptr ds : [eax+0x2EC], 0x9DC4C883
        mov dword ptr ds : [eax+0x2F0], 0x93582D4F
        xor eax, eax
        public_6d566bb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d56650)
    }
}

#undef public_6d566bb
