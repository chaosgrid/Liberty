#include "RendComp-PCH.h"

PROC_DECLARE(0x6c22a00, internal_6c22a00, public_6c22a00);
extern "C" NAKED register_t __cdecl internal_6c22a00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x1E8]
        push esi
        mov esi, dword ptr ds : [eax+0x14]
        xor edx, edx
        cmp ecx, esi
        setne dl
        pop esi
        dec edx
        mov eax, edx
        ret 4
        UNREACHABLE_TRAP(0x6c22a00)
    }
}
