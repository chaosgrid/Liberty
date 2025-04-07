#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5f80);
CLANG_FORWARD_PROC_SYMBOL(public_62d2830);

#define public_62aa1b7 _public_62aa1b7

PROC_DECLARE(0x62aa190, internal_62aa190, public_62aa190);
extern "C" NAKED register_t __cdecl internal_62aa190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62b5f80
        mov ecx, dword ptr ds : [esi+0x194]
        test ecx, ecx
        je public_62aa1b7
        mov edx, dword ptr ds : [esi+0xAC]
        pop esi
        mov dword ptr ss : [esp+4], edx
        jmp public_62d2830
        public_62aa1b7 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62aa190)
    }
}

#undef public_62aa1b7
