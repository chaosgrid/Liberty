#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f950);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2fa07 _public_6f2fa07
#define public_6f2fa24 _public_6f2fa24
#define public_6f2fa50 _public_6f2fa50
#define public_6f2fa5b _public_6f2fa5b
#define public_6f2fa70 _public_6f2fa70
#define public_6f2fa7c _public_6f2fa7c
#define public_6f2fa88 _public_6f2fa88

PROC_DECLARE(0x6f2f950, internal_6f2f950, public_6f2f950);
extern "C" NAKED register_t __cdecl internal_6f2f950()
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
        push 0x18
        mov byte ptr ds : [esi+0xC], dl
        call public_6fa912a
        mov byte ptr ds : [eax+0x15], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x18
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
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
        mov cl, byte ptr ss : [ebp+0x15]
        add esp, 8
        test cl, cl
        jne public_6f2fa24
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_6f214c0
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6f305b0
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6f2fa07
        mov dword ptr ss : [esp+0x14], ebx
        public_6f2fa07 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6f2fcc0
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6f2fcc0
        mov dword ptr ds : [ebx+8], eax
        public_6f2fa24 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f2fa88
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6f2fa5b
        lea ebx, ds:[ebx]
        public_6f2fa50 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f2fa50
        public_6f2fa5b : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f2fa7c
        lea ecx, ds:[ecx]
        public_6f2fa70 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f2fa70
        public_6f2fa7c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_6f2fa88 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f2f950)
    }
}

#undef public_6f2fa07
#undef public_6f2fa24
#undef public_6f2fa50
#undef public_6f2fa5b
#undef public_6f2fa70
#undef public_6f2fa7c
#undef public_6f2fa88
