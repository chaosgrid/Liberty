#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6273370);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x6273370, internal_6273370, public_6273370);
extern "C" NAKED register_t __cdecl internal_6273370()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        push ebx
        call public_6334430
        mov ebp, dword ptr ss : [esp+0x24]
        xor eax, eax
        mov dword ptr ds : [ebx], eax
        lea edi, ds:[ebx+4]
        mov edx, eax
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [edi+0x2C], ecx
        mov dword ptr ds : [edi+0x1C], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x24], eax
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [ebx+0x34], 0x420C0000
        mov dword ptr ds : [ebx+0x38], 0x3E800000
        mov dword ptr ds : [ebx+0x3C], 0x49742400
        mov eax, dword ptr ss : [ebp]
        push eax
        push ebx
        call public_6334400
        lea esi, ss:[ebp+4]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x34]
        add esp, 0xC
        mov dword ptr ds : [ebx+0x34], ecx
        mov edx, dword ptr ss : [ebp+0x38]
        pop edi
        mov dword ptr ds : [ebx+0x38], edx
        mov eax, dword ptr ss : [ebp+0x3C]
        pop esi
        mov dword ptr ds : [ebx+0x3C], eax
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6273370)
    }
}
