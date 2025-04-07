#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367130);

PROC_DECLARE(0x6367130, internal_6367130, public_6367130);
extern "C" NAKED register_t __cdecl internal_6367130()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+edx*4]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+edi*4]
        mov dword ptr ds : [eax+edi*4], esi
        mov eax, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [eax+edx*4], ebx
        mov eax, dword ptr ds : [ecx+0x38]
        mov dword ptr ds : [eax+esi*4], edi
        mov ecx, dword ptr ds : [ecx+0x38]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+ebx*4], edx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6367130)
    }
}
