#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ebf0);

PROC_DECLARE(0x44ebf0, internal_44ebf0, public_44ebf0);
extern "C" NAKED register_t __cdecl internal_44ebf0()
{
    __asm
    {
        sub esp, 0xC
        mov dword ptr ss : [esp], 0
        mov edx, dword ptr ss : [esp]
        mov eax, ecx
        mov dword ptr ds : [eax], edx
        push ebx
        mov dword ptr ss : [esp+8], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        push esi
        mov esi, 0x3F800000
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edx
        xor eax, eax
        mov dword ptr ds : [ecx+0x2C], esi
        mov dword ptr ds : [ecx+0x1C], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [ecx+0x28], eax
        mov dword ptr ds : [ecx+0x24], eax
        mov dword ptr ds : [ecx+0x20], eax
        mov dword ptr ds : [ecx+0x18], eax
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+0x10], eax
        lea edx, ds:[ecx+0x64]
        mov dword ptr ds : [ecx+0x30], eax
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [ecx+0x3C], eax
        mov dword ptr ds : [ecx+0x40], eax
        mov byte ptr ds : [ecx+0x44], al
        mov byte ptr ds : [ecx+0x45], al
        mov dword ptr ds : [ecx+0x48], eax
        mov dword ptr ds : [ecx+0x4C], eax
        mov byte ptr ds : [ecx+0x5F], al
        mov byte ptr ds : [ecx+0x61], al
        mov dword ptr ds : [ecx+0x9C], eax
        push edi
        mov ebx, eax
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edx+0x2C], esi
        mov dword ptr ds : [edx+0x1C], esi
        mov dword ptr ds : [edx+0xC], esi
        mov dword ptr ds : [edx+0x28], eax
        mov dword ptr ds : [edx+0x24], eax
        mov dword ptr ds : [edx+0x20], eax
        mov dword ptr ds : [edx+0x18], eax
        mov dword ptr ds : [edx+0x14], eax
        mov dword ptr ds : [edx+0x10], eax
        pop edi
        pop esi
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [ecx+0x94], eax
        mov dword ptr ds : [ecx+0x98], eax
        mov dword ptr ds : [ecx+0x50], eax
        mov byte ptr ds : [ecx+0x54], al
        mov byte ptr ds : [ecx+0x55], al
        mov byte ptr ds : [ecx+0x56], 1
        mov dword ptr ds : [ecx+0x58], eax
        mov byte ptr ds : [ecx+0x5D], al
        mov byte ptr ds : [ecx+0x5E], al
        mov dword ptr ds : [ecx+0xA0], eax
        mov dword ptr ds : [ecx+0xA4], eax
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x44ebf0)
    }
}
