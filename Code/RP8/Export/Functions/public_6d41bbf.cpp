#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41bbf);

PROC_DECLARE(0x6d41bbf, internal_6d41bbf, public_6d41bbf);
extern "C" NAKED register_t __cdecl internal_6d41bbf()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC4], ecx
        mov dword ptr ds : [eax+0x7C], ecx
        mov dword ptr ds : [eax+0x178], ecx
        add eax, 0x190
        mov edx, dword ptr ds : [eax]
        mov byte ptr ds : [edx+0x50], cl
        mov edx, dword ptr ds : [eax]
        mov byte ptr ds : [edx+0x51], cl
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x58], ecx
        ret 
        UNREACHABLE_TRAP(0x6d41bbf)
    }
}
