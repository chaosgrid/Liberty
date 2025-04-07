#include "EngBase-PCH.h"


#define public_661d726 _public_661d726

PROC_DECLARE(0x661d710, internal_661d710, public_661d710);
extern "C" NAKED register_t __cdecl internal_661d710()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        je public_661d726
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esi, ds:[eax+0x18]
        rep movsd
        pop edi
        pop esi
        public_661d726 : nop
        ret 8
        UNREACHABLE_TRAP(0x661d710)
    }
}

#undef public_661d726
