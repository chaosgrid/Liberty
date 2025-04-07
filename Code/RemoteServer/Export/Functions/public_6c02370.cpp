#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c023b4 _public_6c023b4
#define public_6c023cb _public_6c023cb
#define public_6c023f9 _public_6c023f9
#define public_6c0242c _public_6c0242c
#define public_6c02456 _public_6c02456
#define public_6c02480 _public_6c02480
#define public_6c024b1 _public_6c024b1
#define public_6c024ed _public_6c024ed
#define public_6c024f9 _public_6c024f9

PROC_DECLARE(0x6c02370, internal_6c02370, public_6c02370);
extern "C" NAKED register_t __cdecl internal_6c02370()
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c023b4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c023b4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c023cb
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c023cb : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c024f9
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
        jbe public_6c023f9
        mov dword ptr ds : [esi+0xC], 0x17
        public_6c023f9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c024f9
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x24]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6c0242c
        mov dword ptr ds : [esi+0xC], ebp
        public_6c0242c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c024f9
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
        jbe public_6c02456
        mov dword ptr ds : [esi+0xC], ebp
        public_6c02456 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c024f9
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
        jbe public_6c02480
        mov dword ptr ds : [esi+0xC], ebp
        public_6c02480 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c024f9
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
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c024b1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c024b1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
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
        jbe public_6c024ed
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c024ed : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c024f9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c02370)
    }
}

#undef public_6c023b4
#undef public_6c023cb
#undef public_6c023f9
#undef public_6c0242c
#undef public_6c02456
#undef public_6c02480
#undef public_6c024b1
#undef public_6c024ed
#undef public_6c024f9
