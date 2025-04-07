#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daef07 _public_6daef07
#define public_6daef1e _public_6daef1e
#define public_6daef30 _public_6daef30
#define public_6daef53 _public_6daef53
#define public_6daef65 _public_6daef65
#define public_6daef86 _public_6daef86
#define public_6daef98 _public_6daef98
#define public_6daefc1 _public_6daefc1
#define public_6daeff2 _public_6daeff2

PROC_DECLARE(0x6daeec0, internal_6daeec0, public_6daeec0);
extern "C" NAKED register_t __cdecl internal_6daeec0()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daef07
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daef07 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daef1e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daef1e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daef30
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daef30 : nop
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
        jbe public_6daef53
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daef53 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daef65
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daef65 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daef86
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daef86 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6daef98
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daef98 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x28]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daefc1
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daefc1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6daeff2
        mov dword ptr ds : [ecx+0x10], esi
        public_6daeff2 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6daeec0)
    }
}

#undef public_6daef07
#undef public_6daef1e
#undef public_6daef30
#undef public_6daef53
#undef public_6daef65
#undef public_6daef86
#undef public_6daef98
#undef public_6daefc1
#undef public_6daeff2
