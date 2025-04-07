#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24070);

PROC_DECLARE(0x6f24070, internal_6f24070, public_6f24070);
extern "C" NAKED register_t __cdecl internal_6f24070()
{
    __asm
    {
        sub esp, 0x1C
        fld dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        fchs 
        push ebx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        push esi
        fchs 
        push edi
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fchs 
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ecx
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6f24070)
    }
}
