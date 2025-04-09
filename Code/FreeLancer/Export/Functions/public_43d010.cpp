#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43d02a _public_43d02a
#define public_43d035 _public_43d035

PROC_DECLARE(0x43d010, internal_43d010, public_43d010);
extern "C" NAKED register_t __cdecl internal_43d010()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+4]
        je public_43d02a
        test eax, eax
        je public_43d035
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        public_43d02a : nop
        test eax, eax
        je public_43d035
        push eax
        call public_5b7e1d
        pop ecx
        public_43d035 : nop
        ret 4
        UNREACHABLE_TRAP(0x43d010)
    }
}

#undef public_43d02a
#undef public_43d035
