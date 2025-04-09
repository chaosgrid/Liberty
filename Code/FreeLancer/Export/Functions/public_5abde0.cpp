#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5abde0);

#define public_5abe00 _public_5abe00
#define public_5abe2a _public_5abe2a
#define public_5abe48 _public_5abe48
#define public_5abe5e _public_5abe5e
#define public_5abe80 _public_5abe80
#define public_5abfd6 _public_5abfd6
#define public_5abfe7 _public_5abfe7
#define public_5abff8 _public_5abff8
#define public_5ac002 _public_5ac002

PROC_DECLARE(0x5abde0, internal_5abde0, public_5abde0);
extern "C" NAKED register_t __cdecl internal_5abde0()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x178]
        push esi
        mov esi, dword ptr ss : [ebp+0x174]
        cmp esi, eax
        push edi
        je public_5ac002
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_5abe00 : nop
        mov eax, dword ptr ds : [esi+0x6C]
        test eax, eax
        je public_5abe2a
        lea eax, ds:[edi+0x64]
        push eax
        lea ecx, ds:[esi+0x64]
        push ecx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        je public_5abe2a
        mov edx, dword ptr ds : [esi+0x90]
        cmp edx, dword ptr ds : [edi+0x90]
        je public_5abe5e
        public_5abe2a : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_5abe48
        push edi
        push esi
        call dword ptr ds : [public_5c7050]
        add esp, 8
        test al, al
        je public_5abe48
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, dword ptr ds : [edi+0x14]
        je public_5abe5e
        public_5abe48 : nop
        mov eax, dword ptr ss : [ebp+0x178]
        add esi, 0x9C
        cmp esi, eax
        jne public_5abe00
        pop edi
        pop esi
        pop ebp
        ret 4
        public_5abe5e : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x178]
        lea edi, ds:[esi+0x9C]
        cmp edi, ebx
        je public_5abfd6
        lea esi, ds:[edi-0x88]
        lea esp, ss:[esp]
        public_5abe80 : nop
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        lea ecx, ds:[esi-0x14]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [esi+0x9C]
        lea edx, ds:[esi+0xA0]
        mov dword ptr ds : [esi], ecx
        push edx
        lea ecx, ds:[esi+4]
        call public_5595c0
        mov eax, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [esi+0x24], ecx
        mov dl, byte ptr ds : [esi+0xC4]
        mov byte ptr ds : [esi+0x28], dl
        mov al, byte ptr ds : [esi+0xC5]
        mov byte ptr ds : [esi+0x29], al
        mov cl, byte ptr ds : [esi+0xC6]
        mov byte ptr ds : [esi+0x2A], cl
        mov edx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [esi+0x2C], edx
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xCC]
        push edx
        lea ecx, ds:[esi+0x30]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xDC]
        push edx
        lea ecx, ds:[esi+0x40]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xEC]
        push edx
        lea ecx, ds:[esi+0x50]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+0xFC]
        push edx
        lea ecx, ds:[esi+0x60]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [esi+0x10C]
        mov dword ptr ds : [esi+0x70], eax
        mov ecx, dword ptr ds : [esi+0x110]
        mov dword ptr ds : [esi+0x74], ecx
        mov edx, dword ptr ds : [esi+0x114]
        mov dword ptr ds : [esi+0x78], edx
        mov eax, dword ptr ds : [esi+0x118]
        mov dword ptr ds : [esi+0x7C], eax
        mov cl, byte ptr ds : [esi+0x11C]
        mov byte ptr ds : [esi+0x80], cl
        mov dl, byte ptr ds : [esi+0x11D]
        mov byte ptr ds : [esi+0x81], dl
        mov al, byte ptr ds : [esi+0x11E]
        mov byte ptr ds : [esi+0x82], al
        mov ecx, dword ptr ds : [esi+0x120]
        mov dword ptr ds : [esi+0x84], ecx
        add edi, 0x9C
        add esi, 0x9C
        cmp edi, ebx
        jne public_5abe80
        public_5abfd6 : nop
        mov edi, dword ptr ss : [ebp+0x178]
        lea esi, ds:[edi-0x9C]
        cmp esi, edi
        pop ebx
        je public_5abff8
        public_5abfe7 : nop
        mov ecx, esi
        call public_5686b0
        add esi, 0x9C
        cmp esi, edi
        jne public_5abfe7
        public_5abff8 : nop
        add dword ptr ss : [ebp+0x178], 0xFFFFFF64
        public_5ac002 : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x5abde0)
    }
}

#undef public_5abe00
#undef public_5abe2a
#undef public_5abe48
#undef public_5abe5e
#undef public_5abe80
#undef public_5abfd6
#undef public_5abfe7
#undef public_5abff8
#undef public_5ac002
