#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349350);

PROC_DECLARE(0x6349350, internal_6349350, public_6349350);
extern "C" NAKED register_t __cdecl internal_6349350()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+edx*4]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [eax+edi*4]
        mov dword ptr ds : [eax+edx*4], ebx
        mov eax, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+edi*4], esi
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6349350)
    }
}
