#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a2000);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a206b _public_62a206b
#define public_62a207f _public_62a207f
#define public_62a2085 _public_62a2085
#define public_62a2093 _public_62a2093
#define public_62a20d4 _public_62a20d4
#define public_62a20ed _public_62a20ed
#define public_62a2100 _public_62a2100
#define public_62a210b _public_62a210b
#define public_62a210e _public_62a210e
#define public_62a2113 _public_62a2113
#define public_62a213c _public_62a213c
#define public_62a2155 _public_62a2155
#define public_62a2168 _public_62a2168
#define public_62a2172 _public_62a2172
#define public_62a2195 _public_62a2195
#define public_62a21ad _public_62a21ad
#define public_62a21c0 _public_62a21c0
#define public_62a21cd _public_62a21cd
#define public_62a21cf _public_62a21cf
#define public_62a21d5 _public_62a21d5
#define public_62a21fe _public_62a21fe
#define public_62a2211 _public_62a2211
#define public_62a221c _public_62a221c
#define public_62a221f _public_62a221f
#define public_62a2221 _public_62a2221
#define public_62a2224 _public_62a2224
#define public_62a2230 _public_62a2230

PROC_DECLARE(0x62a2000, internal_62a2000, public_62a2000);
extern "C" NAKED register_t __cdecl internal_62a2000()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62bee40
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62a206b
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62a206b
        mov cx, word ptr ss : [ebp]
        cmp cx, word ptr ds : [edi+0xC]
        jb public_62a206b
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62a2085
        mov dword ptr ds : [eax+8], ebx
        jmp public_62a2085
        public_62a206b : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62a207f
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_62a2085
        public_62a207f : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62a2085
        mov dword ptr ds : [eax], ebx
        public_62a2085 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_62a2230
        public_62a2093 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62a2230
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62a2172
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_62a20d4
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_62a2224
        public_62a20d4 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_62a2113
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_62a20ed
        mov dword ptr ds : [edx+4], eax
        public_62a20ed : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62a2100
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a210e
        public_62a2100 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_62a210b
        mov dword ptr ds : [edx], ecx
        jmp public_62a210e
        public_62a210b : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a210e : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_62a2113 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_62a213c
        mov dword ptr ds : [edi+4], ecx
        public_62a213c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62a2155
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a2221
        public_62a2155 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a2168
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a2221
        public_62a2168 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a2221
        public_62a2172 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_62a2195
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_62a2224
        public_62a2195 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_62a21d5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_62a21ad
        mov dword ptr ds : [edx+4], eax
        public_62a21ad : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62a21c0
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a21cf
        public_62a21c0 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_62a21cd
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a21cf
        public_62a21cd : nop
        mov dword ptr ds : [edx], ecx
        public_62a21cf : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_62a21d5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_62a21fe
        mov dword ptr ds : [edi+4], ecx
        public_62a21fe : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62a2211
        mov dword ptr ds : [edi+4], edx
        jmp public_62a221f
        public_62a2211 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_62a221c
        mov dword ptr ds : [edi], edx
        jmp public_62a221f
        public_62a221c : nop
        mov dword ptr ds : [edi+8], edx
        public_62a221f : nop
        mov dword ptr ds : [edx], ecx
        public_62a2221 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62a2224 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62a2093
        public_62a2230 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62a2000)
    }
}

#undef public_62a206b
#undef public_62a207f
#undef public_62a2085
#undef public_62a2093
#undef public_62a20d4
#undef public_62a20ed
#undef public_62a2100
#undef public_62a210b
#undef public_62a210e
#undef public_62a2113
#undef public_62a213c
#undef public_62a2155
#undef public_62a2168
#undef public_62a2172
#undef public_62a2195
#undef public_62a21ad
#undef public_62a21c0
#undef public_62a21cd
#undef public_62a21cf
#undef public_62a21d5
#undef public_62a21fe
#undef public_62a2211
#undef public_62a221c
#undef public_62a221f
#undef public_62a2221
#undef public_62a2224
#undef public_62a2230
