#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b3ade7 _public_6b3ade7
#define public_6b3adfe _public_6b3adfe
#define public_6b3ae10 _public_6b3ae10
#define public_6b3ae33 _public_6b3ae33
#define public_6b3ae45 _public_6b3ae45
#define public_6b3ae70 _public_6b3ae70
#define public_6b3aea3 _public_6b3aea3

PROC_DECLARE(0x6b3ada0, internal_6b3ada0, public_6b3ada0);
extern "C" NAKED register_t __cdecl internal_6b3ada0()
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
        je public_6b3ade7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3ade7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b3adfe
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b3adfe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b3ae10
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3ae10 : nop
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
        jbe public_6b3ae33
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b3ae33 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b3ae45
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3ae45 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b3ae70
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3ae70 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b3aea3
        mov dword ptr ds : [ecx+0x10], esi
        public_6b3aea3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b3ada0)
    }
}

#undef public_6b3ade7
#undef public_6b3adfe
#undef public_6b3ae10
#undef public_6b3ae33
#undef public_6b3ae45
#undef public_6b3ae70
#undef public_6b3aea3
