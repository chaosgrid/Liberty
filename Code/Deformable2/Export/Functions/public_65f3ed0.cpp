#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3ed0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6760);
CLANG_FORWARD_PROC_SYMBOL(public_65fbf40);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f3ee0 _public_65f3ee0
#define public_65f3f01 _public_65f3f01
#define public_65f3f06 _public_65f3f06
#define public_65f3f17 _public_65f3f17
#define public_65f3f1e _public_65f3f1e
#define public_65f3f26 _public_65f3f26
#define public_65f3f37 _public_65f3f37
#define public_65f3f3a _public_65f3f3a
#define public_65f3f49 _public_65f3f49
#define public_65f3f4f _public_65f3f4f
#define public_65f3f68 _public_65f3f68
#define public_65f3f89 _public_65f3f89
#define public_65f3fa3 _public_65f3fa3
#define public_65f3fb0 _public_65f3fb0
#define public_65f3fbb _public_65f3fbb
#define public_65f3fbe _public_65f3fbe

PROC_DECLARE(0x65f3ed0, internal_65f3ed0, public_65f3ed0);
extern "C" NAKED register_t __cdecl internal_65f3ed0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xC]
        xor ebx, ebx
        cmp esi, ebx
        je public_65f3f1e
        nop 
        public_65f3ee0 : nop
        cmp byte ptr ds : [esi], 0
        mov eax, dword ptr ds : [public_6603138]
        je public_65f3f06
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, ebx
        je public_65f3f01
        mov ecx, ebp
        call public_65fbf40
        push ebp
        call public_6600bb0
        add esp, 4
        public_65f3f01 : nop
        mov dword ptr ds : [esi+4], ebx
        jmp public_65f3f17
        public_65f3f06 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_65f3f17 : nop
        mov esi, dword ptr ds : [esi+0x10]
        cmp esi, ebx
        jne public_65f3ee0
        public_65f3f1e : nop
        cmp dword ptr ds : [edi+0x14], ebx
        mov eax, dword ptr ds : [edi+0xC]
        je public_65f3f68
        public_65f3f26 : nop
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, ebx
        mov ecx, dword ptr ds : [eax+0x10]
        mov esi, ecx
        jne public_65f3f37
        mov dword ptr ds : [edi+0xC], ecx
        jmp public_65f3f3a
        public_65f3f37 : nop
        mov dword ptr ds : [edx+0x10], ecx
        public_65f3f3a : nop
        mov ecx, dword ptr ds : [eax+0x10]
        cmp ecx, ebx
        jne public_65f3f49
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi+0x10], ecx
        jmp public_65f3f4f
        public_65f3f49 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_65f3f4f : nop
        mov ecx, dword ptr ds : [edi+0x14]
        dec ecx
        push eax
        mov dword ptr ds : [edi+0x14], ecx
        call public_6600bb0
        mov ecx, dword ptr ds : [edi+0x14]
        add esp, 4
        cmp ecx, ebx
        mov eax, esi
        jne public_65f3f26
        public_65f3f68 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebx
        je public_65f3fbe
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, 0xFFFFFFFF
        je public_65f3f89
        mov ecx, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x60]
        public_65f3f89 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_65f3fbb
        mov eax, dword ptr ds : [ecx-4]
        lea ebx, ds:[ecx-4]
        mov esi, eax
        imul esi, 0x34
        add esi, ecx
        dec eax
        js public_65f3fb0
        lea ebp, ds:[eax+1]
        public_65f3fa3 : nop
        sub esi, 0x34
        mov ecx, esi
        call public_65f6760
        dec ebp
        jne public_65f3fa3
        public_65f3fb0 : nop
        push ebx
        call public_6600bb0
        add esp, 4
        xor ebx, ebx
        public_65f3fbb : nop
        mov dword ptr ds : [edi+8], ebx
        public_65f3fbe : nop
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65f3ed0)
    }
}

#undef public_65f3ee0
#undef public_65f3f01
#undef public_65f3f06
#undef public_65f3f17
#undef public_65f3f1e
#undef public_65f3f26
#undef public_65f3f37
#undef public_65f3f3a
#undef public_65f3f49
#undef public_65f3f4f
#undef public_65f3f68
#undef public_65f3f89
#undef public_65f3fa3
#undef public_65f3fb0
#undef public_65f3fbb
#undef public_65f3fbe
