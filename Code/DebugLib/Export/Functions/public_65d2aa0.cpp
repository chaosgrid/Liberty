#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2aa0);

#define public_65d2aaf _public_65d2aaf
#define public_65d2ac6 _public_65d2ac6

PROC_DECLARE(0x65d2aa0, internal_65d2aa0, public_65d2aa0);
extern "C" NAKED register_t __cdecl internal_65d2aa0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        jbe public_65d2aaf
        dec eax
        mov dword ptr ds : [ecx+0x30], eax
        public_65d2aaf : nop
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        jne public_65d2ac6
        mov dword ptr ds : [ecx+0x30], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x24]
        xor eax, eax
        public_65d2ac6 : nop
        ret 4
        UNREACHABLE_TRAP(0x65d2aa0)
    }
}

#undef public_65d2aaf
#undef public_65d2ac6
