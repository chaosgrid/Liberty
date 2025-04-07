#include "Common-PCH.h"


#define public_6282c25 _public_6282c25
#define public_6282c65 _public_6282c65

PROC_DECLARE(0x6282c10, internal_6282c10, public_6282c10);
extern "C" NAKED register_t __cdecl internal_6282c10()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [ecx+8], 2
        push edi
        jb public_6282c65
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_6282c65
        push ebx
        push esi
        public_6282c25 : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [esi], edx
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ss : [esp+0xC]
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edx+4], esi
        jne public_6282c25
        pop esi
        pop ebx
        public_6282c65 : nop
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6282c10)
    }
}

#undef public_6282c25
#undef public_6282c65
