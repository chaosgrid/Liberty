#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f300);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627f326 _public_627f326

PROC_DECLARE(0x627f300, internal_627f300, public_627f300);
extern "C" NAKED register_t __cdecl internal_627f300()
{
    __asm
    {
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        jge public_627f326
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        ret 8
        public_627f326 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6391d5a
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x627f300)
    }
}

#undef public_627f326
