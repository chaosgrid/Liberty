#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329c70);
CLANG_FORWARD_JUMP_SYMBOL(public_6397028);

#define public_6325597 _public_6325597
#define public_63255a7 _public_63255a7
#define public_63255ba _public_63255ba
#define public_63255f4 _public_63255f4
#define public_632560a _public_632560a
#define public_632561e _public_632561e
#define public_632563a _public_632563a
#define public_6325657 _public_6325657
#define public_6325675 _public_6325675
#define public_6325680 _public_6325680
#define public_632568f _public_632568f
#define public_632569b _public_632569b
#define public_63256a5 _public_63256a5

PROC_DECLARE(0x6325540, internal_6325540, public_6325540);
extern "C" NAKED register_t __cdecl internal_6325540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397028 @0x6325542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397028
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_63a3e54
        mov eax, dword ptr ss : [esp+0x24]
        mov cl, byte ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        xor edx, edx
        lea esi, ss:[ebp+4]
        mov byte ptr ds : [esi], cl
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [public_6399170]
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [eax]
        mov edi, ecx
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], edx
        jae public_6325597
        mov edi, eax
        public_6325597 : nop
        cmp esi, ebx
        jne public_632560a
        cmp edi, edx
        mov ebx, eax
        jbe public_63255a7
        call dword ptr ds : [public_63991c4]
        public_63255a7 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_63255ba
        mov ebx, eax
        public_63255ba : nop
        test ebx, ebx
        jbe public_63255f4
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6329c70
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_63255f4
        push edi
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        public_63255f4 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov dword ptr ss : [ebp], offset public_63a3fec
        mov eax, ebp
        jmp public_63256a5
        public_632560a : nop
        cmp edi, edx
        jbe public_6325657
        cmp edi, ecx
        jne public_6325657
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edx
        jne public_632561e
        mov eax, dword ptr ds : [public_639914c]
        public_632561e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6325657
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_632563a
        mov eax, dword ptr ds : [public_639914c]
        public_632563a : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        mov dword ptr ss : [ebp], offset public_63a3fec
        mov eax, ebp
        jmp public_63256a5
        public_6325657 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_632569b
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_639914c]
        je public_6325675
        mov ecx, ebx
        public_6325675 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_632568f
        mov edx, edi
        mov edi, edi
        public_6325680 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6325680
        public_632568f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_632569b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], offset public_63a3fec
        public_63256a5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6325540)
    }
}

#undef public_6325597
#undef public_63255a7
#undef public_63255ba
#undef public_63255f4
#undef public_632560a
#undef public_632561e
#undef public_632563a
#undef public_6325657
#undef public_6325675
#undef public_6325680
#undef public_632568f
#undef public_632569b
#undef public_63256a5
