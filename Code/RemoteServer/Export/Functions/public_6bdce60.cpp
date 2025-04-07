#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6bdce60);

#define public_6bdce71 _public_6bdce71

PROC_DECLARE(0x6bdce60, internal_6bdce60, public_6bdce60);
extern "C" NAKED register_t __cdecl internal_6bdce60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6bdce71
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6bdc850
        public_6bdce71 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bdce60)
    }
}

#undef public_6bdce71
