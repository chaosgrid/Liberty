#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec680);

#define public_62ec696 _public_62ec696

PROC_DECLARE(0x62ec680, internal_62ec680, public_62ec680);
extern "C" NAKED register_t __cdecl internal_62ec680()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xBE]
        test al, al
        je public_62ec696
        mov eax, dword ptr ds : [ecx+0xB0]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        public_62ec696 : nop
        mov al, byte ptr ds : [ecx+0xBE]
        ret 4
        UNREACHABLE_TRAP(0x62ec680)
    }
}

#undef public_62ec696
