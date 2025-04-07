#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638d910);

PROC_DECLARE(0x638d910, internal_638d910, public_638d910);
extern "C" NAKED register_t __cdecl internal_638d910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+0x10]
        sub ecx, edx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x638d910)
    }
}
