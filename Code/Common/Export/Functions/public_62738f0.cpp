#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62738f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x62738f0, internal_62738f0, public_62738f0);
extern "C" NAKED register_t __cdecl internal_62738f0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        push esi
        call public_6334430
        lea edi, ds:[esi+0x40]
        push edi
        call public_6334430
        xor ecx, ecx
        mov dword ptr ds : [edi], ecx
        lea eax, ds:[esi+4]
        mov dword ptr ds : [esi], ecx
        mov edi, ecx
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        add esp, 8
        or eax, 0xFFFFFFFF
        pop edi
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov byte ptr ds : [esi+0x3C], cl
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62738f0)
    }
}
