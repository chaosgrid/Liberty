#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6bed1f0);

#define public_6bda962 _public_6bda962
#define public_6bda979 _public_6bda979
#define public_6bda9a5 _public_6bda9a5
#define public_6bda9ed _public_6bda9ed
#define public_6bdaa2b _public_6bdaa2b
#define public_6bdaa37 _public_6bdaa37

PROC_DECLARE(0x6bda920, internal_6bda920, public_6bda920);
extern "C" NAKED register_t __cdecl internal_6bda920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bda962
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bda962 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bda979
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bda979 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bdaa37
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bda9a5
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bda9a5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bdaa37
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ebp
        push ecx
        mov ecx, edi
        mov byte ptr ds : [edi+0x24], dl
        call public_6bed1f0
        test eax, eax
        jne public_6bdaa37
        push esi
        push ebp
        push ebx
        mov ecx, edi
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bda9ed
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bda9ed : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6bdaa2b
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bdaa2b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bdaa37 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bda920)
    }
}

#undef public_6bda962
#undef public_6bda979
#undef public_6bda9a5
#undef public_6bda9ed
#undef public_6bdaa2b
#undef public_6bdaa37
