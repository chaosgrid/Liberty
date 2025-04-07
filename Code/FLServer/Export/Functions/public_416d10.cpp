#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416d10);

PROC_DECLARE(0x416d10, internal_416d10, public_416d10);
extern "C" NAKED register_t __cdecl internal_416d10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x416d10)
    }
}
