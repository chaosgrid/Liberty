#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f20e24 _public_6f20e24
#define public_6f20e42 _public_6f20e42
#define public_6f20e4d _public_6f20e4d
#define public_6f20e56 _public_6f20e56
#define public_6f20e61 _public_6f20e61
#define public_6f20e7d _public_6f20e7d
#define public_6f20e94 _public_6f20e94
#define public_6f20ea1 _public_6f20ea1
#define public_6f20eac _public_6f20eac
#define public_6f20eaf _public_6f20eaf
#define public_6f20ec7 _public_6f20ec7
#define public_6f20ed2 _public_6f20ed2
#define public_6f20ed5 _public_6f20ed5
#define public_6f20eea _public_6f20eea
#define public_6f20ef5 _public_6f20ef5
#define public_6f20f00 _public_6f20f00
#define public_6f20f03 _public_6f20f03
#define public_6f20f17 _public_6f20f17
#define public_6f20f23 _public_6f20f23
#define public_6f20f2f _public_6f20f2f
#define public_6f20f32 _public_6f20f32
#define public_6f20f50 _public_6f20f50
#define public_6f20f8f _public_6f20f8f
#define public_6f20fa2 _public_6f20fa2
#define public_6f20fad _public_6f20fad
#define public_6f20fb0 _public_6f20fb0
#define public_6f20fbb _public_6f20fbb
#define public_6f20fce _public_6f20fce
#define public_6f20ff5 _public_6f20ff5
#define public_6f2100f _public_6f2100f
#define public_6f21035 _public_6f21035
#define public_6f21048 _public_6f21048
#define public_6f21055 _public_6f21055
#define public_6f21057 _public_6f21057
#define public_6f21062 _public_6f21062
#define public_6f21079 _public_6f21079
#define public_6f21091 _public_6f21091
#define public_6f2109e _public_6f2109e
#define public_6f210a0 _public_6f210a0
#define public_6f210ac _public_6f210ac
#define public_6f210d6 _public_6f210d6
#define public_6f210ee _public_6f210ee
#define public_6f210fe _public_6f210fe
#define public_6f21108 _public_6f21108
#define public_6f2112b _public_6f2112b
#define public_6f2113e _public_6f2113e
#define public_6f21149 _public_6f21149
#define public_6f2114c _public_6f2114c
#define public_6f21156 _public_6f21156
#define public_6f2117f _public_6f2117f
#define public_6f21192 _public_6f21192
#define public_6f2119f _public_6f2119f
#define public_6f211a1 _public_6f211a1
#define public_6f211a4 _public_6f211a4
#define public_6f211a7 _public_6f211a7
#define public_6f211aa _public_6f211aa

PROC_DECLARE(0x6f20e00, internal_6f20e00, public_6f20e00);
extern "C" NAKED register_t __cdecl internal_6f20e00()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f20e42
        mov eax, dword ptr ds : [esi+8]
        public_6f20e24 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f20ec7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f20ed5
        public_6f20e42 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f20e4d
        mov eax, edx
        jmp public_6f20e24
        public_6f20e4d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f20e61
        public_6f20e56 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f20e56
        public_6f20e61 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f20e24
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f20e7d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f20e94
        public_6f20e7d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f20e94 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f20ea1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f20eaf
        public_6f20ea1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f20eac
        mov dword ptr ds : [edx], ecx
        jmp public_6f20eaf
        public_6f20eac : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f20eaf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f20f32
        public_6f20ec7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f20ed2
        mov dword ptr ds : [ecx], eax
        jmp public_6f20ed5
        public_6f20ed2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f20ed5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f20f03
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f20eea
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f20f00
        public_6f20eea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6f20f00
        public_6f20ef5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f20ef5
        public_6f20f00 : nop
        mov dword ptr ss : [ebp], edx
        public_6f20f03 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f20f32
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f20f17
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f20f2f
        public_6f20f17 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6f20f2f
        public_6f20f23 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6f20f23
        public_6f20f2f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f20f32 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x14]
        mov bl, 1
        cmp dl, bl
        jne public_6f211aa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f211a7
        nop 
        public_6f20f50 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6f211a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2100f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f20fbb
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f20f8f
        mov dword ptr ds : [esi+4], ecx
        public_6f20f8f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f20fa2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f20fb0
        public_6f20fa2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f20fad
        mov dword ptr ds : [esi], edx
        jmp public_6f20fb0
        public_6f20fad : nop
        mov dword ptr ds : [esi+8], edx
        public_6f20fb0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f20fbb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f20fce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6f21079
        public_6f20fce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f210ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f20ff5
        mov dword ptr ds : [esi+4], ecx
        public_6f20ff5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f21091
        mov dword ptr ds : [esi+4], edx
        jmp public_6f210a0
        public_6f2100f : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f21062
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f21035
        mov dword ptr ds : [esi+4], ecx
        public_6f21035 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f21048
        mov dword ptr ds : [esi+4], edx
        jmp public_6f21057
        public_6f21048 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f21055
        mov dword ptr ds : [esi+8], edx
        jmp public_6f21057
        public_6f21055 : nop
        mov dword ptr ds : [esi], edx
        public_6f21057 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f21062 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f21108
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f21108
        public_6f21079 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f20f50
        jmp public_6f211a7
        public_6f21091 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2109e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f210a0
        public_6f2109e : nop
        mov dword ptr ds : [esi], edx
        public_6f210a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f210ac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f210d6
        mov dword ptr ds : [esi+4], ecx
        public_6f210d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f210ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f211a4
        public_6f210ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f210fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f211a4
        public_6f210fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f211a4
        public_6f21108 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6f21156
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2112b
        mov dword ptr ds : [esi+4], ecx
        public_6f2112b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2113e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2114c
        public_6f2113e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f21149
        mov dword ptr ds : [esi], edx
        jmp public_6f2114c
        public_6f21149 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2114c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f21156 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2117f
        mov dword ptr ds : [esi+4], ecx
        public_6f2117f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f21192
        mov dword ptr ds : [esi+4], edx
        jmp public_6f211a1
        public_6f21192 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2119f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f211a1
        public_6f2119f : nop
        mov dword ptr ds : [esi], edx
        public_6f211a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f211a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f211a7 : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6f211aa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f20e00)
    }
}

#undef public_6f20e24
#undef public_6f20e42
#undef public_6f20e4d
#undef public_6f20e56
#undef public_6f20e61
#undef public_6f20e7d
#undef public_6f20e94
#undef public_6f20ea1
#undef public_6f20eac
#undef public_6f20eaf
#undef public_6f20ec7
#undef public_6f20ed2
#undef public_6f20ed5
#undef public_6f20eea
#undef public_6f20ef5
#undef public_6f20f00
#undef public_6f20f03
#undef public_6f20f17
#undef public_6f20f23
#undef public_6f20f2f
#undef public_6f20f32
#undef public_6f20f50
#undef public_6f20f8f
#undef public_6f20fa2
#undef public_6f20fad
#undef public_6f20fb0
#undef public_6f20fbb
#undef public_6f20fce
#undef public_6f20ff5
#undef public_6f2100f
#undef public_6f21035
#undef public_6f21048
#undef public_6f21055
#undef public_6f21057
#undef public_6f21062
#undef public_6f21079
#undef public_6f21091
#undef public_6f2109e
#undef public_6f210a0
#undef public_6f210ac
#undef public_6f210d6
#undef public_6f210ee
#undef public_6f210fe
#undef public_6f21108
#undef public_6f2112b
#undef public_6f2113e
#undef public_6f21149
#undef public_6f2114c
#undef public_6f21156
#undef public_6f2117f
#undef public_6f21192
#undef public_6f2119f
#undef public_6f211a1
#undef public_6f211a4
#undef public_6f211a7
#undef public_6f211aa
