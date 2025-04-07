#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4010);
CLANG_FORWARD_PROC_SYMBOL(public_6ec69e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ececb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec4034 _public_6ec4034
#define public_6ec4052 _public_6ec4052
#define public_6ec405d _public_6ec405d
#define public_6ec4066 _public_6ec4066
#define public_6ec4071 _public_6ec4071
#define public_6ec408d _public_6ec408d
#define public_6ec40a4 _public_6ec40a4
#define public_6ec40b1 _public_6ec40b1
#define public_6ec40bc _public_6ec40bc
#define public_6ec40bf _public_6ec40bf
#define public_6ec40d7 _public_6ec40d7
#define public_6ec40e2 _public_6ec40e2
#define public_6ec40e5 _public_6ec40e5
#define public_6ec40f9 _public_6ec40f9
#define public_6ec4104 _public_6ec4104
#define public_6ec410f _public_6ec410f
#define public_6ec4111 _public_6ec4111
#define public_6ec4125 _public_6ec4125
#define public_6ec4131 _public_6ec4131
#define public_6ec413d _public_6ec413d
#define public_6ec4140 _public_6ec4140
#define public_6ec4160 _public_6ec4160
#define public_6ec419f _public_6ec419f
#define public_6ec41b2 _public_6ec41b2
#define public_6ec41bd _public_6ec41bd
#define public_6ec41c0 _public_6ec41c0
#define public_6ec41cb _public_6ec41cb
#define public_6ec41de _public_6ec41de
#define public_6ec4205 _public_6ec4205
#define public_6ec421f _public_6ec421f
#define public_6ec4245 _public_6ec4245
#define public_6ec4258 _public_6ec4258
#define public_6ec4265 _public_6ec4265
#define public_6ec4267 _public_6ec4267
#define public_6ec4272 _public_6ec4272
#define public_6ec4289 _public_6ec4289
#define public_6ec42a1 _public_6ec42a1
#define public_6ec42ae _public_6ec42ae
#define public_6ec42b0 _public_6ec42b0
#define public_6ec42bc _public_6ec42bc
#define public_6ec42e6 _public_6ec42e6
#define public_6ec42fe _public_6ec42fe
#define public_6ec430e _public_6ec430e
#define public_6ec4318 _public_6ec4318
#define public_6ec433b _public_6ec433b
#define public_6ec434e _public_6ec434e
#define public_6ec4359 _public_6ec4359
#define public_6ec435c _public_6ec435c
#define public_6ec4366 _public_6ec4366
#define public_6ec438f _public_6ec438f
#define public_6ec43a2 _public_6ec43a2
#define public_6ec43af _public_6ec43af
#define public_6ec43b1 _public_6ec43b1
#define public_6ec43b4 _public_6ec43b4
#define public_6ec43b7 _public_6ec43b7
#define public_6ec43be _public_6ec43be
#define public_6ec43e0 _public_6ec43e0
#define public_6ec43f0 _public_6ec43f0

PROC_DECLARE(0x6ec4010, internal_6ec4010, public_6ec4010);
extern "C" NAKED register_t __cdecl internal_6ec4010()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_6ececb0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ec4052
        mov eax, dword ptr ds : [esi+8]
        public_6ec4034 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [ebp+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ec40d7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ec40e5
        public_6ec4052 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ec405d
        mov eax, edx
        jmp public_6ec4034
        public_6ec405d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6ec4071
        public_6ec4066 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6ec4066
        public_6ec4071 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec4034
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec408d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ec40a4
        public_6ec408d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ec40a4 : nop
        mov edx, dword ptr ss : [ebp+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ec40b1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec40bf
        public_6ec40b1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ec40bc
        mov dword ptr ds : [edx], ecx
        jmp public_6ec40bf
        public_6ec40bc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec40bf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ec4140
        public_6ec40d7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ec40e2
        mov dword ptr ds : [ecx], eax
        jmp public_6ec40e5
        public_6ec40e2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ec40e5 : nop
        mov edi, dword ptr ss : [ebp+4]
        cmp dword ptr ds : [edi], esi
        jne public_6ec4111
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ss : [ebp+8]
        jne public_6ec40f9
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec410f
        public_6ec40f9 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6ec410f
        public_6ec4104 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6ec4104
        public_6ec410f : nop
        mov dword ptr ds : [edi], edx
        public_6ec4111 : nop
        mov edi, dword ptr ss : [ebp+4]
        cmp dword ptr ds : [edi+8], esi
        jne public_6ec4140
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ss : [ebp+8]
        jne public_6ec4125
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ec413d
        public_6ec4125 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6ec413d
        public_6ec4131 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6ec4131
        public_6ec413d : nop
        mov dword ptr ds : [edi+8], edx
        public_6ec4140 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x24]
        mov bl, 1
        cmp cl, bl
        jne public_6ec43be
        mov ecx, dword ptr ss : [ebp+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ec43b7
        lea ecx, ds:[ecx]
        public_6ec4160 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6ec43b7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ec421f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ec41cb
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6ec419f
        mov dword ptr ds : [esi+4], ecx
        public_6ec419f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec41b2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec41c0
        public_6ec41b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec41bd
        mov dword ptr ds : [esi], edx
        jmp public_6ec41c0
        public_6ec41bd : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec41c0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec41cb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6ec41de
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6ec4289
        public_6ec41de : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6ec42bc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6ec4205
        mov dword ptr ds : [esi+4], ecx
        public_6ec4205 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec42a1
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec42b0
        public_6ec421f : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6ec4272
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6ec4245
        mov dword ptr ds : [esi+4], ecx
        public_6ec4245 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec4258
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec4267
        public_6ec4258 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec4265
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec4267
        public_6ec4265 : nop
        mov dword ptr ds : [esi], edx
        public_6ec4267 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ec4272 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6ec4318
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6ec4318
        public_6ec4289 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec4160
        jmp public_6ec43b7
        public_6ec42a1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec42ae
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec42b0
        public_6ec42ae : nop
        mov dword ptr ds : [esi], edx
        public_6ec42b0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ec42bc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6ec42e6
        mov dword ptr ds : [esi+4], ecx
        public_6ec42e6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec42fe
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec43b4
        public_6ec42fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec430e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec43b4
        public_6ec430e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ec43b4
        public_6ec4318 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6ec4366
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6ec433b
        mov dword ptr ds : [esi+4], ecx
        public_6ec433b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec434e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec435c
        public_6ec434e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ec4359
        mov dword ptr ds : [esi], edx
        jmp public_6ec435c
        public_6ec4359 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ec435c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ec4366 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6ec438f
        mov dword ptr ds : [esi+4], ecx
        public_6ec438f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ec43a2
        mov dword ptr ds : [esi+4], edx
        jmp public_6ec43b1
        public_6ec43a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ec43af
        mov dword ptr ds : [esi+8], edx
        jmp public_6ec43b1
        public_6ec43af : nop
        mov dword ptr ds : [esi], edx
        public_6ec43b1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec43b4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec43b7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x24], bl
        public_6ec43be : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call public_6ed0c50
        xor ebx, ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov edi, dword ptr ds : [esi+0x1C]
        mov esi, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp esi, edi
        je public_6ec43f0
        lea esp, ss:[esp]
        public_6ec43e0 : nop
        push esi
        call public_6ec69e0
        add esi, 4
        add esp, 4
        cmp esi, edi
        jne public_6ec43e0
        public_6ec43f0 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        call public_6ed0c50
        push esi
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        call public_6ed0c50
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        dec eax
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec4010)
    }
}

#undef public_6ec4034
#undef public_6ec4052
#undef public_6ec405d
#undef public_6ec4066
#undef public_6ec4071
#undef public_6ec408d
#undef public_6ec40a4
#undef public_6ec40b1
#undef public_6ec40bc
#undef public_6ec40bf
#undef public_6ec40d7
#undef public_6ec40e2
#undef public_6ec40e5
#undef public_6ec40f9
#undef public_6ec4104
#undef public_6ec410f
#undef public_6ec4111
#undef public_6ec4125
#undef public_6ec4131
#undef public_6ec413d
#undef public_6ec4140
#undef public_6ec4160
#undef public_6ec419f
#undef public_6ec41b2
#undef public_6ec41bd
#undef public_6ec41c0
#undef public_6ec41cb
#undef public_6ec41de
#undef public_6ec4205
#undef public_6ec421f
#undef public_6ec4245
#undef public_6ec4258
#undef public_6ec4265
#undef public_6ec4267
#undef public_6ec4272
#undef public_6ec4289
#undef public_6ec42a1
#undef public_6ec42ae
#undef public_6ec42b0
#undef public_6ec42bc
#undef public_6ec42e6
#undef public_6ec42fe
#undef public_6ec430e
#undef public_6ec4318
#undef public_6ec433b
#undef public_6ec434e
#undef public_6ec4359
#undef public_6ec435c
#undef public_6ec4366
#undef public_6ec438f
#undef public_6ec43a2
#undef public_6ec43af
#undef public_6ec43b1
#undef public_6ec43b4
#undef public_6ec43b7
#undef public_6ec43be
#undef public_6ec43e0
#undef public_6ec43f0
