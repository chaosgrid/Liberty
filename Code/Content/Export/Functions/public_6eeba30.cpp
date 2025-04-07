#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeba30);

PROC_DECLARE(0x6eeba30, internal_6eeba30, public_6eeba30);
extern "C" NAKED register_t __cdecl internal_6eeba30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6fce360], eax
        mov dword ptr ds : [public_6fce364], ecx
        ret 
        UNREACHABLE_TRAP(0x6eeba30)
    }
}
