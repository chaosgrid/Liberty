#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234ab0);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);

#define public_6234aff _public_6234aff
#define public_6234b01 _public_6234b01
#define public_6234b1d _public_6234b1d

PROC_DECLARE(0x6234ab0, internal_6234ab0, public_6234ab0);
extern "C" NAKED register_t __cdecl internal_6234ab0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        call public_623ec90
        test eax, eax
        je public_6234aff
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x28]
        push esi
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0xC]
        mov ecx, 6
        lea esi, ss:[esp+0x14]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        mov dword ptr ds : [eax+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        test edx, edx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0x28], ecx
        pop esi
        fstp dword ptr ds : [eax+0x2C]
        je public_6234b01
        inc dword ptr ds : [edx+0xE4]
        jmp public_6234b01
        public_6234aff : nop
        xor eax, eax
        public_6234b01 : nop
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6234b1d
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        ret 0x24
        public_6234b1d : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        ret 0x24
        UNREACHABLE_TRAP(0x6234ab0)
    }
}

#undef public_6234aff
#undef public_6234b01
#undef public_6234b1d
