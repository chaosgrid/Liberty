#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1f50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed1f74 _public_6ed1f74
#define public_6ed1f92 _public_6ed1f92
#define public_6ed1f9d _public_6ed1f9d
#define public_6ed1fa6 _public_6ed1fa6
#define public_6ed1fb1 _public_6ed1fb1
#define public_6ed1fcd _public_6ed1fcd
#define public_6ed1fe4 _public_6ed1fe4
#define public_6ed1ff1 _public_6ed1ff1
#define public_6ed1ffc _public_6ed1ffc
#define public_6ed1fff _public_6ed1fff
#define public_6ed2017 _public_6ed2017
#define public_6ed2022 _public_6ed2022
#define public_6ed2025 _public_6ed2025
#define public_6ed203a _public_6ed203a
#define public_6ed2045 _public_6ed2045
#define public_6ed2050 _public_6ed2050
#define public_6ed2053 _public_6ed2053
#define public_6ed2067 _public_6ed2067
#define public_6ed2073 _public_6ed2073
#define public_6ed207f _public_6ed207f
#define public_6ed2082 _public_6ed2082
#define public_6ed20a0 _public_6ed20a0
#define public_6ed20df _public_6ed20df
#define public_6ed20f2 _public_6ed20f2
#define public_6ed20fd _public_6ed20fd
#define public_6ed2100 _public_6ed2100
#define public_6ed210b _public_6ed210b
#define public_6ed211e _public_6ed211e
#define public_6ed2145 _public_6ed2145
#define public_6ed215f _public_6ed215f
#define public_6ed2185 _public_6ed2185
#define public_6ed2198 _public_6ed2198
#define public_6ed21a5 _public_6ed21a5
#define public_6ed21a7 _public_6ed21a7
#define public_6ed21b2 _public_6ed21b2
#define public_6ed21c9 _public_6ed21c9
#define public_6ed21e1 _public_6ed21e1
#define public_6ed21ee _public_6ed21ee
#define public_6ed21f0 _public_6ed21f0
#define public_6ed21fc _public_6ed21fc
#define public_6ed2226 _public_6ed2226
#define public_6ed223e _public_6ed223e
#define public_6ed224e _public_6ed224e
#define public_6ed2258 _public_6ed2258
#define public_6ed227b _public_6ed227b
#define public_6ed228e _public_6ed228e
#define public_6ed2299 _public_6ed2299
#define public_6ed229c _public_6ed229c
#define public_6ed22a6 _public_6ed22a6
#define public_6ed22cf _public_6ed22cf
#define public_6ed22e2 _public_6ed22e2
#define public_6ed22ef _public_6ed22ef
#define public_6ed22f1 _public_6ed22f1
#define public_6ed22f4 _public_6ed22f4
#define public_6ed22f7 _public_6ed22f7
#define public_6ed22fe _public_6ed22fe

PROC_DECLARE(0x6ed1f50, internal_6ed1f50, public_6ed1f50);
extern "C" NAKED register_t __cdecl internal_6ed1f50()
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
        call public_6eb66f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ed1f92
        mov eax, dword ptr ds : [esi+8]
        public_6ed1f74 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ed2017
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ed2025
        public_6ed1f92 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ed1f9d
        mov eax, edx
        jmp public_6ed1f74
        public_6ed1f9d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6ed1fb1
        public_6ed1fa6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6ed1fa6
        public_6ed1fb1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ed1f74
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed1fcd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ed1fe4
        public_6ed1fcd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ed1fe4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ed1ff1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ed1fff
        public_6ed1ff1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ed1ffc
        mov dword ptr ds : [edx], ecx
        jmp public_6ed1fff
        public_6ed1ffc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed1fff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ed2082
        public_6ed2017 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ed2022
        mov dword ptr ds : [ecx], eax
        jmp public_6ed2025
        public_6ed2022 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ed2025 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ed2053
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed203a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ed2050
        public_6ed203a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6ed2050
        public_6ed2045 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6ed2045
        public_6ed2050 : nop
        mov dword ptr ss : [ebp], edx
        public_6ed2053 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ed2082
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ed2067
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ed207f
        public_6ed2067 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6ed207f
        public_6ed2073 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6ed2073
        public_6ed207f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ed2082 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x2C]
        mov bl, 1
        cmp cl, bl
        jne public_6ed22fe
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ed22f7
        nop 
        public_6ed20a0 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_6ed22f7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ed215f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6ed210b
        mov byte ptr ds : [ecx+0x2C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed20df
        mov dword ptr ds : [esi+4], ecx
        public_6ed20df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed20f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed2100
        public_6ed20f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed20fd
        mov dword ptr ds : [esi], edx
        jmp public_6ed2100
        public_6ed20fd : nop
        mov dword ptr ds : [esi+8], edx
        public_6ed2100 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ed210b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6ed211e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_6ed21c9
        public_6ed211e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6ed21fc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed2145
        mov dword ptr ds : [esi+4], ecx
        public_6ed2145 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed21e1
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed21f0
        public_6ed215f : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6ed21b2
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed2185
        mov dword ptr ds : [esi+4], ecx
        public_6ed2185 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed2198
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed21a7
        public_6ed2198 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed21a5
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed21a7
        public_6ed21a5 : nop
        mov dword ptr ds : [esi], edx
        public_6ed21a7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ed21b2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6ed2258
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6ed2258
        public_6ed21c9 : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ed20a0
        jmp public_6ed22f7
        public_6ed21e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed21ee
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed21f0
        public_6ed21ee : nop
        mov dword ptr ds : [esi], edx
        public_6ed21f0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ed21fc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed2226
        mov dword ptr ds : [esi+4], ecx
        public_6ed2226 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed223e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed22f4
        public_6ed223e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed224e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed22f4
        public_6ed224e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ed22f4
        public_6ed2258 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6ed22a6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed227b
        mov dword ptr ds : [esi+4], ecx
        public_6ed227b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed228e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed229c
        public_6ed228e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ed2299
        mov dword ptr ds : [esi], edx
        jmp public_6ed229c
        public_6ed2299 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ed229c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ed22a6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ed22cf
        mov dword ptr ds : [esi+4], ecx
        public_6ed22cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ed22e2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ed22f1
        public_6ed22e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ed22ef
        mov dword ptr ds : [esi+8], edx
        jmp public_6ed22f1
        public_6ed22ef : nop
        mov dword ptr ds : [esi], edx
        public_6ed22f1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ed22f4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ed22f7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x2C], bl
        public_6ed22fe : nop
        lea ecx, ds:[esi+0xC]
        call public_6ed3880
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ed1f50)
    }
}

#undef public_6ed1f74
#undef public_6ed1f92
#undef public_6ed1f9d
#undef public_6ed1fa6
#undef public_6ed1fb1
#undef public_6ed1fcd
#undef public_6ed1fe4
#undef public_6ed1ff1
#undef public_6ed1ffc
#undef public_6ed1fff
#undef public_6ed2017
#undef public_6ed2022
#undef public_6ed2025
#undef public_6ed203a
#undef public_6ed2045
#undef public_6ed2050
#undef public_6ed2053
#undef public_6ed2067
#undef public_6ed2073
#undef public_6ed207f
#undef public_6ed2082
#undef public_6ed20a0
#undef public_6ed20df
#undef public_6ed20f2
#undef public_6ed20fd
#undef public_6ed2100
#undef public_6ed210b
#undef public_6ed211e
#undef public_6ed2145
#undef public_6ed215f
#undef public_6ed2185
#undef public_6ed2198
#undef public_6ed21a5
#undef public_6ed21a7
#undef public_6ed21b2
#undef public_6ed21c9
#undef public_6ed21e1
#undef public_6ed21ee
#undef public_6ed21f0
#undef public_6ed21fc
#undef public_6ed2226
#undef public_6ed223e
#undef public_6ed224e
#undef public_6ed2258
#undef public_6ed227b
#undef public_6ed228e
#undef public_6ed2299
#undef public_6ed229c
#undef public_6ed22a6
#undef public_6ed22cf
#undef public_6ed22e2
#undef public_6ed22ef
#undef public_6ed22f1
#undef public_6ed22f4
#undef public_6ed22f7
#undef public_6ed22fe
