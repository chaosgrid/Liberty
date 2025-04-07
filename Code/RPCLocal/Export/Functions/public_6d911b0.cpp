#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d911b0);

PROC_DECLARE(0x6d911b0, internal_6d911b0, public_6d911b0);
extern "C" NAKED register_t __cdecl internal_6d911b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], dl
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], edx
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], ecx
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], edx
        mov eax, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], eax
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], ecx
        mov edx, dword ptr ds : [edi+0x2C]
        lea eax, ds:[edi+0x30]
        push eax
        lea ecx, ds:[esi+0x30]
        mov dword ptr ds : [esi+0x2C], edx
        call public_6d8f510
        mov ecx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], ecx
        mov edx, dword ptr ds : [edi+0x40]
        lea eax, ds:[edi+0x44]
        push eax
        lea ecx, ds:[esi+0x44]
        mov dword ptr ds : [esi+0x40], edx
        call public_6d8f510
        mov ecx, dword ptr ds : [edi+0x50]
        lea edx, ds:[edi+0x54]
        mov dword ptr ds : [esi+0x50], ecx
        push edx
        lea ecx, ds:[esi+0x54]
        call public_6d8f510
        lea eax, ds:[edi+0x60]
        push eax
        lea ecx, ds:[esi+0x60]
        call public_6d8f510
        lea ecx, ds:[edi+0x6C]
        push ecx
        lea ecx, ds:[esi+0x6C]
        call public_6d8f510
        lea edx, ds:[edi+0x78]
        push edx
        lea ecx, ds:[esi+0x78]
        call public_6d8f510
        mov eax, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], eax
        mov ecx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], ecx
        mov dl, byte ptr ds : [edi+0x8C]
        mov byte ptr ds : [esi+0x8C], dl
        mov al, byte ptr ds : [edi+0x8D]
        mov byte ptr ds : [esi+0x8D], al
        mov cl, byte ptr ds : [edi+0x8E]
        mov byte ptr ds : [esi+0x8E], cl
        mov dl, byte ptr ds : [edi+0x8F]
        mov byte ptr ds : [esi+0x8F], dl
        mov al, byte ptr ds : [edi+0x90]
        mov byte ptr ds : [esi+0x90], al
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d911b0)
    }
}
