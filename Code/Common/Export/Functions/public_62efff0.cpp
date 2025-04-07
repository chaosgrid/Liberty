#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x62efff0, internal_62efff0, public_62efff0);
extern "C" NAKED register_t __cdecl internal_62efff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call public_6333e40
        lea ecx, ds:[esi+0xC]
        call public_6333e30
        xor ebx, ebx
        mov edi, 0x3F800000
        lea ecx, ds:[esi+0x24]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], 0x42C80000
        mov dword ptr ds : [esi+0x20], edi
        call public_6333e40
        mov cl, byte ptr ss : [esp+0x10]
        mov dl, byte ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        or eax, 0xFFFFFFFF
        mov byte ptr ds : [esi+0x38], bl
        mov byte ptr ds : [esi+0x39], bl
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        push 0x44
        mov byte ptr ds : [esi+0x48], cl
        mov byte ptr ds : [esi+0x49], dl
        mov byte ptr ds : [esi+0x54], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x41], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x40], cl
        mov dword ptr ds : [esi+0x50], eax
        mov byte ptr ds : [eax+0x41], cl
        mov eax, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x50]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+0x50]
        push 0x44
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x40], bl
        mov byte ptr ds : [eax+0x41], bl
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x4C]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x58], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_63a11f0
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62efff0)
    }
}
