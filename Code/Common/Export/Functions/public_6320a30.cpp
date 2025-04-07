#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320a30);

PROC_DECLARE(0x6320a30, internal_6320a30, public_6320a30);
extern "C" NAKED register_t __cdecl internal_6320a30()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+8], cl
        mov byte ptr ds : [eax+9], cl
        mov byte ptr ds : [eax+0xA], cl
        mov byte ptr ds : [eax+0xB], cl
        mov byte ptr ds : [eax+0xC], cl
        mov byte ptr ds : [eax+0xD], cl
        mov byte ptr ds : [eax+0xE], cl
        mov byte ptr ds : [eax+0xF], cl
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x11], cl
        mov byte ptr ds : [eax+0x12], cl
        mov byte ptr ds : [eax+0x13], cl
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], cl
        ret 
        UNREACHABLE_TRAP(0x6320a30)
    }
}
