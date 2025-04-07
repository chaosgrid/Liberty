#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daece4 _public_6daece4
#define public_6daecfb _public_6daecfb
#define public_6daed29 _public_6daed29
#define public_6daed5c _public_6daed5c
#define public_6daed86 _public_6daed86
#define public_6daedb0 _public_6daedb0
#define public_6daede1 _public_6daede1
#define public_6daee1d _public_6daee1d
#define public_6daee29 _public_6daee29

PROC_DECLARE(0x6daeca0, internal_6daeca0, public_6daeca0);
extern "C" NAKED register_t __cdecl internal_6daeca0()
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
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daece4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daece4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daecfb
        mov dword ptr ds : [esi+0xC], 0x17
        public_6daecfb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daee29
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x20], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daed29
        mov dword ptr ds : [esi+0xC], 0x17
        public_6daed29 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daee29
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x24]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6daed5c
        mov dword ptr ds : [esi+0xC], ebp
        public_6daed5c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daee29
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x30], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daed86
        mov dword ptr ds : [esi+0xC], ebp
        public_6daed86 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daee29
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x34], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daedb0
        mov dword ptr ds : [esi+0xC], ebp
        public_6daedb0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daee29
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        mov dword ptr ds : [edi+0x38], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daede1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6daede1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6daee1d
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6daee1d : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6daee29 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6daeca0)
    }
}

#undef public_6daece4
#undef public_6daecfb
#undef public_6daed29
#undef public_6daed5c
#undef public_6daed86
#undef public_6daedb0
#undef public_6daede1
#undef public_6daee1d
#undef public_6daee29
