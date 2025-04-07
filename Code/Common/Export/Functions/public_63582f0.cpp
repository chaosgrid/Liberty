#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63582f0);

PROC_DECLARE(0x63582f0, internal_63582f0, public_63582f0);
extern "C" NAKED register_t __cdecl internal_63582f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xEC]
        xor edx, edx
        mov dword ptr ds : [eax+0x74], edx
        mov dword ptr ds : [eax+0x78], edx
        mov dword ptr ds : [eax+0x7C], edx
        add eax, 0x74
        mov eax, dword ptr ds : [ecx+0xEC]
        mov dword ptr ds : [eax+0x84], edx
        mov dword ptr ds : [eax+0x88], edx
        mov dword ptr ds : [eax+0x8C], edx
        add eax, 0x84
        mov eax, dword ptr ds : [ecx+0xF0]
        add eax, 0x74
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ecx+0xF0]
        add eax, 0x84
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], edx
        ret 
        UNREACHABLE_TRAP(0x63582f0)
    }
}
