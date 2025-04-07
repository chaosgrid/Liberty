#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10004d10);

#define public_10005f82 _public_10005f82

PROC_DECLARE(0x10005f60, internal_10005f60, public_10005f60);
extern "C" NAKED register_t __cdecl internal_10005f60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_10005f82
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_10005f82
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_10005f82
        push eax
        call public_10004d10
        add esp, 4
        ret 4
        public_10005f82 : nop
        mov eax, 0xFFFFFFFE
        ret 4
        UNREACHABLE_TRAP(0x10005f60)
    }
}

#undef public_10005f82
