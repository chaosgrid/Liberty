#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf6617 _public_6bf6617
#define public_6bf662e _public_6bf662e
#define public_6bf6640 _public_6bf6640
#define public_6bf6663 _public_6bf6663
#define public_6bf6675 _public_6bf6675
#define public_6bf66a0 _public_6bf66a0
#define public_6bf66d3 _public_6bf66d3

PROC_DECLARE(0x6bf65d0, internal_6bf65d0, public_6bf65d0);
extern "C" NAKED register_t __cdecl internal_6bf65d0()
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
        je public_6bf6617
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf6617 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf662e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf662e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf6640
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf6640 : nop
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
        jbe public_6bf6663
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf6663 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf6675
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf6675 : nop
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
        je public_6bf66a0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf66a0 : nop
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
        jbe public_6bf66d3
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf66d3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf65d0)
    }
}

#undef public_6bf6617
#undef public_6bf662e
#undef public_6bf6640
#undef public_6bf6663
#undef public_6bf6675
#undef public_6bf66a0
#undef public_6bf66d3
