#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d904c9 _public_6d904c9
#define public_6d904e1 _public_6d904e1
#define public_6d904f1 _public_6d904f1
#define public_6d9050e _public_6d9050e
#define public_6d9051e _public_6d9051e
#define public_6d9053b _public_6d9053b
#define public_6d9054b _public_6d9054b
#define public_6d9056a _public_6d9056a
#define public_6d9057a _public_6d9057a
#define public_6d9059b _public_6d9059b
#define public_6d905ab _public_6d905ab
#define public_6d905c2 _public_6d905c2
#define public_6d905df _public_6d905df
#define public_6d90603 _public_6d90603
#define public_6d90629 _public_6d90629
#define public_6d90645 _public_6d90645
#define public_6d90662 _public_6d90662
#define public_6d90670 _public_6d90670
#define public_6d906a3 _public_6d906a3

PROC_DECLARE(0x6d90480, internal_6d90480, public_6d90480);
extern "C" NAKED register_t __cdecl internal_6d90480()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d904c9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d904c9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6d904e1
        mov dword ptr ds : [esi+0xC], ebp
        public_6d904e1 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d904f1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6d904f1 : nop
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
        jbe public_6d9050e
        mov dword ptr ds : [esi+0xC], ebp
        public_6d9050e : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9051e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6d9051e : nop
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
        jbe public_6d9053b
        mov dword ptr ds : [esi+0xC], ebp
        public_6d9053b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9054b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6d9054b : nop
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
        jbe public_6d9056a
        mov dword ptr ds : [esi+0xC], ebp
        public_6d9056a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d9057a
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6d9057a : nop
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
        jbe public_6d9059b
        mov dword ptr ds : [esi+0xC], ebp
        public_6d9059b : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        je public_6d905ab
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6d905ab : nop
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax], cx
        mov ecx, dword ptr ds : [ebx+0x28]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6d90645
        public_6d905c2 : nop
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0xC]
        mov bp, word ptr ds : [eax+8]
        mov dl, byte ptr ds : [eax+0x10]
        add ecx, 2
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ecx
        jbe public_6d905df
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d905df : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6d90662
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], bp
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6d90603
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d90603 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6d90662
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
        jbe public_6d90629
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d90629 : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        test ecx, ecx
        jne public_6d90662
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ds : [ecx]
        add ecx, 4
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x28]
        jne public_6d905c2
        mov ebp, 0x16
        public_6d90645 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push esi
        push eax
        push edi
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d90670
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6d90662 : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d90670 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6d906a3
        mov dword ptr ds : [ecx+0x10], esi
        public_6d906a3 : nop
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
        UNREACHABLE_TRAP(0x6d90480)
    }
}

#undef public_6d904c9
#undef public_6d904e1
#undef public_6d904f1
#undef public_6d9050e
#undef public_6d9051e
#undef public_6d9053b
#undef public_6d9054b
#undef public_6d9056a
#undef public_6d9057a
#undef public_6d9059b
#undef public_6d905ab
#undef public_6d905c2
#undef public_6d905df
#undef public_6d90603
#undef public_6d90629
#undef public_6d90645
#undef public_6d90662
#undef public_6d90670
#undef public_6d906a3
