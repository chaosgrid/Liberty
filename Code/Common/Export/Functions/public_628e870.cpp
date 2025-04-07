#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282ff0);
CLANG_FORWARD_PROC_SYMBOL(public_628e870);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628e927 _public_628e927
#define public_628e944 _public_628e944
#define public_628e970 _public_628e970
#define public_628e97b _public_628e97b
#define public_628e990 _public_628e990
#define public_628e99c _public_628e99c
#define public_628e9a8 _public_628e9a8

PROC_DECLARE(0x628e870, internal_628e870, public_628e870);
extern "C" NAKED register_t __cdecl internal_628e870()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        push 0x14
        mov byte ptr ds : [esi+0xC], dl
        call public_6391d9c
        mov byte ptr ds : [eax+0x11], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x14
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x10], 0
        mov byte ptr ds : [eax+0x11], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ss : [ebp+0x11]
        add esp, 8
        test cl, cl
        jne public_628e944
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x10]
        mov ecx, esi
        push edx
        push eax
        call public_6319070
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_630cd00
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_628e927
        mov dword ptr ss : [esp+0x14], ebx
        public_628e927 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6282ff0
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6282ff0
        mov dword ptr ds : [ebx+8], eax
        public_628e944 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_628e9a8
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_628e97b
        lea ebx, ds:[ebx]
        public_628e970 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_628e970
        public_628e97b : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_628e99c
        lea ecx, ds:[ecx]
        public_628e990 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_628e990
        public_628e99c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_628e9a8 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x628e870)
    }
}

#undef public_628e927
#undef public_628e944
#undef public_628e970
#undef public_628e97b
#undef public_628e990
#undef public_628e99c
#undef public_628e9a8
