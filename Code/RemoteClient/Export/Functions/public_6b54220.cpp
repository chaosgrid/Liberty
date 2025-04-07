#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b54267 _public_6b54267
#define public_6b5427e _public_6b5427e
#define public_6b54290 _public_6b54290
#define public_6b542b3 _public_6b542b3
#define public_6b542c5 _public_6b542c5
#define public_6b542e6 _public_6b542e6
#define public_6b542f8 _public_6b542f8
#define public_6b54321 _public_6b54321
#define public_6b54352 _public_6b54352

PROC_DECLARE(0x6b54220, internal_6b54220, public_6b54220);
extern "C" NAKED register_t __cdecl internal_6b54220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
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
        je public_6b54267
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b54267 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5427e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5427e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b54290
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b54290 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b542b3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b542b3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b542c5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b542c5 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b542e6
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b542e6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b542f8
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b542f8 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x28]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b54321
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b54321 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b54352
        mov dword ptr ds : [ecx+0x10], esi
        public_6b54352 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b54220)
    }
}

#undef public_6b54267
#undef public_6b5427e
#undef public_6b54290
#undef public_6b542b3
#undef public_6b542c5
#undef public_6b542e6
#undef public_6b542f8
#undef public_6b54321
#undef public_6b54352
