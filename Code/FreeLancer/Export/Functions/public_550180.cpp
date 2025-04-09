#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550180);

PROC_DECLARE(0x550180, internal_550180, public_550180);
extern "C" NAKED register_t __cdecl internal_550180()
{
    __asm
    {
        sub esp, 0xC
        mov eax, ecx
        xor ecx, ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xAC], edx
        push esi
        mov esi, ecx
        lea edx, ds:[eax+0xF4]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ds : [eax+0xC4], ecx
        mov byte ptr ds : [eax+0xEC], cl
        mov dword ptr ds : [eax+0x128], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x550180)
    }
}
