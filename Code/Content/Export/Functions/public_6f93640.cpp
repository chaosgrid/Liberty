#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f93654 _public_6f93654
#define public_6f93664 _public_6f93664

PROC_DECLARE(0x6f93640, internal_6f93640, public_6f93640);
extern "C" NAKED register_t __cdecl internal_6f93640()
{
    __asm
    {
        push 0x2C
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f93654
        mov ecx, eax
        public_6f93654 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f93664
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f93664 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f93640)
    }
}

#undef public_6f93654
#undef public_6f93664
