#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf4224 _public_6bf4224
#define public_6bf423b _public_6bf423b
#define public_6bf426d _public_6bf426d
#define public_6bf429f _public_6bf429f
#define public_6bf42cd _public_6bf42cd
#define public_6bf4301 _public_6bf4301
#define public_6bf433d _public_6bf433d
#define public_6bf4349 _public_6bf4349

PROC_DECLARE(0x6bf41e0, internal_6bf41e0, public_6bf41e0);
extern "C" NAKED register_t __cdecl internal_6bf41e0()
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
        je public_6bf4224
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf4224 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf423b
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf423b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf4349
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x20]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf426d
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf426d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf4349
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x2C]
        call public_6bda220
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf429f
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf429f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf4349
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x3C], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf42cd
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf42cd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf4349
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        mov dword ptr ds : [edi+0x40], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf4301
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf4301 : nop
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
        jbe public_6bf433d
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bf433d : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bf4349 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf41e0)
    }
}

#undef public_6bf4224
#undef public_6bf423b
#undef public_6bf426d
#undef public_6bf429f
#undef public_6bf42cd
#undef public_6bf4301
#undef public_6bf433d
#undef public_6bf4349
