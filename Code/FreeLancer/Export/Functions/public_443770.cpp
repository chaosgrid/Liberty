#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443770);

PROC_DECLARE(0x443770, internal_443770, public_443770);
extern "C" NAKED register_t __cdecl internal_443770()
{
    __asm
    {
        sub esp, 0xC
        mov eax, ecx
        xor ecx, ecx
        push esi
        mov esi, ecx
        lea edx, ds:[eax+4]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ds : [eax], ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x30], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ds : [eax+0x34], cl
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x443770)
    }
}
