#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65dd66f);

#define public_65dd698 _public_65dd698
#define public_65dd6a9 _public_65dd6a9

PROC_DECLARE(0x65dd66f, internal_65dd66f, public_65dd66f);
extern "C" NAKED register_t __cdecl internal_65dd66f()
{
    __asm
    {
        inc dword ptr ds : [public_65e63dc]
        push 0x1000
        call public_65d8535
        pop ecx
        mov ecx, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ds : [ecx+8], eax
        je public_65dd698
        or dword ptr ds : [ecx+0xC], 8
        mov dword ptr ds : [ecx+0x18], 0x1000
        jmp public_65dd6a9
        public_65dd698 : nop
        or dword ptr ds : [ecx+0xC], 4
        lea eax, ds:[ecx+0x14]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0x18], 2
        public_65dd6a9 : nop
        mov eax, dword ptr ds : [ecx+8]
        and dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x65dd66f)
    }
}

#undef public_65dd698
#undef public_65dd6a9
