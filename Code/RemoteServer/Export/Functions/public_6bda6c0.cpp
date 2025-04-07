#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bda6e5 _public_6bda6e5
#define public_6bda6fd _public_6bda6fd
#define public_6bda703 _public_6bda703
#define public_6bda72e _public_6bda72e
#define public_6bda732 _public_6bda732
#define public_6bda747 _public_6bda747
#define public_6bda764 _public_6bda764
#define public_6bda775 _public_6bda775

PROC_DECLARE(0x6bda6c0, internal_6bda6c0, public_6bda6c0);
extern "C" NAKED register_t __cdecl internal_6bda6c0()
{
    __asm
    {
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        push esi
        push edi
        je public_6bda775
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6bda6fd
        public_6bda6e5 : nop
        cmp ebx, ecx
        je public_6bda6fd
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6bda6e5
        public_6bda6fd : nop
        cmp eax, esi
        mov edi, eax
        je public_6bda72e
        public_6bda703 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6bda703
        mov ecx, dword ptr ss : [esp+0x14]
        public_6bda72e : nop
        cmp ebx, ecx
        je public_6bda775
        public_6bda732 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6bda747
        mov edi, eax
        public_6bda747 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bda764
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6bda764 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6bda732
        public_6bda775 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bda6c0)
    }
}

#undef public_6bda6e5
#undef public_6bda6fd
#undef public_6bda703
#undef public_6bda72e
#undef public_6bda732
#undef public_6bda747
#undef public_6bda764
#undef public_6bda775
