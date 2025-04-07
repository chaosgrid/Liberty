#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ef0);

PROC_DECLARE(0x6209ef0, internal_6209ef0, public_6209ef0);
extern "C" NAKED register_t __cdecl internal_6209ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[eax+ecx*8]
        ret 4
        UNREACHABLE_TRAP(0x6209ef0)
    }
}
