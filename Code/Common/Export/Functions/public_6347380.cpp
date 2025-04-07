#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6347380);

#define public_63473a2 _public_63473a2

PROC_DECLARE(0x6347380, internal_6347380, public_6347380);
extern "C" NAKED register_t __cdecl internal_6347380()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea edx, ds:[eax+esi+0x1F]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        and edx, 0xFFFFFFE0
        cmp edx, edi
        jb public_63473a2
        push esi
        call public_63440d0
        pop edi
        pop esi
        ret 4
        public_63473a2 : nop
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6347380)
    }
}

#undef public_63473a2
