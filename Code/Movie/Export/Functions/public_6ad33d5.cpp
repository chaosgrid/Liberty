#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad33d5);

#define public_6ad33e7 _public_6ad33e7

PROC_DECLARE(0x6ad33d5, internal_6ad33d5, public_6ad33d5);
extern "C" NAKED register_t __cdecl internal_6ad33d5()
{
    __asm
    {
        mov eax, dword ptr ds : [edx+4]
        and eax, 0x7FF00000
        cmp eax, 0x7FF00000
        je public_6ad33e7
        fld qword ptr ds : [edx]
        ret 
        public_6ad33e7 : nop
        mov eax, dword ptr ds : [edx+4]
        sub esp, 0xA
        or eax, 0x7FFF0000
        mov dword ptr ss : [esp+6], eax
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx]
        shld eax, ecx, 0xB
        shl ecx, 0xB
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp], ecx
        fld tbyte ptr ss : [esp]
        add esp, 0xA
        test eax, 0
        mov eax, dword ptr ds : [edx+4]
        ret 
        UNREACHABLE_TRAP(0x6ad33d5)
    }
}

#undef public_6ad33e7
