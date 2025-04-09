#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421030);

PROC_DECLARE(0x421030, internal_421030, public_421030);
extern "C" NAKED register_t __cdecl internal_421030()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        ret 
        UNREACHABLE_TRAP(0x421030)
    }
}
