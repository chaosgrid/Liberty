#include "EngBase-PCH.h"

PROC_DECLARE(0x661f400, internal_661f400, public_661f400);
extern "C" NAKED register_t __cdecl internal_661f400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x34]
        add eax, 0x38
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 0x10
        UNREACHABLE_TRAP(0x661f400)
    }
}
