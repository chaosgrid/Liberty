#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62739f0);

PROC_DECLARE(0x62739f0, internal_62739f0, public_62739f0);
extern "C" NAKED register_t __cdecl internal_62739f0()
{
    __asm
    {
        sub esp, 0xC
        xor edx, edx
        mov dword ptr ds : [ecx], edx
        mov byte ptr ds : [ecx+0x34], dl
        mov byte ptr ds : [ecx+0x35], dl
        mov dword ptr ds : [ecx+0x38], edx
        mov dword ptr ds : [ecx+0x3C], edx
        lea eax, ds:[ecx+4]
        push esi
        mov esi, edx
        mov ecx, eax
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov ecx, 0x3F800000
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62739f0)
    }
}
