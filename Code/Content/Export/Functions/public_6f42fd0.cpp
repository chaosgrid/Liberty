#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f42fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46690);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f42ff4 _public_6f42ff4
#define public_6f43012 _public_6f43012
#define public_6f4301d _public_6f4301d
#define public_6f43026 _public_6f43026
#define public_6f43031 _public_6f43031
#define public_6f4304d _public_6f4304d
#define public_6f43064 _public_6f43064
#define public_6f43071 _public_6f43071
#define public_6f4307c _public_6f4307c
#define public_6f4307f _public_6f4307f
#define public_6f43097 _public_6f43097
#define public_6f430a2 _public_6f430a2
#define public_6f430a5 _public_6f430a5
#define public_6f430ba _public_6f430ba
#define public_6f430c5 _public_6f430c5
#define public_6f430d0 _public_6f430d0
#define public_6f430d3 _public_6f430d3
#define public_6f430e7 _public_6f430e7
#define public_6f430f3 _public_6f430f3
#define public_6f430ff _public_6f430ff
#define public_6f43102 _public_6f43102
#define public_6f43120 _public_6f43120
#define public_6f4315f _public_6f4315f
#define public_6f43172 _public_6f43172
#define public_6f4317d _public_6f4317d
#define public_6f43180 _public_6f43180
#define public_6f4318b _public_6f4318b
#define public_6f4319e _public_6f4319e
#define public_6f431c5 _public_6f431c5
#define public_6f431df _public_6f431df
#define public_6f43205 _public_6f43205
#define public_6f43218 _public_6f43218
#define public_6f43225 _public_6f43225
#define public_6f43227 _public_6f43227
#define public_6f43232 _public_6f43232
#define public_6f43249 _public_6f43249
#define public_6f43261 _public_6f43261
#define public_6f4326e _public_6f4326e
#define public_6f43270 _public_6f43270
#define public_6f4327c _public_6f4327c
#define public_6f432a6 _public_6f432a6
#define public_6f432be _public_6f432be
#define public_6f432ce _public_6f432ce
#define public_6f432d8 _public_6f432d8
#define public_6f432fb _public_6f432fb
#define public_6f4330e _public_6f4330e
#define public_6f43319 _public_6f43319
#define public_6f4331c _public_6f4331c
#define public_6f43326 _public_6f43326
#define public_6f4334f _public_6f4334f
#define public_6f43362 _public_6f43362
#define public_6f4336f _public_6f4336f
#define public_6f43371 _public_6f43371
#define public_6f43374 _public_6f43374
#define public_6f43377 _public_6f43377
#define public_6f4337a _public_6f4337a

PROC_DECLARE(0x6f42fd0, internal_6f42fd0, public_6f42fd0);
extern "C" NAKED register_t __cdecl internal_6f42fd0()
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
        call public_6f46690
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f43012
        mov eax, dword ptr ds : [esi+8]
        public_6f42ff4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f43097
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f430a5
        public_6f43012 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4301d
        mov eax, edx
        jmp public_6f42ff4
        public_6f4301d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6f43031
        public_6f43026 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6f43026
        public_6f43031 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f42ff4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4304d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f43064
        public_6f4304d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f43064 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f43071
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4307f
        public_6f43071 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f4307c
        mov dword ptr ds : [edx], ecx
        jmp public_6f4307f
        public_6f4307c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4307f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f43102
        public_6f43097 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f430a2
        mov dword ptr ds : [ecx], eax
        jmp public_6f430a5
        public_6f430a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f430a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f430d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f430ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f430d0
        public_6f430ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6f430d0
        public_6f430c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6f430c5
        public_6f430d0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f430d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f43102
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f430e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f430ff
        public_6f430e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_6f430ff
        public_6f430f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_6f430f3
        public_6f430ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f43102 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x28]
        mov bl, 1
        cmp dl, bl
        jne public_6f4337a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f43377
        nop 
        public_6f43120 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_6f43377
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f431df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f4318b
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4315f
        mov dword ptr ds : [esi+4], ecx
        public_6f4315f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43172
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43180
        public_6f43172 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4317d
        mov dword ptr ds : [esi], edx
        jmp public_6f43180
        public_6f4317d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f43180 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f4318b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f4319e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_6f43249
        public_6f4319e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f4327c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f431c5
        mov dword ptr ds : [esi+4], ecx
        public_6f431c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43261
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43270
        public_6f431df : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f43232
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f43205
        mov dword ptr ds : [esi+4], ecx
        public_6f43205 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43218
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43227
        public_6f43218 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f43225
        mov dword ptr ds : [esi+8], edx
        jmp public_6f43227
        public_6f43225 : nop
        mov dword ptr ds : [esi], edx
        public_6f43227 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f43232 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f432d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f432d8
        public_6f43249 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f43120
        jmp public_6f43377
        public_6f43261 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4326e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f43270
        public_6f4326e : nop
        mov dword ptr ds : [esi], edx
        public_6f43270 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4327c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f432a6
        mov dword ptr ds : [esi+4], ecx
        public_6f432a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f432be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f43374
        public_6f432be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f432ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f43374
        public_6f432ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f43374
        public_6f432d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_6f43326
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f432fb
        mov dword ptr ds : [esi+4], ecx
        public_6f432fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f4330e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4331c
        public_6f4330e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f43319
        mov dword ptr ds : [esi], edx
        jmp public_6f4331c
        public_6f43319 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4331c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f43326 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4334f
        mov dword ptr ds : [esi+4], ecx
        public_6f4334f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f43362
        mov dword ptr ds : [esi+4], edx
        jmp public_6f43371
        public_6f43362 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4336f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f43371
        public_6f4336f : nop
        mov dword ptr ds : [esi], edx
        public_6f43371 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f43374 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f43377 : nop
        mov byte ptr ds : [eax+0x28], bl
        public_6f4337a : nop
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
        UNREACHABLE_TRAP(0x6f42fd0)
    }
}

#undef public_6f42ff4
#undef public_6f43012
#undef public_6f4301d
#undef public_6f43026
#undef public_6f43031
#undef public_6f4304d
#undef public_6f43064
#undef public_6f43071
#undef public_6f4307c
#undef public_6f4307f
#undef public_6f43097
#undef public_6f430a2
#undef public_6f430a5
#undef public_6f430ba
#undef public_6f430c5
#undef public_6f430d0
#undef public_6f430d3
#undef public_6f430e7
#undef public_6f430f3
#undef public_6f430ff
#undef public_6f43102
#undef public_6f43120
#undef public_6f4315f
#undef public_6f43172
#undef public_6f4317d
#undef public_6f43180
#undef public_6f4318b
#undef public_6f4319e
#undef public_6f431c5
#undef public_6f431df
#undef public_6f43205
#undef public_6f43218
#undef public_6f43225
#undef public_6f43227
#undef public_6f43232
#undef public_6f43249
#undef public_6f43261
#undef public_6f4326e
#undef public_6f43270
#undef public_6f4327c
#undef public_6f432a6
#undef public_6f432be
#undef public_6f432ce
#undef public_6f432d8
#undef public_6f432fb
#undef public_6f4330e
#undef public_6f43319
#undef public_6f4331c
#undef public_6f43326
#undef public_6f4334f
#undef public_6f43362
#undef public_6f4336f
#undef public_6f43371
#undef public_6f43374
#undef public_6f43377
#undef public_6f4337a
