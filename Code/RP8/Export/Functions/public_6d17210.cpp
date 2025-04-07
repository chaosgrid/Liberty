#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17210);

PROC_DECLARE(0x6d17210, internal_6d17210, public_6d17210);
extern "C" NAKED register_t __cdecl internal_6d17210()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push edi
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], 8
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov ecx, 0xB
        xor eax, eax
        mov edi, dword ptr ss : [ebp-4]
        add edi, 8
        rep stosd
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x10], 0x80000000
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x1C], 3
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x20], 0x8000080
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], 0x34
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x30], 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d17210)
    }
}
