#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638e280);

#define public_638e29d _public_638e29d

PROC_DECLARE(0x638e280, internal_638e280, public_638e280);
extern "C" NAKED register_t __cdecl internal_638e280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        fld qword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        fcomp qword ptr ds : [eax]
        fnstsw ax
        test ah, 0x41
        jne public_638e29d
        mov eax, 1
        ret 
        public_638e29d : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x638e280)
    }
}

#undef public_638e29d
