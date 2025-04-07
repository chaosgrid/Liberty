#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661eb80);

PROC_DECLARE(0x661eb80, internal_661eb80, public_661eb80);
extern "C" NAKED register_t __cdecl internal_661eb80()
{
    __asm
    {
        push ebx
        push ebp
        mov edx, ecx
        push esi
        xor esi, esi
        mov ebp, 0x3F800000
        mov dword ptr ds : [edx+0x10], esi
        mov dword ptr ds : [edx+0x14], esi
        mov dword ptr ds : [edx+0x18], esi
        mov dword ptr ds : [edx+0x1C], esi
        mov dword ptr ds : [edx+0x20], esi
        mov dword ptr ds : [edx+0x24], esi
        lea ebx, ds:[edx+0x5C]
        push edi
        mov dword ptr ds : [edx+0x4C], ebp
        mov dword ptr ds : [edx+0x3C], ebp
        mov dword ptr ds : [edx+0x2C], ebp
        mov dword ptr ds : [edx+0x48], esi
        mov dword ptr ds : [edx+0x44], esi
        mov dword ptr ds : [edx+0x40], esi
        mov dword ptr ds : [edx+0x38], esi
        mov dword ptr ds : [edx+0x34], esi
        mov dword ptr ds : [edx+0x30], esi
        mov dword ptr ds : [edx+0x58], esi
        mov dword ptr ds : [edx+0x54], esi
        mov dword ptr ds : [edx+0x50], esi
        mov ecx, 0x17
        xor eax, eax
        mov edi, ebx
        mov dword ptr ds : [ebx], 0xFFFFFFFF
        rep stosd
        mov ecx, 7
        lea edi, ds:[ebx+0x5C]
        rep stosd
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x68], ebp
        mov byte ptr ds : [ebx+0x78], 1
        mov dword ptr ds : [edx+0xDC], esi
        mov dword ptr ds : [edx+0xE0], esi
        mov dword ptr ds : [edx+0xE4], esi
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+0xC], esi
        mov dword ptr ds : [edx+0x28], esi
        mov dword ptr ds : [edx+0xE8], esi
        pop edi
        pop esi
        mov dword ptr ds : [edx+8], eax
        pop ebp
        mov dword ptr ds : [edx+0xD8], 0xBF800000
        mov eax, edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x661eb80)
    }
}
