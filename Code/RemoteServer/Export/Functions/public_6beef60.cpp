#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6beefa7 _public_6beefa7
#define public_6beefbc _public_6beefbc
#define public_6beefce _public_6beefce
#define public_6beefef _public_6beefef
#define public_6bef001 _public_6bef001
#define public_6bef02c _public_6bef02c
#define public_6bef05f _public_6bef05f

PROC_DECLARE(0x6beef60, internal_6beef60, public_6beef60);
extern "C" NAKED register_t __cdecl internal_6beef60()
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
        je public_6beefa7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beefa7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6beefbc
        mov dword ptr ds : [esi+0xC], 0x16
        public_6beefbc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6beefce
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6beefce : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6beefef
        mov dword ptr ds : [esi+0xC], 0x16
        public_6beefef : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bef001
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bef001 : nop
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
        je public_6bef02c
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bef02c : nop
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
        jbe public_6bef05f
        mov dword ptr ds : [ecx+0x10], esi
        public_6bef05f : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6beef60)
    }
}

#undef public_6beefa7
#undef public_6beefbc
#undef public_6beefce
#undef public_6beefef
#undef public_6bef001
#undef public_6bef02c
#undef public_6bef05f
