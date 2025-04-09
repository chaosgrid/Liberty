#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b7390);
CLANG_FORWARD_PROC_SYMBOL(public_4bf720);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c4060);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4bf77b _public_4bf77b
#define public_4bf788 _public_4bf788
#define public_4bf7e9 _public_4bf7e9
#define public_4bf814 _public_4bf814
#define public_4bf81f _public_4bf81f
#define public_4bf832 _public_4bf832

PROC_DECLARE(0x4bf720, internal_4bf720, public_4bf720);
extern "C" NAKED register_t __cdecl internal_4bf720()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        call public_4c4060
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[edi+0x20]
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], ebp
        call dword ptr ds : [public_5c618c]
        call public_4c4ce0
        test eax, eax
        je public_4bf77b
        lea esi, ds:[edi+0x38]
        call public_4c4ce0
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6428]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6228]
        public_4bf77b : nop
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4bf81f
        public_4bf788 : nop
        mov dl, byte ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov ax, word ptr ds : [esi+0xA]
        mov byte ptr ss : [esp+0x1C], dl
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [esi+0x1C]
        mov word ptr ss : [esp+0x1E], ax
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        mov dword ptr ss : [esp+0x2C], ecx
        mov cl, byte ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [esi+0x24]
        mov byte ptr ss : [esp+0x28], al
        mov byte ptr ss : [esp+0x34], cl
        mov dword ptr ss : [esp+0x38], edx
        jne public_4bf814
        test cl, cl
        jne public_4bf814
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0x28
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_4bf7e9
        mov ebp, eax
        public_4bf7e9 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_4b7390
        mov eax, dword ptr ds : [ebx+8]
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc eax
        mov dword ptr ds : [ebx+8], eax
        public_4bf814 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+4]
        jne public_4bf788
        public_4bf81f : nop
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4bf850
        mov eax, dword ptr ds : [edi+0x28]
        sub eax, dword ptr ds : [edi+0x30]
        jns public_4bf832
        xor eax, eax
        public_4bf832 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x4bf720)
    }
}

#undef public_4bf77b
#undef public_4bf788
#undef public_4bf7e9
#undef public_4bf814
#undef public_4bf81f
#undef public_4bf832
