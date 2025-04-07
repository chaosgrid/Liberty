#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdbc10);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bdc528 _public_6bdc528

PROC_DECLARE(0x6bdc510, internal_6bdc510, public_6bdc510);
extern "C" NAKED register_t __cdecl internal_6bdc510()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bdbc10
        test byte ptr ss : [esp+8], 1
        je public_6bdc528
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bdc528 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bdc510)
    }
}

#undef public_6bdc528
