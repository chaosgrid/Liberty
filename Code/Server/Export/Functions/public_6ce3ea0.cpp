#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce3ec4 _public_6ce3ec4
#define public_6ce3ee2 _public_6ce3ee2
#define public_6ce3eed _public_6ce3eed
#define public_6ce3ef6 _public_6ce3ef6
#define public_6ce3f01 _public_6ce3f01
#define public_6ce3f1d _public_6ce3f1d
#define public_6ce3f34 _public_6ce3f34
#define public_6ce3f41 _public_6ce3f41
#define public_6ce3f4c _public_6ce3f4c
#define public_6ce3f4f _public_6ce3f4f
#define public_6ce3f67 _public_6ce3f67
#define public_6ce3f72 _public_6ce3f72
#define public_6ce3f75 _public_6ce3f75
#define public_6ce3f8a _public_6ce3f8a
#define public_6ce3f95 _public_6ce3f95
#define public_6ce3fa0 _public_6ce3fa0
#define public_6ce3fa3 _public_6ce3fa3
#define public_6ce3fb7 _public_6ce3fb7
#define public_6ce3fc3 _public_6ce3fc3
#define public_6ce3fcf _public_6ce3fcf
#define public_6ce3fd2 _public_6ce3fd2
#define public_6ce3ff0 _public_6ce3ff0
#define public_6ce402f _public_6ce402f
#define public_6ce4042 _public_6ce4042
#define public_6ce404d _public_6ce404d
#define public_6ce4050 _public_6ce4050
#define public_6ce405b _public_6ce405b
#define public_6ce406e _public_6ce406e
#define public_6ce4095 _public_6ce4095
#define public_6ce40af _public_6ce40af
#define public_6ce40d5 _public_6ce40d5
#define public_6ce40e8 _public_6ce40e8
#define public_6ce40f5 _public_6ce40f5
#define public_6ce40f7 _public_6ce40f7
#define public_6ce4102 _public_6ce4102
#define public_6ce4119 _public_6ce4119
#define public_6ce4131 _public_6ce4131
#define public_6ce413e _public_6ce413e
#define public_6ce4140 _public_6ce4140
#define public_6ce414c _public_6ce414c
#define public_6ce4176 _public_6ce4176
#define public_6ce418e _public_6ce418e
#define public_6ce419e _public_6ce419e
#define public_6ce41a8 _public_6ce41a8
#define public_6ce41cb _public_6ce41cb
#define public_6ce41de _public_6ce41de
#define public_6ce41e9 _public_6ce41e9
#define public_6ce41ec _public_6ce41ec
#define public_6ce41f6 _public_6ce41f6
#define public_6ce421f _public_6ce421f
#define public_6ce4232 _public_6ce4232
#define public_6ce423f _public_6ce423f
#define public_6ce4241 _public_6ce4241
#define public_6ce4244 _public_6ce4244
#define public_6ce4247 _public_6ce4247
#define public_6ce424a _public_6ce424a

PROC_DECLARE(0x6ce3ea0, internal_6ce3ea0, public_6ce3ea0);
extern "C" NAKED register_t __cdecl internal_6ce3ea0()
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
        call public_6ce5700
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ce3ee2
        mov eax, dword ptr ds : [esi+8]
        public_6ce3ec4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ce3f67
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ce3f75
        public_6ce3ee2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ce3eed
        mov eax, edx
        jmp public_6ce3ec4
        public_6ce3eed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6ce3f01
        public_6ce3ef6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6ce3ef6
        public_6ce3f01 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce3ec4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce3f1d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ce3f34
        public_6ce3f1d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ce3f34 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ce3f41
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ce3f4f
        public_6ce3f41 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ce3f4c
        mov dword ptr ds : [edx], ecx
        jmp public_6ce3f4f
        public_6ce3f4c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce3f4f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [ecx+0x10], bl
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ce3fd2
        public_6ce3f67 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ce3f72
        mov dword ptr ds : [ecx], eax
        jmp public_6ce3f75
        public_6ce3f72 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ce3f75 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ce3fa3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce3f8a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce3fa0
        public_6ce3f8a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_6ce3fa0
        public_6ce3f95 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6ce3f95
        public_6ce3fa0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ce3fa3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ce3fd2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce3fb7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce3fcf
        public_6ce3fb7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        mov edx, eax
        jne public_6ce3fcf
        public_6ce3fc3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_6ce3fc3
        public_6ce3fcf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ce3fd2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x10]
        mov bl, 1
        cmp dl, bl
        jne public_6ce424a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6ce4247
        nop 
        public_6ce3ff0 : nop
        cmp byte ptr ds : [eax+0x10], bl
        jne public_6ce4247
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ce40af
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6ce405b
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce402f
        mov dword ptr ds : [esi+4], ecx
        public_6ce402f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4042
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4050
        public_6ce4042 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce404d
        mov dword ptr ds : [esi], edx
        jmp public_6ce4050
        public_6ce404d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce4050 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6ce405b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6ce406e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        je public_6ce4119
        public_6ce406e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6ce414c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4095
        mov dword ptr ds : [esi+4], ecx
        public_6ce4095 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4131
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4140
        public_6ce40af : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6ce4102
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce40d5
        mov dword ptr ds : [esi+4], ecx
        public_6ce40d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce40e8
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce40f7
        public_6ce40e8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce40f5
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce40f7
        public_6ce40f5 : nop
        mov dword ptr ds : [esi], edx
        public_6ce40f7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ce4102 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6ce41a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6ce41a8
        public_6ce4119 : nop
        mov byte ptr ds : [ecx+0x10], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ce3ff0
        jmp public_6ce4247
        public_6ce4131 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce413e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4140
        public_6ce413e : nop
        mov dword ptr ds : [esi], edx
        public_6ce4140 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce414c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4176
        mov dword ptr ds : [esi+4], ecx
        public_6ce4176 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce418e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4244
        public_6ce418e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce419e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4244
        public_6ce419e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4244
        public_6ce41a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x10], bl
        jne public_6ce41f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x10], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x10], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce41cb
        mov dword ptr ds : [esi+4], ecx
        public_6ce41cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce41de
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce41ec
        public_6ce41de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce41e9
        mov dword ptr ds : [esi], edx
        jmp public_6ce41ec
        public_6ce41e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce41ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ce41f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x10]
        mov byte ptr ds : [ecx+0x10], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x10], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x10], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce421f
        mov dword ptr ds : [esi+4], ecx
        public_6ce421f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4232
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4241
        public_6ce4232 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce423f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4241
        public_6ce423f : nop
        mov dword ptr ds : [esi], edx
        public_6ce4241 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce4244 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ce4247 : nop
        mov byte ptr ds : [eax+0x10], bl
        public_6ce424a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6ce3ea0)
    }
}

#undef public_6ce3ec4
#undef public_6ce3ee2
#undef public_6ce3eed
#undef public_6ce3ef6
#undef public_6ce3f01
#undef public_6ce3f1d
#undef public_6ce3f34
#undef public_6ce3f41
#undef public_6ce3f4c
#undef public_6ce3f4f
#undef public_6ce3f67
#undef public_6ce3f72
#undef public_6ce3f75
#undef public_6ce3f8a
#undef public_6ce3f95
#undef public_6ce3fa0
#undef public_6ce3fa3
#undef public_6ce3fb7
#undef public_6ce3fc3
#undef public_6ce3fcf
#undef public_6ce3fd2
#undef public_6ce3ff0
#undef public_6ce402f
#undef public_6ce4042
#undef public_6ce404d
#undef public_6ce4050
#undef public_6ce405b
#undef public_6ce406e
#undef public_6ce4095
#undef public_6ce40af
#undef public_6ce40d5
#undef public_6ce40e8
#undef public_6ce40f5
#undef public_6ce40f7
#undef public_6ce4102
#undef public_6ce4119
#undef public_6ce4131
#undef public_6ce413e
#undef public_6ce4140
#undef public_6ce414c
#undef public_6ce4176
#undef public_6ce418e
#undef public_6ce419e
#undef public_6ce41a8
#undef public_6ce41cb
#undef public_6ce41de
#undef public_6ce41e9
#undef public_6ce41ec
#undef public_6ce41f6
#undef public_6ce421f
#undef public_6ce4232
#undef public_6ce423f
#undef public_6ce4241
#undef public_6ce4244
#undef public_6ce4247
#undef public_6ce424a
