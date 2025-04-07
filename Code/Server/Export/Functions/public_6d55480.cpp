#include "Server-PCH.h"


#define public_6d554df _public_6d554df
#define public_6d554eb _public_6d554eb
#define public_6d554ef _public_6d554ef

PROC_DECLARE(0x6d55480, internal_6d55480, public_6d55480);
extern "C" NAKED register_t __cdecl internal_6d55480()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], 0
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        mov eax, 0xFFFFFFFE
        jbe public_6d554ef
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d554ef
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push ebx
        mov ebx, dword ptr ds : [edx+esi+0x348]
        test ebx, ebx
        pop ebx
        je public_6d554ef
        imul ecx, 0x418
        lea eax, ds:[ecx+esi-0x418]
        mov eax, dword ptr ds : [eax+0x31C]
        test eax, eax
        jge public_6d554df
        xor eax, eax
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        ret 
        public_6d554df : nop
        cmp eax, 0x3B9AC9FF
        jle public_6d554eb
        mov eax, 0x3B9AC9FF
        public_6d554eb : nop
        mov dword ptr ds : [edi], eax
        xor eax, eax
        public_6d554ef : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d55480)
    }
}

#undef public_6d554df
#undef public_6d554eb
#undef public_6d554ef
