#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfef97 _public_6bfef97
#define public_6bfefae _public_6bfefae
#define public_6bfefc0 _public_6bfefc0
#define public_6bfefe3 _public_6bfefe3
#define public_6bfeff5 _public_6bfeff5
#define public_6bff018 _public_6bff018
#define public_6bff02a _public_6bff02a
#define public_6bff053 _public_6bff053
#define public_6bff084 _public_6bff084

PROC_DECLARE(0x6bfef50, internal_6bfef50, public_6bfef50);
extern "C" NAKED register_t __cdecl internal_6bfef50()
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
        je public_6bfef97
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfef97 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfefae
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bfefae : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfefc0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfefc0 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfefe3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bfefe3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfeff5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfeff5 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x26]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bff018
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bff018 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bff02a
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bff02a : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bff053
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bff053 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6bff084
        mov dword ptr ds : [ecx+0x10], esi
        public_6bff084 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bfef50)
    }
}

#undef public_6bfef97
#undef public_6bfefae
#undef public_6bfefc0
#undef public_6bfefe3
#undef public_6bfeff5
#undef public_6bff018
#undef public_6bff02a
#undef public_6bff053
#undef public_6bff084
