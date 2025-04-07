#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627aec0);
CLANG_FORWARD_PROC_SYMBOL(public_627b160);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_627af29 _public_627af29
#define public_627af3d _public_627af3d
#define public_627af43 _public_627af43
#define public_627af51 _public_627af51
#define public_627af92 _public_627af92
#define public_627afab _public_627afab
#define public_627afbe _public_627afbe
#define public_627afc9 _public_627afc9
#define public_627afcc _public_627afcc
#define public_627afd1 _public_627afd1
#define public_627affa _public_627affa
#define public_627b013 _public_627b013
#define public_627b026 _public_627b026
#define public_627b030 _public_627b030
#define public_627b053 _public_627b053
#define public_627b06b _public_627b06b
#define public_627b07e _public_627b07e
#define public_627b08b _public_627b08b
#define public_627b08d _public_627b08d
#define public_627b093 _public_627b093
#define public_627b0bc _public_627b0bc
#define public_627b0cf _public_627b0cf
#define public_627b0da _public_627b0da
#define public_627b0dd _public_627b0dd
#define public_627b0df _public_627b0df
#define public_627b0e2 _public_627b0e2
#define public_627b0ee _public_627b0ee

PROC_DECLARE(0x627aec0, internal_627aec0, public_627aec0);
extern "C" NAKED register_t __cdecl internal_627aec0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_627b160
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_627af29
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_627af29
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_627af29
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_627af43
        mov dword ptr ds : [eax+8], ebx
        jmp public_627af43
        public_627af29 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_627af3d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_627af43
        public_627af3d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_627af43
        mov dword ptr ds : [eax], ebx
        public_627af43 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_627b0ee
        public_627af51 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_627b0ee
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_627b030
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_627af92
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_627b0e2
        public_627af92 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_627afd1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_627afab
        mov dword ptr ds : [edx+4], eax
        public_627afab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_627afbe
        mov dword ptr ds : [edx+4], ecx
        jmp public_627afcc
        public_627afbe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_627afc9
        mov dword ptr ds : [edx], ecx
        jmp public_627afcc
        public_627afc9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_627afcc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_627afd1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_627affa
        mov dword ptr ds : [edi+4], ecx
        public_627affa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_627b013
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_627b0df
        public_627b013 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_627b026
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_627b0df
        public_627b026 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_627b0df
        public_627b030 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_627b053
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_627b0e2
        public_627b053 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_627b093
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_627b06b
        mov dword ptr ds : [edx+4], eax
        public_627b06b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_627b07e
        mov dword ptr ds : [edx+4], ecx
        jmp public_627b08d
        public_627b07e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_627b08b
        mov dword ptr ds : [edx+8], ecx
        jmp public_627b08d
        public_627b08b : nop
        mov dword ptr ds : [edx], ecx
        public_627b08d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_627b093 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_627b0bc
        mov dword ptr ds : [edi+4], ecx
        public_627b0bc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_627b0cf
        mov dword ptr ds : [edi+4], edx
        jmp public_627b0dd
        public_627b0cf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_627b0da
        mov dword ptr ds : [edi], edx
        jmp public_627b0dd
        public_627b0da : nop
        mov dword ptr ds : [edi+8], edx
        public_627b0dd : nop
        mov dword ptr ds : [edx], ecx
        public_627b0df : nop
        mov dword ptr ds : [ecx+4], edx
        public_627b0e2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_627af51
        public_627b0ee : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x627aec0)
    }
}

#undef public_627af29
#undef public_627af3d
#undef public_627af43
#undef public_627af51
#undef public_627af92
#undef public_627afab
#undef public_627afbe
#undef public_627afc9
#undef public_627afcc
#undef public_627afd1
#undef public_627affa
#undef public_627b013
#undef public_627b026
#undef public_627b030
#undef public_627b053
#undef public_627b06b
#undef public_627b07e
#undef public_627b08b
#undef public_627b08d
#undef public_627b093
#undef public_627b0bc
#undef public_627b0cf
#undef public_627b0da
#undef public_627b0dd
#undef public_627b0df
#undef public_627b0e2
#undef public_627b0ee
