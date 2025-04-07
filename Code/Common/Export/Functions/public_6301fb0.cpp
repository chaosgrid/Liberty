#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb390);
CLANG_FORWARD_PROC_SYMBOL(public_6301fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6302019 _public_6302019
#define public_630202d _public_630202d
#define public_6302033 _public_6302033
#define public_6302041 _public_6302041
#define public_6302082 _public_6302082
#define public_630209b _public_630209b
#define public_63020ae _public_63020ae
#define public_63020b9 _public_63020b9
#define public_63020bc _public_63020bc
#define public_63020c1 _public_63020c1
#define public_63020ea _public_63020ea
#define public_6302103 _public_6302103
#define public_6302116 _public_6302116
#define public_6302120 _public_6302120
#define public_6302143 _public_6302143
#define public_630215b _public_630215b
#define public_630216e _public_630216e
#define public_630217b _public_630217b
#define public_630217d _public_630217d
#define public_6302183 _public_6302183
#define public_63021ac _public_63021ac
#define public_63021bf _public_63021bf
#define public_63021ca _public_63021ca
#define public_63021cd _public_63021cd
#define public_63021cf _public_63021cf
#define public_63021d2 _public_63021d2
#define public_63021de _public_63021de

PROC_DECLARE(0x6301fb0, internal_6301fb0, public_6301fb0);
extern "C" NAKED register_t __cdecl internal_6301fb0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x54
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x50], 0
        mov byte ptr ds : [ebx+0x51], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62bb390
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6302019
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6302019
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6302019
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6302033
        mov dword ptr ds : [eax+8], ebx
        jmp public_6302033
        public_6302019 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_630202d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6302033
        public_630202d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6302033
        mov dword ptr ds : [eax], ebx
        public_6302033 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_63021de
        public_6302041 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x50]
        test dl, dl
        jne public_63021de
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6302120
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6302082
        mov byte ptr ds : [ecx+0x50], 1
        mov byte ptr ds : [edx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_63021d2
        public_6302082 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63020c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_630209b
        mov dword ptr ds : [edx+4], eax
        public_630209b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63020ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_63020bc
        public_63020ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_63020b9
        mov dword ptr ds : [edx], ecx
        jmp public_63020bc
        public_63020b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63020bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63020c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_63020ea
        mov dword ptr ds : [edi+4], ecx
        public_63020ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6302103
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63021cf
        public_6302103 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6302116
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63021cf
        public_6302116 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63021cf
        public_6302120 : nop
        cmp byte ptr ds : [edx+0x50], 0
        jne public_6302143
        mov byte ptr ds : [ecx+0x50], 1
        mov byte ptr ds : [edx+0x50], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x50], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_63021d2
        public_6302143 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6302183
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_630215b
        mov dword ptr ds : [edx+4], eax
        public_630215b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_630216e
        mov dword ptr ds : [edx+4], ecx
        jmp public_630217d
        public_630216e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_630217b
        mov dword ptr ds : [edx+8], ecx
        jmp public_630217d
        public_630217b : nop
        mov dword ptr ds : [edx], ecx
        public_630217d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6302183 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x50], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x50], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_63021ac
        mov dword ptr ds : [edi+4], ecx
        public_63021ac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63021bf
        mov dword ptr ds : [edi+4], edx
        jmp public_63021cd
        public_63021bf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63021ca
        mov dword ptr ds : [edi], edx
        jmp public_63021cd
        public_63021ca : nop
        mov dword ptr ds : [edi+8], edx
        public_63021cd : nop
        mov dword ptr ds : [edx], ecx
        public_63021cf : nop
        mov dword ptr ds : [ecx+4], edx
        public_63021d2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6302041
        public_63021de : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x50], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6301fb0)
    }
}

#undef public_6302019
#undef public_630202d
#undef public_6302033
#undef public_6302041
#undef public_6302082
#undef public_630209b
#undef public_63020ae
#undef public_63020b9
#undef public_63020bc
#undef public_63020c1
#undef public_63020ea
#undef public_6302103
#undef public_6302116
#undef public_6302120
#undef public_6302143
#undef public_630215b
#undef public_630216e
#undef public_630217b
#undef public_630217d
#undef public_6302183
#undef public_63021ac
#undef public_63021bf
#undef public_63021ca
#undef public_63021cd
#undef public_63021cf
#undef public_63021d2
#undef public_63021de
