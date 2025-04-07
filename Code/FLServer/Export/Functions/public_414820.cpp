#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414820);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_414834 _public_414834
#define public_414844 _public_414844

PROC_DECLARE(0x414820, internal_414820, public_414820);
extern "C" NAKED register_t __cdecl internal_414820()
{
    __asm
    {
        push 0xC
        call public_418a9e
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_414834
        mov ecx, eax
        public_414834 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_414844
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_414844 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x414820)
    }
}

#undef public_414834
#undef public_414844
