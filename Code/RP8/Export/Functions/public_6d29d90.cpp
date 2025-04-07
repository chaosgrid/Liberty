#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29d90);

PROC_DECLARE(0x6d29d90, internal_6d29d90, public_6d29d90);
extern "C" NAKED register_t __cdecl internal_6d29d90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax+4], dl
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d29d90)
    }
}
