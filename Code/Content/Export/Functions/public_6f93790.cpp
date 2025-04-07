#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f937a4 _public_6f937a4
#define public_6f937b4 _public_6f937b4

PROC_DECLARE(0x6f93790, internal_6f93790, public_6f93790);
extern "C" NAKED register_t __cdecl internal_6f93790()
{
    __asm
    {
        push 0xC
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f937a4
        mov ecx, eax
        public_6f937a4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f937b4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f937b4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f93790)
    }
}

#undef public_6f937a4
#undef public_6f937b4
