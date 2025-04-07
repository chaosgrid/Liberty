#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323900);

#define public_6323913 _public_6323913
#define public_6323921 _public_6323921
#define public_6323928 _public_6323928

PROC_DECLARE(0x6323900, internal_6323900, public_6323900);
extern "C" NAKED register_t __cdecl internal_6323900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6323928
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6323913 : nop
        test eax, eax
        je public_6323921
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6323921 : nop
        add eax, 8
        dec edx
        jne public_6323913
        pop esi
        public_6323928 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6323900)
    }
}

#undef public_6323913
#undef public_6323921
#undef public_6323928
