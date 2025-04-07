#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d1bd35 _public_6d1bd35

PROC_DECLARE(0x6d1bd20, internal_6d1bd20, public_6d1bd20);
extern "C" NAKED register_t __cdecl internal_6d1bd20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        lea eax, ds:[esi+4]
        jae public_6d1bd35
        lea eax, ss:[esp+8]
        public_6d1bd35 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [esi], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1bd20)
    }
}

#undef public_6d1bd35
