#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b3e7c9 _public_6b3e7c9
#define public_6b3e7e1 _public_6b3e7e1
#define public_6b3e7f1 _public_6b3e7f1
#define public_6b3e80e _public_6b3e80e
#define public_6b3e81e _public_6b3e81e
#define public_6b3e83b _public_6b3e83b
#define public_6b3e84b _public_6b3e84b
#define public_6b3e86a _public_6b3e86a
#define public_6b3e87a _public_6b3e87a
#define public_6b3e89b _public_6b3e89b
#define public_6b3e8ab _public_6b3e8ab
#define public_6b3e8c2 _public_6b3e8c2
#define public_6b3e8df _public_6b3e8df
#define public_6b3e903 _public_6b3e903
#define public_6b3e929 _public_6b3e929
#define public_6b3e945 _public_6b3e945
#define public_6b3e962 _public_6b3e962
#define public_6b3e970 _public_6b3e970
#define public_6b3e9a3 _public_6b3e9a3

PROC_DECLARE(0x6b3e780, internal_6b3e780, public_6b3e780);
extern "C" NAKED register_t __cdecl internal_6b3e780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        lea esi, ds:[ebx+0x10]
        push edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [ebx+0x14]
        push esi
        push eax
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, ebx
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3e7c9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3e7c9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b3e7e1
        mov dword ptr ds : [esi+0xC], ebp
        public_6b3e7e1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3e7f1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b3e7f1 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b3e80e
        mov dword ptr ds : [esi+0xC], ebp
        public_6b3e80e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3e81e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b3e81e : nop
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [ebx+0x30]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b3e83b
        mov dword ptr ds : [esi+0xC], ebp
        public_6b3e83b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3e84b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b3e84b : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b3e86a
        mov dword ptr ds : [esi+0xC], ebp
        public_6b3e86a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3e87a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b3e87a : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [eax], edx
        mov cx, word ptr ds : [ebx+0x2C]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b3e89b
        mov dword ptr ds : [esi+0xC], ebp
        public_6b3e89b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6b3e8ab
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b3e8ab : nop
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax], cx
        mov ecx, dword ptr ds : [ebx+0x28]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b3e945
        public_6b3e8c2 : nop
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0xC]
        mov bp, word ptr ds : [eax+8]
        mov dl, byte ptr ds : [eax+0x10]
        add ecx, 2
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ecx
        jbe public_6b3e8df
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b3e8df : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6b3e962
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], bp
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6b3e903
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b3e903 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6b3e962
        mov ebp, dword ptr ds : [edi]
        mov byte ptr ss : [ebp], dl
        inc ebp
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b3e929
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b3e929 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6b3e962
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ds : [ecx]
        add ecx, 4
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x28]
        jne public_6b3e8c2
        mov ebp, 0x16
        public_6b3e945 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push esi
        push eax
        push edi
        mov ecx, ebx
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6b3e970
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b3e962 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b3e970 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b3e9a3
        mov dword ptr ds : [ecx+0x10], esi
        public_6b3e9a3 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b3e780)
    }
}

#undef public_6b3e7c9
#undef public_6b3e7e1
#undef public_6b3e7f1
#undef public_6b3e80e
#undef public_6b3e81e
#undef public_6b3e83b
#undef public_6b3e84b
#undef public_6b3e86a
#undef public_6b3e87a
#undef public_6b3e89b
#undef public_6b3e8ab
#undef public_6b3e8c2
#undef public_6b3e8df
#undef public_6b3e903
#undef public_6b3e929
#undef public_6b3e945
#undef public_6b3e962
#undef public_6b3e970
#undef public_6b3e9a3
