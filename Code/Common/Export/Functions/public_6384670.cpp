#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6384670);

#define public_6384684 _public_6384684
#define public_638469a _public_638469a

PROC_DECLARE(0x6384670, internal_6384670, public_6384670);
extern "C" NAKED register_t __cdecl internal_6384670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 1
        jge public_6384684
        mov dword ptr ds : [public_63f69f4], 1
        ret 
        public_6384684 : nop
        cmp eax, 0x7FFFFFFF
        mov dword ptr ds : [public_63f69f4], 0x7FFFFFFE
        jge public_638469a
        mov dword ptr ds : [public_63f69f4], eax
        public_638469a : nop
        ret 
        UNREACHABLE_TRAP(0x6384670)
    }
}

#undef public_6384684
#undef public_638469a
