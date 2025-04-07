#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f8d0);

#define public_6b45509 _public_6b45509
#define public_6b45520 _public_6b45520
#define public_6b45533 _public_6b45533
#define public_6b45554 _public_6b45554
#define public_6b45567 _public_6b45567
#define public_6b455ab _public_6b455ab
#define public_6b455db _public_6b455db
#define public_6b455e7 _public_6b455e7

PROC_DECLARE(0x6b454c0, internal_6b454c0, public_6b454c0);
extern "C" NAKED register_t __cdecl internal_6b454c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b45509
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b45509 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b45520
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b45520 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b45533
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b45533 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b45554
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b45554 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b45567
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b45567 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push eax
        push ecx
        mov ecx, edi
        call public_6b4f8d0
        test eax, eax
        jne public_6b455e7
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b455ab
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b455ab : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b455db
        mov dword ptr ds : [ecx+0x10], esi
        public_6b455db : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b455e7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b454c0)
    }
}

#undef public_6b45509
#undef public_6b45520
#undef public_6b45533
#undef public_6b45554
#undef public_6b45567
#undef public_6b455ab
#undef public_6b455db
#undef public_6b455e7
