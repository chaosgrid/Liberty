#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afa20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62afa46 _public_62afa46

PROC_DECLARE(0x62afa20, internal_62afa20, public_62afa20);
extern "C" NAKED register_t __cdecl internal_62afa20()
{
    __asm
    {
        cmp dword ptr ds : [public_63fc440], 0x7FFFFFFF
        jge public_62afa46
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_63fc434]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc434], eax
        inc dword ptr ds : [public_63fc440]
        ret 8
        public_62afa46 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_6391d5a
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62afa20)
    }
}

#undef public_62afa46
