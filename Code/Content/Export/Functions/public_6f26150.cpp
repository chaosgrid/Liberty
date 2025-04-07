#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f26150);

PROC_DECLARE(0x6f26150, internal_6f26150, public_6f26150);
extern "C" NAKED register_t __cdecl internal_6f26150()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx+0x118], eax
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+0x128], edx
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x164], al
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x15C], edx
        mov dword ptr ds : [ecx+0x160], eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f26150)
    }
}
