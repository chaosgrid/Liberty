#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf2489 _public_6bf2489
#define public_6bf249f _public_6bf249f
#define public_6bf24af _public_6bf24af
#define public_6bf24cc _public_6bf24cc
#define public_6bf24dc _public_6bf24dc
#define public_6bf24fb _public_6bf24fb
#define public_6bf250b _public_6bf250b
#define public_6bf252a _public_6bf252a
#define public_6bf253a _public_6bf253a
#define public_6bf2557 _public_6bf2557
#define public_6bf2567 _public_6bf2567
#define public_6bf258e _public_6bf258e
#define public_6bf25bf _public_6bf25bf

PROC_DECLARE(0x6bf2440, internal_6bf2440, public_6bf2440);
extern "C" NAKED register_t __cdecl internal_6bf2440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
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
        je public_6bf2489
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf2489 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bf249f
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf249f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf24af
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf24af : nop
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
        jbe public_6bf24cc
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf24cc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf24dc
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf24dc : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf24fb
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf24fb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf250b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf250b : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf252a
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf252a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf253a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf253a : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf2557
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf2557 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf2567
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf2567 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x30]
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
        je public_6bf258e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf258e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
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
        jbe public_6bf25bf
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf25bf : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf2440)
    }
}

#undef public_6bf2489
#undef public_6bf249f
#undef public_6bf24af
#undef public_6bf24cc
#undef public_6bf24dc
#undef public_6bf24fb
#undef public_6bf250b
#undef public_6bf252a
#undef public_6bf253a
#undef public_6bf2557
#undef public_6bf2567
#undef public_6bf258e
#undef public_6bf25bf
