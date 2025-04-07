#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efdd30);
CLANG_FORWARD_PROC_SYMBOL(public_6efe000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efdd99 _public_6efdd99
#define public_6efddad _public_6efddad
#define public_6efddb3 _public_6efddb3
#define public_6efddc1 _public_6efddc1
#define public_6efde02 _public_6efde02
#define public_6efde1b _public_6efde1b
#define public_6efde2e _public_6efde2e
#define public_6efde39 _public_6efde39
#define public_6efde3c _public_6efde3c
#define public_6efde41 _public_6efde41
#define public_6efde6a _public_6efde6a
#define public_6efde83 _public_6efde83
#define public_6efde96 _public_6efde96
#define public_6efdea0 _public_6efdea0
#define public_6efdec3 _public_6efdec3
#define public_6efdedb _public_6efdedb
#define public_6efdeee _public_6efdeee
#define public_6efdefb _public_6efdefb
#define public_6efdefd _public_6efdefd
#define public_6efdf03 _public_6efdf03
#define public_6efdf2c _public_6efdf2c
#define public_6efdf3f _public_6efdf3f
#define public_6efdf4a _public_6efdf4a
#define public_6efdf4d _public_6efdf4d
#define public_6efdf4f _public_6efdf4f
#define public_6efdf52 _public_6efdf52
#define public_6efdf5e _public_6efdf5e

PROC_DECLARE(0x6efdd30, internal_6efdd30, public_6efdd30);
extern "C" NAKED register_t __cdecl internal_6efdd30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x58
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x54], 0
        mov byte ptr ds : [ebx+0x55], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6efe000
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6efdd99
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6efdd99
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6efdd99
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6efddb3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6efddb3
        public_6efdd99 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6efddad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6efddb3
        public_6efddad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6efddb3
        mov dword ptr ds : [eax], ebx
        public_6efddb3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6efdf5e
        public_6efddc1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6efdf5e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6efdea0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x54], 0
        jne public_6efde02
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6efdf52
        public_6efde02 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6efde41
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6efde1b
        mov dword ptr ds : [edx+4], eax
        public_6efde1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6efde2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6efde3c
        public_6efde2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6efde39
        mov dword ptr ds : [edx], ecx
        jmp public_6efde3c
        public_6efde39 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6efde3c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6efde41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6efde6a
        mov dword ptr ds : [edi+4], ecx
        public_6efde6a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6efde83
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6efdf4f
        public_6efde83 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6efde96
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6efdf4f
        public_6efde96 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6efdf4f
        public_6efdea0 : nop
        cmp byte ptr ds : [edx+0x54], 0
        jne public_6efdec3
        mov byte ptr ds : [ecx+0x54], 1
        mov byte ptr ds : [edx+0x54], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6efdf52
        public_6efdec3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6efdf03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6efdedb
        mov dword ptr ds : [edx+4], eax
        public_6efdedb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6efdeee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6efdefd
        public_6efdeee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6efdefb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6efdefd
        public_6efdefb : nop
        mov dword ptr ds : [edx], ecx
        public_6efdefd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6efdf03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6efdf2c
        mov dword ptr ds : [edi+4], ecx
        public_6efdf2c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6efdf3f
        mov dword ptr ds : [edi+4], edx
        jmp public_6efdf4d
        public_6efdf3f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6efdf4a
        mov dword ptr ds : [edi], edx
        jmp public_6efdf4d
        public_6efdf4a : nop
        mov dword ptr ds : [edi+8], edx
        public_6efdf4d : nop
        mov dword ptr ds : [edx], ecx
        public_6efdf4f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6efdf52 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6efddc1
        public_6efdf5e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6efdd30)
    }
}

#undef public_6efdd99
#undef public_6efddad
#undef public_6efddb3
#undef public_6efddc1
#undef public_6efde02
#undef public_6efde1b
#undef public_6efde2e
#undef public_6efde39
#undef public_6efde3c
#undef public_6efde41
#undef public_6efde6a
#undef public_6efde83
#undef public_6efde96
#undef public_6efdea0
#undef public_6efdec3
#undef public_6efdedb
#undef public_6efdeee
#undef public_6efdefb
#undef public_6efdefd
#undef public_6efdf03
#undef public_6efdf2c
#undef public_6efdf3f
#undef public_6efdf4a
#undef public_6efdf4d
#undef public_6efdf4f
#undef public_6efdf52
#undef public_6efdf5e
