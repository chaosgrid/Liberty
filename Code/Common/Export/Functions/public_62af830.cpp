#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af830);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62af876 _public_62af876

PROC_DECLARE(0x62af830, internal_62af830, public_62af830);
extern "C" NAKED register_t __cdecl internal_62af830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        jge public_62af876
        mov ecx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        dec dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        public_62af876 : nop
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62af830)
    }
}

#undef public_62af876
