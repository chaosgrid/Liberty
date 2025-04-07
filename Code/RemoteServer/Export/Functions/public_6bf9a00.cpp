#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf9a47 _public_6bf9a47
#define public_6bf9a5e _public_6bf9a5e
#define public_6bf9a70 _public_6bf9a70
#define public_6bf9a93 _public_6bf9a93
#define public_6bf9aa5 _public_6bf9aa5
#define public_6bf9aca _public_6bf9aca
#define public_6bf9adc _public_6bf9adc
#define public_6bf9b09 _public_6bf9b09
#define public_6bf9b3a _public_6bf9b3a

PROC_DECLARE(0x6bf9a00, internal_6bf9a00, public_6bf9a00);
extern "C" NAKED register_t __cdecl internal_6bf9a00()
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
        je public_6bf9a47
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9a47 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf9a5e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf9a5e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf9a70
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9a70 : nop
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
        jbe public_6bf9a93
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf9a93 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf9aa5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9aa5 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf9aca
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf9aca : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf9adc
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9adc : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x26]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf9b09
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9b09 : nop
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
        jbe public_6bf9b3a
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf9b3a : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf9a00)
    }
}

#undef public_6bf9a47
#undef public_6bf9a5e
#undef public_6bf9a70
#undef public_6bf9a93
#undef public_6bf9aa5
#undef public_6bf9aca
#undef public_6bf9adc
#undef public_6bf9b09
#undef public_6bf9b3a
