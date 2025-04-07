#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42fe20);
CLANG_FORWARD_PROC_SYMBOL(public_430500);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_42fe89 _public_42fe89
#define public_42fe9d _public_42fe9d
#define public_42fea3 _public_42fea3
#define public_42feb1 _public_42feb1
#define public_42fef2 _public_42fef2
#define public_42ff0b _public_42ff0b
#define public_42ff1e _public_42ff1e
#define public_42ff29 _public_42ff29
#define public_42ff2c _public_42ff2c
#define public_42ff31 _public_42ff31
#define public_42ff5a _public_42ff5a
#define public_42ff73 _public_42ff73
#define public_42ff86 _public_42ff86
#define public_42ff90 _public_42ff90
#define public_42ffb3 _public_42ffb3
#define public_42ffcb _public_42ffcb
#define public_42ffde _public_42ffde
#define public_42ffeb _public_42ffeb
#define public_42ffed _public_42ffed
#define public_42fff3 _public_42fff3
#define public_43001c _public_43001c
#define public_43002f _public_43002f
#define public_43003a _public_43003a
#define public_43003d _public_43003d
#define public_43003f _public_43003f
#define public_430042 _public_430042
#define public_43004e _public_43004e

PROC_DECLARE(0x42fe20, internal_42fe20, public_42fe20);
extern "C" NAKED register_t __cdecl internal_42fe20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x4C
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x48], 0
        mov byte ptr ds : [ebx+0x49], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_430500
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_42fe89
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_42fe89
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_42fe89
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_42fea3
        mov dword ptr ds : [eax+8], ebx
        jmp public_42fea3
        public_42fe89 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_42fe9d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_42fea3
        public_42fe9d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_42fea3
        mov dword ptr ds : [eax], ebx
        public_42fea3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_43004e
        public_42feb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_43004e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_42ff90
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x48], 0
        jne public_42fef2
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_430042
        public_42fef2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_42ff31
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_42ff0b
        mov dword ptr ds : [edx+4], eax
        public_42ff0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_42ff1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_42ff2c
        public_42ff1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_42ff29
        mov dword ptr ds : [edx], ecx
        jmp public_42ff2c
        public_42ff29 : nop
        mov dword ptr ds : [edx+8], ecx
        public_42ff2c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_42ff31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_42ff5a
        mov dword ptr ds : [edi+4], ecx
        public_42ff5a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_42ff73
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43003f
        public_42ff73 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42ff86
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43003f
        public_42ff86 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_43003f
        public_42ff90 : nop
        cmp byte ptr ds : [edx+0x48], 0
        jne public_42ffb3
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_430042
        public_42ffb3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_42fff3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_42ffcb
        mov dword ptr ds : [edx+4], eax
        public_42ffcb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_42ffde
        mov dword ptr ds : [edx+4], ecx
        jmp public_42ffed
        public_42ffde : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_42ffeb
        mov dword ptr ds : [edx+8], ecx
        jmp public_42ffed
        public_42ffeb : nop
        mov dword ptr ds : [edx], ecx
        public_42ffed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_42fff3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_43001c
        mov dword ptr ds : [edi+4], ecx
        public_43001c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_43002f
        mov dword ptr ds : [edi+4], edx
        jmp public_43003d
        public_43002f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_43003a
        mov dword ptr ds : [edi], edx
        jmp public_43003d
        public_43003a : nop
        mov dword ptr ds : [edi+8], edx
        public_43003d : nop
        mov dword ptr ds : [edx], ecx
        public_43003f : nop
        mov dword ptr ds : [ecx+4], edx
        public_430042 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_42feb1
        public_43004e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x42fe20)
    }
}

#undef public_42fe89
#undef public_42fe9d
#undef public_42fea3
#undef public_42feb1
#undef public_42fef2
#undef public_42ff0b
#undef public_42ff1e
#undef public_42ff29
#undef public_42ff2c
#undef public_42ff31
#undef public_42ff5a
#undef public_42ff73
#undef public_42ff86
#undef public_42ff90
#undef public_42ffb3
#undef public_42ffcb
#undef public_42ffde
#undef public_42ffeb
#undef public_42ffed
#undef public_42fff3
#undef public_43001c
#undef public_43002f
#undef public_43003a
#undef public_43003d
#undef public_43003f
#undef public_430042
#undef public_43004e
