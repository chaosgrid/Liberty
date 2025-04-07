#include "Common-PCH.h"


#define public_62cf225 _public_62cf225

PROC_DECLARE(0x62cf1d0, internal_62cf1d0, public_62cf1d0);
extern "C" NAKED register_t __cdecl internal_62cf1d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        cmp dword ptr ds : [eax], 4
        push edi
        jne public_62cf225
        mov edi, dword ptr ds : [eax+4]
        cmp byte ptr ds : [edi], 0
        jne public_62cf225
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_62cf225
        mov ecx, dword ptr ds : [esi+0x34]
        test ecx, ecx
        mov dword ptr ds : [esi+0x30], 5
        mov dword ptr ss : [esp+0xC], 0
        je public_62cf225
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov esi, dword ptr ds : [esi+0x14]
        push 0
        lea edx, ss:[esp+0x10]
        lea ecx, ds:[esi+4]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0x60]
        public_62cf225 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cf1d0)
    }
}

#undef public_62cf225
