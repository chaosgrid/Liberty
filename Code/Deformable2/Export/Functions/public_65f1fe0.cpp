#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5400);

#define public_65f2007 _public_65f2007

PROC_DECLARE(0x65f1fe0, internal_65f1fe0, public_65f1fe0);
extern "C" NAKED register_t __cdecl internal_65f1fe0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65f2007
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        call public_65f5400
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        je public_65f2007
        xor eax, eax
        ret 0x14
        public_65f2007 : nop
        or eax, 0xFFFFFFFF
        ret 0x14
        UNREACHABLE_TRAP(0x65f1fe0)
    }
}

#undef public_65f2007
