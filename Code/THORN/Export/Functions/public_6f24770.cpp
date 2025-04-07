#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24770);

PROC_DECLARE(0x6f24770, internal_6f24770, public_6f24770);
extern "C" NAKED register_t __cdecl internal_6f24770()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        fstp dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x2C]
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
        ret 
        UNREACHABLE_TRAP(0x6f24770)
    }
}
