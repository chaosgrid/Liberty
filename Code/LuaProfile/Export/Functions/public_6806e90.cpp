#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806e90);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);

#define public_6806ec3 _public_6806ec3

PROC_DECLARE(0x6806e90, internal_6806e90, public_6806e90);
extern "C" NAKED register_t __cdecl internal_6806e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x34]
        test ecx, ecx
        push esi
        je public_6806ec3
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, dword ptr ds : [ecx+0x20]
        je public_6806ec3
        push 0
        push eax
        push 0x3C
        push esi
        call public_6806ed0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 0x10
        mov dword ptr ds : [edx+0x20], eax
        public_6806ec3 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806e90)
    }
}

#undef public_6806ec3
