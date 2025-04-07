#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb66f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42080);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f420a4 _public_6f420a4
#define public_6f420c2 _public_6f420c2
#define public_6f420cd _public_6f420cd
#define public_6f420d6 _public_6f420d6
#define public_6f420e1 _public_6f420e1
#define public_6f420fd _public_6f420fd
#define public_6f42114 _public_6f42114
#define public_6f42121 _public_6f42121
#define public_6f4212c _public_6f4212c
#define public_6f4212f _public_6f4212f
#define public_6f42147 _public_6f42147
#define public_6f42152 _public_6f42152
#define public_6f42155 _public_6f42155
#define public_6f4216a _public_6f4216a
#define public_6f42175 _public_6f42175
#define public_6f42180 _public_6f42180
#define public_6f42183 _public_6f42183
#define public_6f42197 _public_6f42197
#define public_6f421a3 _public_6f421a3
#define public_6f421af _public_6f421af
#define public_6f421b2 _public_6f421b2
#define public_6f421d0 _public_6f421d0
#define public_6f4220f _public_6f4220f
#define public_6f42222 _public_6f42222
#define public_6f4222d _public_6f4222d
#define public_6f42230 _public_6f42230
#define public_6f4223b _public_6f4223b
#define public_6f4224e _public_6f4224e
#define public_6f42275 _public_6f42275
#define public_6f4228f _public_6f4228f
#define public_6f422b5 _public_6f422b5
#define public_6f422c8 _public_6f422c8
#define public_6f422d5 _public_6f422d5
#define public_6f422d7 _public_6f422d7
#define public_6f422e2 _public_6f422e2
#define public_6f422f9 _public_6f422f9
#define public_6f42311 _public_6f42311
#define public_6f4231e _public_6f4231e
#define public_6f42320 _public_6f42320
#define public_6f4232c _public_6f4232c
#define public_6f42356 _public_6f42356
#define public_6f4236e _public_6f4236e
#define public_6f4237e _public_6f4237e
#define public_6f42388 _public_6f42388
#define public_6f423ab _public_6f423ab
#define public_6f423be _public_6f423be
#define public_6f423c9 _public_6f423c9
#define public_6f423cc _public_6f423cc
#define public_6f423d6 _public_6f423d6
#define public_6f423ff _public_6f423ff
#define public_6f42412 _public_6f42412
#define public_6f4241f _public_6f4241f
#define public_6f42421 _public_6f42421
#define public_6f42424 _public_6f42424
#define public_6f42427 _public_6f42427
#define public_6f4242a _public_6f4242a

PROC_DECLARE(0x6f42080, internal_6f42080, public_6f42080);
extern "C" NAKED register_t __cdecl internal_6f42080()
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
        jne public_6f420c2
        mov eax, dword ptr ds : [esi+8]
        public_6f420a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f42147
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f42155
        public_6f420c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f420cd
        mov eax, edx
        jmp public_6f420a4
        public_6f420cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6f420e1
        public_6f420d6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6f420d6
        public_6f420e1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f420a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f420fd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f42114
        public_6f420fd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f42114 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f42121
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4212f
        public_6f42121 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f4212c
        mov dword ptr ds : [edx], ecx
        jmp public_6f4212f
        public_6f4212c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4212f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f421b2
        public_6f42147 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f42152
        mov dword ptr ds : [ecx], eax
        jmp public_6f42155
        public_6f42152 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f42155 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f42183
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4216a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f42180
        public_6f4216a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6f42180
        public_6f42175 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6f42175
        public_6f42180 : nop
        mov dword ptr ss : [ebp], edx
        public_6f42183 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f421b2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f42197
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f421af
        public_6f42197 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_6f421af
        public_6f421a3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6f421a3
        public_6f421af : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f421b2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov bl, 1
        cmp dl, bl
        jne public_6f4242a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f42427
        nop 
        public_6f421d0 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_6f42427
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4228f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f4223b
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4220f
        mov dword ptr ds : [esi+4], ecx
        public_6f4220f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42222
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42230
        public_6f42222 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4222d
        mov dword ptr ds : [esi], edx
        jmp public_6f42230
        public_6f4222d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f42230 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f4223b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4224e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_6f422f9
        public_6f4224e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f4232c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f42275
        mov dword ptr ds : [esi+4], ecx
        public_6f42275 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42311
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42320
        public_6f4228f : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f422e2
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f422b5
        mov dword ptr ds : [esi+4], ecx
        public_6f422b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f422c8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f422d7
        public_6f422c8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f422d5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f422d7
        public_6f422d5 : nop
        mov dword ptr ds : [esi], edx
        public_6f422d7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f422e2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f42388
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f42388
        public_6f422f9 : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f421d0
        jmp public_6f42427
        public_6f42311 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4231e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f42320
        public_6f4231e : nop
        mov dword ptr ds : [esi], edx
        public_6f42320 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4232c : nop
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
        je public_6f42356
        mov dword ptr ds : [esi+4], ecx
        public_6f42356 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4236e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f42424
        public_6f4236e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4237e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f42424
        public_6f4237e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f42424
        public_6f42388 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_6f423d6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f423ab
        mov dword ptr ds : [esi+4], ecx
        public_6f423ab : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f423be
        mov dword ptr ds : [esi+4], edx
        jmp public_6f423cc
        public_6f423be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f423c9
        mov dword ptr ds : [esi], edx
        jmp public_6f423cc
        public_6f423c9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f423cc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f423d6 : nop
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
        je public_6f423ff
        mov dword ptr ds : [esi+4], ecx
        public_6f423ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f42412
        mov dword ptr ds : [esi+4], edx
        jmp public_6f42421
        public_6f42412 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4241f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f42421
        public_6f4241f : nop
        mov dword ptr ds : [esi], edx
        public_6f42421 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f42424 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f42427 : nop
        mov byte ptr ds : [eax+0x2C], bl
        public_6f4242a : nop
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
        UNREACHABLE_TRAP(0x6f42080)
    }
}

#undef public_6f420a4
#undef public_6f420c2
#undef public_6f420cd
#undef public_6f420d6
#undef public_6f420e1
#undef public_6f420fd
#undef public_6f42114
#undef public_6f42121
#undef public_6f4212c
#undef public_6f4212f
#undef public_6f42147
#undef public_6f42152
#undef public_6f42155
#undef public_6f4216a
#undef public_6f42175
#undef public_6f42180
#undef public_6f42183
#undef public_6f42197
#undef public_6f421a3
#undef public_6f421af
#undef public_6f421b2
#undef public_6f421d0
#undef public_6f4220f
#undef public_6f42222
#undef public_6f4222d
#undef public_6f42230
#undef public_6f4223b
#undef public_6f4224e
#undef public_6f42275
#undef public_6f4228f
#undef public_6f422b5
#undef public_6f422c8
#undef public_6f422d5
#undef public_6f422d7
#undef public_6f422e2
#undef public_6f422f9
#undef public_6f42311
#undef public_6f4231e
#undef public_6f42320
#undef public_6f4232c
#undef public_6f42356
#undef public_6f4236e
#undef public_6f4237e
#undef public_6f42388
#undef public_6f423ab
#undef public_6f423be
#undef public_6f423c9
#undef public_6f423cc
#undef public_6f423d6
#undef public_6f423ff
#undef public_6f42412
#undef public_6f4241f
#undef public_6f42421
#undef public_6f42424
#undef public_6f42427
#undef public_6f4242a
