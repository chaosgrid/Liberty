#include "Common-PCH.h"


#define public_6271df0 _public_6271df0

PROC_DECLARE(0x6271da0, internal_6271da0, public_6271da0);
extern "C" NAKED register_t __cdecl internal_6271da0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp edx, esi
        je public_6271df0
        mov eax, dword ptr ds : [esi]
        cmp edx, eax
        je public_6271df0
        mov dword ptr ss : [esp+8], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], edx
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], eax
        mov esi, dword ptr ds : [edx+4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], edi
        mov esi, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], edi
        mov edx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], esi
        inc dword ptr ds : [ecx+8]
        dec dword ptr ds : [eax+8]
        pop edi
        public_6271df0 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6271da0)
    }
}

#undef public_6271df0
