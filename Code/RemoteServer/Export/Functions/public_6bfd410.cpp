#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bfd453 _public_6bfd453
#define public_6bfd46c _public_6bfd46c
#define public_6bfd49d _public_6bfd49d
#define public_6bfd4b8 _public_6bfd4b8
#define public_6bfd516 _public_6bfd516
#define public_6bfd555 _public_6bfd555
#define public_6bfd561 _public_6bfd561

PROC_DECLARE(0x6bfd410, internal_6bfd410, public_6bfd410);
extern "C" NAKED register_t __cdecl internal_6bfd410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea ebp, ds:[ebx+0x10]
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6bfd453
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfd453 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfd46c
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfd46c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bfd561
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ebx+0x20]
        test eax, eax
        mov dword ptr ds : [ebx+0x24], edx
        jne public_6bfd49d
        mov eax, edx
        inc eax
        push eax
        call public_6c09d26
        add esp, 4
        mov dword ptr ds : [ebx+0x20], eax
        mov byte ptr ds : [ebx+0x28], 1
        public_6bfd49d : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ss : [ebp]
        add edx, ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6bfd4b8
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6bfd4b8 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6bfd561
        mov eax, dword ptr ds : [ebx+0x24]
        mov esi, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [ebx+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+0x20]
        add ecx, eax
        lea eax, ds:[ebx+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        mov byte ptr ds : [edx+ecx], 0
        mov edx, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        push eax
        mov ecx, ebx
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        pop edi
        je public_6bfd516
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfd516 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ss : [ebp]
        add eax, 2
        add ebx, eax
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add edx, 2
        cmp ebp, edx
        jbe public_6bfd555
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6bfd555 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfd561 : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfd410)
    }
}

#undef public_6bfd453
#undef public_6bfd46c
#undef public_6bfd49d
#undef public_6bfd4b8
#undef public_6bfd516
#undef public_6bfd555
#undef public_6bfd561
