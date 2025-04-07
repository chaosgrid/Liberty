#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378ac0);

#define public_6378af5 _public_6378af5

PROC_DECLARE(0x6378ac0, internal_6378ac0, public_6378ac0);
extern "C" NAKED register_t __cdecl internal_6378ac0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 6
        mov edi, edx
        rep stosd
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        pop edi
        je public_6378af5
        test ecx, ecx
        je public_6378af5
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ds : [edx+0x10]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ds : [edx+0x14]
        public_6378af5 : nop
        mov eax, edx
        ret 8
        UNREACHABLE_TRAP(0x6378ac0)
    }
}

#undef public_6378af5
