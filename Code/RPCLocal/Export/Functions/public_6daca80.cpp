#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1620);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da4020);

#define public_6dacac2 _public_6dacac2
#define public_6dacaea _public_6dacaea
#define public_6dacb13 _public_6dacb13
#define public_6dacb50 _public_6dacb50
#define public_6dacb7f _public_6dacb7f
#define public_6dacbc4 _public_6dacbc4
#define public_6dacbe5 _public_6dacbe5
#define public_6dacc21 _public_6dacc21
#define public_6dacc2d _public_6dacc2d

PROC_DECLARE(0x6daca80, internal_6daca80, public_6daca80);
extern "C" NAKED register_t __cdecl internal_6daca80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dacac2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dacac2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push ebp
        push edx
        mov ecx, edi
        call public_6da4020
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6dacaea
        mov dword ptr ds : [esi+0xC], ebp
        public_6dacaea : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacc2d
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [edi+0x9C], cl
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dacb13
        mov dword ptr ds : [esi+0xC], ebp
        public_6dacb13 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacc2d
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edi+0x9D], dl
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6dacbc4
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dacb50
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dacb50 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacc2d
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xB0], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dacb7f
        mov dword ptr ds : [esi+0xC], 0x17
        public_6dacb7f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacc2d
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        mov dword ptr ss : [esp+0x14], edx
        inc eax
        mov dword ptr ds : [ebx], eax
        fild dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+0xA0]
        push eax
        fmul qword ptr ds : [public_6db3fe0]
        mov ecx, edi
        fstp dword ptr ds : [edi+0xB4]
        call public_6da1620
        lea ecx, ds:[edi+0xA8]
        push ecx
        mov ecx, edi
        call public_6da1620
        public_6dacbc4 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dacbe5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dacbe5 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6dacc21
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dacc21 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dacc2d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6daca80)
    }
}

#undef public_6dacac2
#undef public_6dacaea
#undef public_6dacb13
#undef public_6dacb50
#undef public_6dacb7f
#undef public_6dacbc4
#undef public_6dacbe5
#undef public_6dacc21
#undef public_6dacc2d
