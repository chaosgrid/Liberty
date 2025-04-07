#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7530);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa73f0 _public_6fa73f0
#define public_6fa740f _public_6fa740f
#define public_6fa742c _public_6fa742c
#define public_6fa7430 _public_6fa7430
#define public_6fa7450 _public_6fa7450
#define public_6fa74a1 _public_6fa74a1
#define public_6fa74bd _public_6fa74bd
#define public_6fa74e5 _public_6fa74e5
#define public_6fa74f0 _public_6fa74f0
#define public_6fa7502 _public_6fa7502
#define public_6fa750e _public_6fa750e
#define public_6fa751b _public_6fa751b
#define public_6fa7523 _public_6fa7523

PROC_DECLARE(0x6fa73c0, internal_6fa73c0, public_6fa73c0);
extern "C" NAKED register_t __cdecl internal_6fa73c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_6fa7523
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_6fa742c
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6fa740f
        nop 
        public_6fa73f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6fa6ea0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6fa73f0
        public_6fa740f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6fa7450
        public_6fa742c : nop
        cmp eax, edi
        je public_6fa7450
        public_6fa7430 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6fa7430
        public_6fa7450 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [ecx+1]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], dl
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [ebx+0x15]
        test cl, cl
        jne public_6fa74bd
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_6f214c0
        mov edi, eax
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        call public_6f305b0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_6fa74a1
        mov ebp, edi
        public_6fa74a1 : nop
        mov ecx, dword ptr ds : [ebx]
        push edi
        push ecx
        mov ecx, esi
        call public_6fa7530
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+8]
        push edi
        push edx
        mov ecx, esi
        call public_6fa7530
        mov dword ptr ds : [edi+8], eax
        public_6fa74bd : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], ebp
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        pop ebp
        je public_6fa751b
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6fa74f0
        public_6fa74e5 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6fa74e5
        public_6fa74f0 : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6fa750e
        public_6fa7502 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6fa7502
        public_6fa750e : nop
        mov eax, esi
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 8
        ret 4
        public_6fa751b : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        public_6fa7523 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6fa73c0)
    }
}

#undef public_6fa73f0
#undef public_6fa740f
#undef public_6fa742c
#undef public_6fa7430
#undef public_6fa7450
#undef public_6fa74a1
#undef public_6fa74bd
#undef public_6fa74e5
#undef public_6fa74f0
#undef public_6fa7502
#undef public_6fa750e
#undef public_6fa751b
#undef public_6fa7523
