#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416880);

PROC_DECLARE(0x416880, internal_416880, public_416880);
extern "C" NAKED register_t __cdecl internal_416880()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x416880)
    }
}
