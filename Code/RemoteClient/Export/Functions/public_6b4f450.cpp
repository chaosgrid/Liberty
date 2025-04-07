#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f450);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f820);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4f4b9 _public_6b4f4b9
#define public_6b4f4cd _public_6b4f4cd
#define public_6b4f4d3 _public_6b4f4d3
#define public_6b4f4e1 _public_6b4f4e1
#define public_6b4f522 _public_6b4f522
#define public_6b4f53b _public_6b4f53b
#define public_6b4f54e _public_6b4f54e
#define public_6b4f559 _public_6b4f559
#define public_6b4f55c _public_6b4f55c
#define public_6b4f561 _public_6b4f561
#define public_6b4f58a _public_6b4f58a
#define public_6b4f5a3 _public_6b4f5a3
#define public_6b4f5b6 _public_6b4f5b6
#define public_6b4f5c0 _public_6b4f5c0
#define public_6b4f5e3 _public_6b4f5e3
#define public_6b4f5fb _public_6b4f5fb
#define public_6b4f60e _public_6b4f60e
#define public_6b4f61b _public_6b4f61b
#define public_6b4f61d _public_6b4f61d
#define public_6b4f623 _public_6b4f623
#define public_6b4f64c _public_6b4f64c
#define public_6b4f65f _public_6b4f65f
#define public_6b4f66a _public_6b4f66a
#define public_6b4f66d _public_6b4f66d
#define public_6b4f66f _public_6b4f66f
#define public_6b4f672 _public_6b4f672
#define public_6b4f67e _public_6b4f67e

PROC_DECLARE(0x6b4f450, internal_6b4f450, public_6b4f450);
extern "C" NAKED register_t __cdecl internal_6b4f450()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x50
        mov esi, ecx
        call public_6b6a134
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x48], 0
        mov byte ptr ds : [ebx+0x49], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0x10]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6b4f820
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6b4f4b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b4f4b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0x10]
        jb public_6b4f4b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6b4f4d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b4f4d3
        public_6b4f4b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6b4f4cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6b4f4d3
        public_6b4f4cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6b4f4d3
        mov dword ptr ds : [eax], ebx
        public_6b4f4d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6b4f67e
        public_6b4f4e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6b4f67e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6b4f5c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6b4f522
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6b4f672
        public_6b4f522 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6b4f561
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b4f53b
        mov dword ptr ds : [edx+4], eax
        public_6b4f53b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b4f54e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b4f55c
        public_6b4f54e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6b4f559
        mov dword ptr ds : [edx], ecx
        jmp public_6b4f55c
        public_6b4f559 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b4f55c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b4f561 : nop
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
        je public_6b4f58a
        mov dword ptr ds : [edi+4], ecx
        public_6b4f58a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b4f5a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b4f66f
        public_6b4f5a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b4f5b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b4f66f
        public_6b4f5b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b4f66f
        public_6b4f5c0 : nop
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6b4f5e3
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b4f672
        public_6b4f5e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6b4f623
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b4f5fb
        mov dword ptr ds : [edx+4], eax
        public_6b4f5fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b4f60e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b4f61d
        public_6b4f60e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6b4f61b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b4f61d
        public_6b4f61b : nop
        mov dword ptr ds : [edx], ecx
        public_6b4f61d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b4f623 : nop
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
        je public_6b4f64c
        mov dword ptr ds : [edi+4], ecx
        public_6b4f64c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b4f65f
        mov dword ptr ds : [edi+4], edx
        jmp public_6b4f66d
        public_6b4f65f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6b4f66a
        mov dword ptr ds : [edi], edx
        jmp public_6b4f66d
        public_6b4f66a : nop
        mov dword ptr ds : [edi+8], edx
        public_6b4f66d : nop
        mov dword ptr ds : [edx], ecx
        public_6b4f66f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b4f672 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b4f4e1
        public_6b4f67e : nop
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
        UNREACHABLE_TRAP(0x6b4f450)
    }
}

#undef public_6b4f4b9
#undef public_6b4f4cd
#undef public_6b4f4d3
#undef public_6b4f4e1
#undef public_6b4f522
#undef public_6b4f53b
#undef public_6b4f54e
#undef public_6b4f559
#undef public_6b4f55c
#undef public_6b4f561
#undef public_6b4f58a
#undef public_6b4f5a3
#undef public_6b4f5b6
#undef public_6b4f5c0
#undef public_6b4f5e3
#undef public_6b4f5fb
#undef public_6b4f60e
#undef public_6b4f61b
#undef public_6b4f61d
#undef public_6b4f623
#undef public_6b4f64c
#undef public_6b4f65f
#undef public_6b4f66a
#undef public_6b4f66d
#undef public_6b4f66f
#undef public_6b4f672
#undef public_6b4f67e
