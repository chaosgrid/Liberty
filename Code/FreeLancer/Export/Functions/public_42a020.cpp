#include "Freelancer-PCH.h"


#define public_42a075 _public_42a075

PROC_DECLARE(0x42a020, internal_42a020, public_42a020);
extern "C" NAKED register_t __cdecl internal_42a020()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x60], 0xFFFFFFFF
        je public_42a075
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x48]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x4C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x50]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fadd dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0x38]
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], ecx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x38], edx
        public_42a075 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x74]
        neg al
        pop esi
        sbb eax, eax
        inc eax
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x42a020)
    }
}

#undef public_42a075
