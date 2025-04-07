#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daf9b5 _public_6daf9b5
#define public_6daf9ce _public_6daf9ce
#define public_6dafa00 _public_6dafa00
#define public_6dafa55 _public_6dafa55
#define public_6dafa94 _public_6dafa94
#define public_6dafaa0 _public_6dafaa0

PROC_DECLARE(0x6daf970, internal_6daf970, public_6daf970);
extern "C" NAKED register_t __cdecl internal_6daf970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[ebx+0x10]
        push edi
        push ebp
        push eax
        mov dword ptr ss : [ebp+8], ecx
        lea esi, ds:[ebx+0x18]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp], 0
        mov dword ptr ss : [ebp+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6daf9b5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daf9b5 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp], edx
        jbe public_6daf9ce
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6daf9ce : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6dafaa0
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        xor edx, edx
        mov dx, cx
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov edi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp], edi
        jbe public_6dafa00
        mov dword ptr ss : [ebp+0xC], 0x17
        public_6dafa00 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6dafaa0
        mov esi, dword ptr ds : [esi]
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        lea edi, ds:[ebx+0x20]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, edx
        lea eax, ds:[ebx+0x18]
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [edx+ebx+0x20], 0
        mov edx, dword ptr ss : [esp+0x18]
        push ebp
        push edx
        push eax
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6dafa55
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dafa55 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ss : [ebp]
        add eax, 2
        add ebx, eax
        mov dword ptr ds : [ecx+0x1C], ebx
        mov ebp, dword ptr ss : [ebp]
        add edx, 2
        cmp ebp, edx
        jbe public_6dafa94
        add ebp, 2
        mov dword ptr ds : [ecx+0x14], ebp
        public_6dafa94 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dafaa0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6daf970)
    }
}

#undef public_6daf9b5
#undef public_6daf9ce
#undef public_6dafa00
#undef public_6dafa55
#undef public_6dafa94
#undef public_6dafaa0
