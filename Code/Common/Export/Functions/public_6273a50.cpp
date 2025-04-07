#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273a50);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x6273a50, internal_6273a50, public_6273a50);
extern "C" NAKED register_t __cdecl internal_6273a50()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        push esi
        call public_6334430
        lea edi, ds:[esi+0x38]
        push edi
        call public_6334430
        lea ebx, ds:[esi+0x3C]
        push ebx
        call public_6334430
        lea eax, ds:[esi+4]
        add esp, 0xC
        xor ecx, ecx
        mov dword ptr ds : [esi], ecx
        mov byte ptr ds : [esi+0x34], cl
        mov byte ptr ds : [esi+0x35], cl
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [ebx], ecx
        mov esi, ecx
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], esi
        pop edi
        mov edx, 0x3F800000
        pop esi
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ds : [eax+0x2C], edx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6273a50)
    }
}
