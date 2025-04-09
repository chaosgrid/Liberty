#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a6f0);

#define public_41a718 _public_41a718

PROC_DECLARE(0x41a6f0, internal_41a6f0, public_41a6f0);
extern "C" NAKED register_t __cdecl internal_41a6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_41a718
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [public_5c6dcc]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x48]
        public_41a718 : nop
        ret 
        UNREACHABLE_TRAP(0x41a6f0)
    }
}

#undef public_41a718
