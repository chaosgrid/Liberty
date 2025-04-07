#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ace800);

#define public_6ace831 _public_6ace831

PROC_DECLARE(0x6ace800, internal_6ace800, public_6ace800);
extern "C" NAKED register_t __cdecl internal_6ace800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ace831
        mov ecx, dword ptr ss : [esp+0x10]
        and dword ptr ds : [eax+0x10], 0
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push 1
        mov dword ptr ds : [eax], 0x1423
        mov dword ptr ds : [eax+4], 0x100
        mov dword ptr ds : [eax+0x14], ecx
        pop eax
        public_6ace831 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6ace800)
    }
}

#undef public_6ace831
