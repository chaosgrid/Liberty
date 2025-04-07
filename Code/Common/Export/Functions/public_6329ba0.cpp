#include "Common-PCH.h"


#define public_6329bb2 _public_6329bb2
#define public_6329bdb _public_6329bdb

PROC_DECLARE(0x6329ba0, internal_6329ba0, public_6329ba0);
extern "C" NAKED register_t __cdecl internal_6329ba0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        xor edi, edi
        cmp esi, eax
        je public_6329bdb
        public_6329bb2 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+4]
        add edi, ecx
        cmp esi, eax
        jne public_6329bb2
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_6329bdb : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6329ba0)
    }
}

#undef public_6329bb2
#undef public_6329bdb
