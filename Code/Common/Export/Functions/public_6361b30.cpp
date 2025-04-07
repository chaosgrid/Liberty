#include "Common-PCH.h"


#define public_6361b68 _public_6361b68

PROC_DECLARE(0x6361b30, internal_6361b30, public_6361b30);
extern "C" NAKED register_t __cdecl internal_6361b30()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        je public_6361b68
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+4], edx
        fadd dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+8]
        public_6361b68 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6361b30)
    }
}

#undef public_6361b68
