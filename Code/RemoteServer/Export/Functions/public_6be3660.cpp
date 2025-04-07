#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6be36a7 _public_6be36a7
#define public_6be36be _public_6be36be
#define public_6be36d0 _public_6be36d0
#define public_6be36f3 _public_6be36f3
#define public_6be3705 _public_6be3705
#define public_6be3730 _public_6be3730
#define public_6be3763 _public_6be3763

PROC_DECLARE(0x6be3660, internal_6be3660, public_6be3660);
extern "C" NAKED register_t __cdecl internal_6be3660()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6be36a7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6be36a7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6be36be
        mov dword ptr ds : [esi+0xC], 0x16
        public_6be36be : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6be36d0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6be36d0 : nop
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
        jbe public_6be36f3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6be36f3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6be3705
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6be3705 : nop
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
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6be3730
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6be3730 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
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
        jbe public_6be3763
        mov dword ptr ds : [ecx+0x10], esi
        public_6be3763 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6be3660)
    }
}

#undef public_6be36a7
#undef public_6be36be
#undef public_6be36d0
#undef public_6be36f3
#undef public_6be3705
#undef public_6be3730
#undef public_6be3763
