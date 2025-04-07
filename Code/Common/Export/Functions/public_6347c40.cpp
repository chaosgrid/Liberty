#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6352930);

#define public_6347c5d _public_6347c5d
#define public_6347c6d _public_6347c6d
#define public_6347c6f _public_6347c6f

PROC_DECLARE(0x6347c40, internal_6347c40, public_6347c40);
extern "C" NAKED register_t __cdecl internal_6347c40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        and eax, 0xC
        cmp al, 4
        jne public_6347c5d
        mov ecx, dword ptr ds : [ecx+0x5C]
        test ecx, ecx
        je public_6347c6d
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6352930
        ret 4
        public_6347c5d : nop
        mov eax, dword ptr ds : [ecx+0x5C]
        test eax, eax
        je public_6347c6d
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [esp+4]
        je public_6347c6f
        public_6347c6d : nop
        xor eax, eax
        public_6347c6f : nop
        ret 4
        UNREACHABLE_TRAP(0x6347c40)
    }
}

#undef public_6347c5d
#undef public_6347c6d
#undef public_6347c6f
