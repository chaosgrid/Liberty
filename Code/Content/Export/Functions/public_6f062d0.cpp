#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f062d0);

#define public_6f062fc _public_6f062fc

PROC_DECLARE(0x6f062d0, internal_6f062d0, public_6f062d0);
extern "C" NAKED register_t __cdecl internal_6f062d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_6f062fc
        mov edx, dword ptr ds : [ecx+0x5C]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6f062fc
        mov ecx, dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [eax], ecx
        public_6f062fc : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6f062d0)
    }
}

#undef public_6f062fc
