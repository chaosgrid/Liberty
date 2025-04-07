#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63572b0);

#define public_6357331 _public_6357331

PROC_DECLARE(0x63572b0, internal_63572b0, public_63572b0);
extern "C" NAKED register_t __cdecl internal_63572b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [ecx+eax*4+0xEC]
        shl eax, 4
        fld dword ptr ds : [eax+ecx+0x48]
        add eax, ecx
        fld dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ds : [eax+0x4C]
        mov edx, ecx
        mov dword ptr ds : [esi+0xAC], edx
        fstp dword ptr ds : [esi+0xA4]
        mov dword ptr ss : [esp+8], ecx
        fstp dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [eax+0x2C]
        fld dword ptr ds : [eax+0x28]
        mov edx, ecx
        fld dword ptr ds : [eax+0x24]
        mov dword ptr ds : [esi+0x9C], edx
        fstp dword ptr ds : [esi+0x94]
        mov dword ptr ss : [esp+8], ecx
        fstp dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax+0x24]
        movsx ecx, word ptr ds : [esi+0x64]
        push edi
        cmp ecx, dword ptr ds : [edx+0xC]
        jle public_6357331
        mov eax, dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [eax]
        push esi
        push edx
        mov ecx, eax
        call dword ptr ds : [edi+0xC]
        xor edx, edx
        mov dh, al
        mov eax, dword ptr ds : [esi+0x60]
        and eax, 0xFFFF00FF
        or edx, eax
        mov dword ptr ds : [esi+0x60], edx
        public_6357331 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63572b0)
    }
}

#undef public_6357331
