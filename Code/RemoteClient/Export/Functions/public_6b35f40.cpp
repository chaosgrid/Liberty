#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b36073 _public_6b36073

PROC_DECLARE(0x6b35f40, internal_6b35f40, public_6b35f40);
extern "C" NAKED register_t __cdecl internal_6b35f40()
{
    __asm
    {
        push ecx
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x4E
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36073
        mov ecx, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[ecx+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov cl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], cl
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], ecx
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        lea edx, ds:[edi+0x30]
        mov dword ptr ds : [esi+0x2C], ecx
        push edx
        lea ecx, ds:[esi+0x30]
        call public_6b3a160
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], eax
        mov ecx, dword ptr ds : [edi+0x40]
        lea edx, ds:[edi+0x44]
        mov dword ptr ds : [esi+0x40], ecx
        push edx
        lea ecx, ds:[esi+0x44]
        call public_6b3a160
        mov eax, dword ptr ds : [edi+0x50]
        lea ecx, ds:[edi+0x54]
        push ecx
        lea ecx, ds:[esi+0x54]
        mov dword ptr ds : [esi+0x50], eax
        call public_6b3a160
        lea edx, ds:[edi+0x60]
        push edx
        lea ecx, ds:[esi+0x60]
        call public_6b3a160
        lea eax, ds:[edi+0x6C]
        push eax
        lea ecx, ds:[esi+0x6C]
        call public_6b3a160
        lea ecx, ds:[edi+0x78]
        push ecx
        lea ecx, ds:[esi+0x78]
        call public_6b3a160
        mov edx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], edx
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        mov cl, byte ptr ds : [edi+0x8C]
        mov byte ptr ds : [esi+0x8C], cl
        mov dl, byte ptr ds : [edi+0x8D]
        mov byte ptr ds : [esi+0x8D], dl
        mov al, byte ptr ds : [edi+0x8E]
        mov byte ptr ds : [esi+0x8E], al
        mov cl, byte ptr ds : [edi+0x8F]
        mov byte ptr ds : [esi+0x8F], cl
        mov dl, byte ptr ds : [edi+0x90]
        mov byte ptr ds : [esi+0x90], dl
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, dword ptr ds : [edx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        public_6b36073 : nop
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b35f40)
    }
}

#undef public_6b36073
