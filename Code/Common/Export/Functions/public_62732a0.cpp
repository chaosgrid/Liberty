#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62732a0);

PROC_DECLARE(0x62732a0, internal_62732a0, public_62732a0);
extern "C" NAKED register_t __cdecl internal_62732a0()
{
    __asm
    {
        sub esp, 0xC
        xor edx, edx
        lea eax, ds:[ecx+4]
        mov dword ptr ds : [ecx], edx
        push esi
        push edi
        mov edi, edx
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        mov dword ptr ds : [eax+0x2C], esi
        mov dword ptr ds : [eax+0x1C], esi
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        pop edi
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ds : [ecx+0x34], 0x420C0000
        mov dword ptr ds : [ecx+0x38], 0x3E800000
        mov dword ptr ds : [ecx+0x3C], 0x49742400
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62732a0)
    }
}
