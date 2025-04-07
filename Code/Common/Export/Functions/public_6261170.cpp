#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261170);

PROC_DECLARE(0x6261170, internal_6261170, public_6261170);
extern "C" NAKED register_t __cdecl internal_6261170()
{
    __asm
    {
        sub esp, 0xC
        mov dword ptr ss : [esp], 0
        mov edx, dword ptr ss : [esp]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+8], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, 0x3F800000
        mov dword ptr ds : [ecx+0x2C], eax
        mov dword ptr ds : [ecx+0x1C], eax
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        mov dword ptr ds : [ecx+0x28], eax
        mov dword ptr ds : [ecx+0x24], eax
        mov dword ptr ds : [ecx+0x20], eax
        mov dword ptr ds : [ecx+0x18], eax
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+0x10], eax
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6261170)
    }
}
