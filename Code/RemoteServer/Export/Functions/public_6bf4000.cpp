#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf404f _public_6bf404f
#define public_6bf4066 _public_6bf4066
#define public_6bf407c _public_6bf407c
#define public_6bf40bb _public_6bf40bb
#define public_6bf40d1 _public_6bf40d1
#define public_6bf4119 _public_6bf4119
#define public_6bf412f _public_6bf412f
#define public_6bf4152 _public_6bf4152
#define public_6bf4168 _public_6bf4168
#define public_6bf4197 _public_6bf4197
#define public_6bf41ca _public_6bf41ca

PROC_DECLARE(0x6bf4000, internal_6bf4000, public_6bf4000);
extern "C" NAKED register_t __cdecl internal_6bf4000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
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
        je public_6bf404f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf404f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf4066
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf4066 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf407c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf407c : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf40bb
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf40bb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf40d1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf40d1 : nop
        mov ebp, dword ptr ds : [ebx]
        lea edx, ds:[edi+0x2C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6bda220
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf4119
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf4119 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf412f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf412f : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x3C]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf4152
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf4152 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf4168
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf4168 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x40]
        fstp dword ptr ds : [eax]
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
        je public_6bf4197
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf4197 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
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
        jbe public_6bf41ca
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf41ca : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6bf4000)
    }
}

#undef public_6bf404f
#undef public_6bf4066
#undef public_6bf407c
#undef public_6bf40bb
#undef public_6bf40d1
#undef public_6bf4119
#undef public_6bf412f
#undef public_6bf4152
#undef public_6bf4168
#undef public_6bf4197
#undef public_6bf41ca
