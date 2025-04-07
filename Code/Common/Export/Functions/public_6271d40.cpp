#include "Common-PCH.h"


#define public_6271d9c _public_6271d9c

PROC_DECLARE(0x6271d40, internal_6271d40, public_6271d40);
extern "C" NAKED register_t __cdecl internal_6271d40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6271d9c
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi], edx
        mov edi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi], eax
        mov edi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], ebx
        mov edi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edx+4], edi
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+8]
        add edx, eax
        pop edi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [esi+8], 0
        pop ebx
        public_6271d9c : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6271d40)
    }
}

#undef public_6271d9c
