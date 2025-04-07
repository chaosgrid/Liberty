#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6350);
CLANG_FORWARD_PROC_SYMBOL(public_65f6670);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f63b9 _public_65f63b9
#define public_65f63cd _public_65f63cd
#define public_65f63d3 _public_65f63d3
#define public_65f63e1 _public_65f63e1
#define public_65f6422 _public_65f6422
#define public_65f643b _public_65f643b
#define public_65f644e _public_65f644e
#define public_65f6459 _public_65f6459
#define public_65f645c _public_65f645c
#define public_65f6461 _public_65f6461
#define public_65f648a _public_65f648a
#define public_65f64a3 _public_65f64a3
#define public_65f64b6 _public_65f64b6
#define public_65f64c0 _public_65f64c0
#define public_65f64e3 _public_65f64e3
#define public_65f64fb _public_65f64fb
#define public_65f650e _public_65f650e
#define public_65f651b _public_65f651b
#define public_65f651d _public_65f651d
#define public_65f6523 _public_65f6523
#define public_65f654c _public_65f654c
#define public_65f655f _public_65f655f
#define public_65f656a _public_65f656a
#define public_65f656d _public_65f656d
#define public_65f656f _public_65f656f
#define public_65f6572 _public_65f6572
#define public_65f657e _public_65f657e

PROC_DECLARE(0x65f6350, internal_65f6350, public_65f6350);
extern "C" NAKED register_t __cdecl internal_65f6350()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_6600bb6
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x18], 0
        mov byte ptr ds : [ebx+0x19], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_65f6670
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_65f63b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_65f63b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_65f63b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_65f63d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_65f63d3
        public_65f63b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_65f63cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_65f63d3
        public_65f63cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_65f63d3
        mov dword ptr ds : [eax], ebx
        public_65f63d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_65f657e
        public_65f63e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_65f657e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_65f64c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x18], 0
        jne public_65f6422
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_65f6572
        public_65f6422 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_65f6461
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_65f643b
        mov dword ptr ds : [edx+4], eax
        public_65f643b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_65f644e
        mov dword ptr ds : [edx+4], ecx
        jmp public_65f645c
        public_65f644e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_65f6459
        mov dword ptr ds : [edx], ecx
        jmp public_65f645c
        public_65f6459 : nop
        mov dword ptr ds : [edx+8], ecx
        public_65f645c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_65f6461 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_65f648a
        mov dword ptr ds : [edi+4], ecx
        public_65f648a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_65f64a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f656f
        public_65f64a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65f64b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f656f
        public_65f64b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f656f
        public_65f64c0 : nop
        cmp byte ptr ds : [edx+0x18], 0
        jne public_65f64e3
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_65f6572
        public_65f64e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_65f6523
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_65f64fb
        mov dword ptr ds : [edx+4], eax
        public_65f64fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_65f650e
        mov dword ptr ds : [edx+4], ecx
        jmp public_65f651d
        public_65f650e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_65f651b
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f651d
        public_65f651b : nop
        mov dword ptr ds : [edx], ecx
        public_65f651d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_65f6523 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_65f654c
        mov dword ptr ds : [edi+4], ecx
        public_65f654c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_65f655f
        mov dword ptr ds : [edi+4], edx
        jmp public_65f656d
        public_65f655f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_65f656a
        mov dword ptr ds : [edi], edx
        jmp public_65f656d
        public_65f656a : nop
        mov dword ptr ds : [edi+8], edx
        public_65f656d : nop
        mov dword ptr ds : [edx], ecx
        public_65f656f : nop
        mov dword ptr ds : [ecx+4], edx
        public_65f6572 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_65f63e1
        public_65f657e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65f6350)
    }
}

#undef public_65f63b9
#undef public_65f63cd
#undef public_65f63d3
#undef public_65f63e1
#undef public_65f6422
#undef public_65f643b
#undef public_65f644e
#undef public_65f6459
#undef public_65f645c
#undef public_65f6461
#undef public_65f648a
#undef public_65f64a3
#undef public_65f64b6
#undef public_65f64c0
#undef public_65f64e3
#undef public_65f64fb
#undef public_65f650e
#undef public_65f651b
#undef public_65f651d
#undef public_65f6523
#undef public_65f654c
#undef public_65f655f
#undef public_65f656a
#undef public_65f656d
#undef public_65f656f
#undef public_65f6572
#undef public_65f657e
