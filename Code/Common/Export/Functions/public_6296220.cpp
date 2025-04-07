#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296220);

#define public_6296246 _public_6296246

PROC_DECLARE(0x6296220, internal_6296220, public_6296220);
extern "C" NAKED register_t __cdecl internal_6296220()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+4], 0
        call dword ptr ds : [eax+0xC]
        test al, al
        je public_6296246
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0xC]
        fabs 
        pop esi
        fmul dword ptr ds : [ecx+0x78]
        pop ecx
        ret 4
        public_6296246 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6296220)
    }
}

#undef public_6296246
