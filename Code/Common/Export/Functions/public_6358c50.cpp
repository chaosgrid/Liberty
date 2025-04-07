#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6358bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6358c50);

PROC_DECLARE(0x6358c50, internal_6358c50, public_6358c50);
extern "C" NAKED register_t __cdecl internal_6358c50()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x10]
        mov ebp, dword ptr ds : [edi+0x24]
        lea eax, ds:[esi+0x40]
        push eax
        call public_6358bb0
        mov eax, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebp
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x38], ecx
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x3C], edx
        mov ebx, dword ptr ds : [eax+0x9C]
        mov eax, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        fstp dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+4]
        fstp dword ptr ds : [edi+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6358c50)
    }
}
