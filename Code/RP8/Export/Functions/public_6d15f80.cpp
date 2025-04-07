#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15f80);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b850);

PROC_DECLARE(0x6d15f80, internal_6d15f80, public_6d15f80);
extern "C" NAKED register_t __cdecl internal_6d15f80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x5C
        mov dword ptr ss : [ebp-0x5C], ecx
        mov dword ptr ss : [ebp-0x2C], 0
        mov dword ptr ss : [ebp-0x30], 0
        mov dword ptr ss : [ebp-0x28], 0
        mov dword ptr ss : [ebp-0x24], 0
        mov byte ptr ss : [ebp-0x20], 0
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x1C], ecx
        lea edx, ss:[ebp-0x18]
        mov dword ptr ss : [ebp-0x50], edx
        mov al, byte ptr ss : [ebp-0x20]
        mov byte ptr ss : [ebp-0x49], al
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x3C], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dl, byte ptr ss : [ebp-0x49]
        mov byte ptr ds : [ecx+0x10], dl
        lea eax, ss:[ebp-0x1C]
        push eax
        lea ecx, ss:[ebp-0x58]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x5C]
        call public_6d1b850
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x38], edx
        mov al, byte ptr ss : [ebp-0x54]
        mov byte ptr ss : [ebp-0x34], al
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0x10
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d15f80)
    }
}
