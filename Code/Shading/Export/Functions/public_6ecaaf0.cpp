#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec55d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb890);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbca0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecec60);

#define public_6ecab10 _public_6ecab10
#define public_6ecab23 _public_6ecab23
#define public_6ecab26 _public_6ecab26
#define public_6ecab2a _public_6ecab2a
#define public_6ecab89 _public_6ecab89
#define public_6ecaba1 _public_6ecaba1
#define public_6ecabab _public_6ecabab
#define public_6ecabaf _public_6ecabaf
#define public_6ecabc0 _public_6ecabc0
#define public_6ecabfb _public_6ecabfb
#define public_6ecac0a _public_6ecac0a
#define public_6ecac2b _public_6ecac2b
#define public_6ecac4c _public_6ecac4c
#define public_6ecac5a _public_6ecac5a
#define public_6ecac79 _public_6ecac79
#define public_6ecac85 _public_6ecac85
#define public_6ecaca1 _public_6ecaca1
#define public_6ecacbc _public_6ecacbc
#define public_6ecacc3 _public_6ecacc3
#define public_6ecace6 _public_6ecace6

PROC_DECLARE(0x6ecaaf0, internal_6ecaaf0, public_6ecaaf0);
extern "C" NAKED register_t __cdecl internal_6ecaaf0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6ecab2a
        lea esp, ss:[esp]
        public_6ecab10 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6ecab23
        mov ebp, dword ptr ss : [ebp]
        jmp public_6ecab26
        public_6ecab23 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6ecab26 : nop
        cmp ebp, edx
        jne public_6ecab10
        public_6ecab2a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6ecaca1
        push 0
        push esi
        mov ecx, edi
        call public_6ecb890
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ecbca0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6ecab89
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6ecab89
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6ecab89
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecabaf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ecabaf
        public_6ecab89 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6ecaba1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecabab
        public_6ecaba1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ecabab
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6ecabab : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ecabaf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6ecac85
        lea ecx, ds:[ecx]
        public_6ecabc0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_6ecac85
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ecac2b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6ecabfb
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6ecac79
        public_6ecabfb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecac0a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ecec60
        public_6ecac0a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x18], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6ec55d0
        jmp public_6ecac79
        public_6ecac2b : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_6ecac4c
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6ecac79
        public_6ecac4c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6ecac5a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ec55d0
        public_6ecac5a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6ecec60
        public_6ecac79 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6ecabc0
        public_6ecac85 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6ecaca1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6ecacbc
        cmp esi, dword ptr ds : [ecx]
        je public_6ecacc3
        lea ecx, ss:[esp+0x10]
        call public_6ecb8b0
        mov edx, dword ptr ss : [esp+0x10]
        public_6ecacbc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6ecace6
        public_6ecacc3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ecb5b0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6ecace6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ecaaf0)
    }
}

#undef public_6ecab10
#undef public_6ecab23
#undef public_6ecab26
#undef public_6ecab2a
#undef public_6ecab89
#undef public_6ecaba1
#undef public_6ecabab
#undef public_6ecabaf
#undef public_6ecabc0
#undef public_6ecabfb
#undef public_6ecac0a
#undef public_6ecac2b
#undef public_6ecac4c
#undef public_6ecac5a
#undef public_6ecac79
#undef public_6ecac85
#undef public_6ecaca1
#undef public_6ecacbc
#undef public_6ecacc3
#undef public_6ecace6
