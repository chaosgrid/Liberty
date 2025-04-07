#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfb992 _public_6bfb992
#define public_6bfb9a9 _public_6bfb9a9
#define public_6bfb9d9 _public_6bfb9d9
#define public_6bfba17 _public_6bfba17
#define public_6bfba23 _public_6bfba23

PROC_DECLARE(0x6bfb950, internal_6bfb950, public_6bfb950);
extern "C" NAKED register_t __cdecl internal_6bfb950()
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
        je public_6bfb992
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfb992 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfb9a9
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bfb9a9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfba23
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x20], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfb9d9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfb9d9 : nop
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
        jbe public_6bfba17
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bfba17 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfba23 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfb950)
    }
}

#undef public_6bfb992
#undef public_6bfb9a9
#undef public_6bfb9d9
#undef public_6bfba17
#undef public_6bfba23
