#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b43512 _public_6b43512
#define public_6b4352c _public_6b4352c
#define public_6b43663 _public_6b43663
#define public_6b436a1 _public_6b436a1
#define public_6b436ad _public_6b436ad

PROC_DECLARE(0x6b434d0, internal_6b434d0, public_6b434d0);
extern "C" NAKED register_t __cdecl internal_6b434d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ds:[esi+0x10]
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea ebp, ds:[esi+0x18]
        push ebp
        mov ecx, esi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b43512
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b43512 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0x94
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b4352c
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6b4352c : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b436ad
        push edi
        mov edi, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi+0x20], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x24], eax
        mov cl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+0x28], cl
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x30], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x34], ecx
        mov edx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x38], edx
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x3C], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x40], ecx
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x44], edx
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x48], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        lea edx, ds:[edi+0x30]
        mov dword ptr ds : [esi+0x4C], ecx
        push edx
        lea ecx, ds:[esi+0x50]
        call public_6b3a160
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x5C], eax
        mov ecx, dword ptr ds : [edi+0x40]
        lea edx, ds:[edi+0x44]
        mov dword ptr ds : [esi+0x60], ecx
        push edx
        lea ecx, ds:[esi+0x64]
        call public_6b3a160
        mov eax, dword ptr ds : [edi+0x50]
        lea ecx, ds:[edi+0x54]
        push ecx
        lea ecx, ds:[esi+0x74]
        mov dword ptr ds : [esi+0x70], eax
        call public_6b3a160
        lea edx, ds:[edi+0x60]
        push edx
        lea ecx, ds:[esi+0x80]
        call public_6b3a160
        lea eax, ds:[edi+0x6C]
        push eax
        lea ecx, ds:[esi+0x8C]
        call public_6b3a160
        lea ecx, ds:[edi+0x78]
        push ecx
        lea ecx, ds:[esi+0x98]
        call public_6b3a160
        mov edx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0xA4], edx
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0xA8], eax
        mov cl, byte ptr ds : [edi+0x8C]
        mov byte ptr ds : [esi+0xAC], cl
        mov dl, byte ptr ds : [edi+0x8D]
        mov byte ptr ds : [esi+0xAD], dl
        mov al, byte ptr ds : [edi+0x8E]
        mov byte ptr ds : [esi+0xAE], al
        mov cl, byte ptr ds : [edi+0x8F]
        mov eax, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0xAF], cl
        mov dl, byte ptr ds : [edi+0x90]
        push ebx
        push eax
        mov byte ptr ds : [esi+0xB0], dl
        add edi, 0x94
        push ebp
        mov ecx, esi
        mov dword ptr ss : [ebp], edi
        call public_6b4e7a0
        mov dword ptr ds : [esi+0x1C], eax
        pop edi
        test eax, eax
        je public_6b43663
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b43663 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6b436a1
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b436a1 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b436ad : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b434d0)
    }
}

#undef public_6b43512
#undef public_6b4352c
#undef public_6b43663
#undef public_6b436a1
#undef public_6b436ad
