#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bc4a0);
CLANG_FORWARD_PROC_SYMBOL(public_62bcd70);
CLANG_FORWARD_PROC_SYMBOL(public_62bcfa0);

#define public_62bbff5 _public_62bbff5
#define public_62bc004 _public_62bc004
#define public_62bc031 _public_62bc031
#define public_62bc046 _public_62bc046
#define public_62bc05f _public_62bc05f
#define public_62bc06b _public_62bc06b
#define public_62bc071 _public_62bc071
#define public_62bc07e _public_62bc07e
#define public_62bc080 _public_62bc080
#define public_62bc08f _public_62bc08f
#define public_62bc0a0 _public_62bc0a0
#define public_62bc0df _public_62bc0df
#define public_62bc0ec _public_62bc0ec
#define public_62bc0f0 _public_62bc0f0
#define public_62bc0ff _public_62bc0ff
#define public_62bc101 _public_62bc101
#define public_62bc12f _public_62bc12f
#define public_62bc138 _public_62bc138
#define public_62bc153 _public_62bc153
#define public_62bc161 _public_62bc161
#define public_62bc176 _public_62bc176
#define public_62bc18f _public_62bc18f
#define public_62bc19b _public_62bc19b
#define public_62bc1a1 _public_62bc1a1
#define public_62bc1ae _public_62bc1ae
#define public_62bc1b0 _public_62bc1b0
#define public_62bc1b7 _public_62bc1b7
#define public_62bc1c0 _public_62bc1c0
#define public_62bc1c6 _public_62bc1c6
#define public_62bc1df _public_62bc1df
#define public_62bc1ec _public_62bc1ec

PROC_DECLARE(0x62bbfe0, internal_62bbfe0, public_62bbfe0);
extern "C" NAKED register_t __cdecl internal_62bbfe0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+0xC]
        cmp esi, ebx
        je public_62bc004
        mov ebp, dword ptr ss : [esp+0x18]
        public_62bbff5 : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        call public_62bc4a0
        add esi, 4
        cmp esi, ebx
        jne public_62bbff5
        public_62bc004 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x10], ecx
        jg public_62bc08f
        cmp ecx, edx
        je public_62bc1ec
        lea edi, ds:[ecx+4]
        cmp edi, edx
        je public_62bc1ec
        public_62bc031 : nop
        mov ebx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 5
        jnp public_62bc06b
        mov esi, edi
        mov ecx, edi
        public_62bc046 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jp public_62bc05f
        mov dword ptr ds : [esi], edx
        mov esi, ecx
        jmp public_62bc046
        public_62bc05f : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ebx
        jmp public_62bc080
        public_62bc06b : nop
        cmp ecx, edi
        mov eax, edi
        je public_62bc07e
        public_62bc071 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ecx
        mov dword ptr ds : [eax+4], esi
        jne public_62bc071
        public_62bc07e : nop
        mov dword ptr ds : [ecx], ebx
        public_62bc080 : nop
        add edi, 4
        cmp edi, edx
        jne public_62bc031
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62bc08f : nop
        cmp eax, 0x10
        mov ebx, edx
        mov edi, ecx
        jle public_62bc153
        mov ebp, dword ptr ss : [esp+0x18]
        public_62bc0a0 : nop
        mov ecx, dword ptr ds : [edi]
        fld dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx-4]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cdq 
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr ds : [edi+eax*4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_62bc0df
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jnp public_62bc0ff
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bc0ec
        mov eax, esi
        jmp public_62bc101
        public_62bc0df : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bc0f0
        public_62bc0ec : nop
        mov eax, ecx
        jmp public_62bc101
        public_62bc0f0 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        mov eax, esi
        jnp public_62bc101
        public_62bc0ff : nop
        mov eax, edx
        public_62bc101 : nop
        push ebp
        push eax
        push ebx
        push edi
        call public_62bcfa0
        mov esi, eax
        mov ecx, ebx
        mov edx, esi
        add esp, 0x10
        sub ecx, esi
        sub edx, edi
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        push ebp
        jg public_62bc12f
        push ebx
        push esi
        call public_62bcd70
        mov ebx, esi
        jmp public_62bc138
        public_62bc12f : nop
        push esi
        push edi
        call public_62bcd70
        mov edi, esi
        public_62bc138 : nop
        mov eax, ebx
        sub eax, edi
        and eax, 0xFFFFFFFC
        add esp, 0x10
        cmp eax, 0x40
        jg public_62bc0a0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62bc153 : nop
        lea ebp, ds:[ecx+0x40]
        cmp ecx, ebp
        je public_62bc1b7
        lea ebx, ds:[ecx+4]
        cmp ebx, ebp
        je public_62bc1b7
        public_62bc161 : nop
        mov esi, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 5
        jnp public_62bc19b
        mov edi, ebx
        mov ecx, ebx
        public_62bc176 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jp public_62bc18f
        mov dword ptr ds : [edi], edx
        mov edi, ecx
        jmp public_62bc176
        public_62bc18f : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], esi
        jmp public_62bc1b0
        public_62bc19b : nop
        cmp ecx, ebx
        mov eax, ebx
        je public_62bc1ae
        public_62bc1a1 : nop
        mov edi, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ecx
        mov dword ptr ds : [eax+4], edi
        jne public_62bc1a1
        public_62bc1ae : nop
        mov dword ptr ds : [ecx], esi
        public_62bc1b0 : nop
        add ebx, 4
        cmp ebx, ebp
        jne public_62bc161
        public_62bc1b7 : nop
        mov esi, ebp
        cmp esi, edx
        je public_62bc1ec
        lea ecx, ds:[ecx]
        public_62bc1c0 : nop
        mov ebx, dword ptr ds : [esi]
        mov edi, esi
        mov ecx, esi
        public_62bc1c6 : nop
        mov edx, dword ptr ds : [ecx-4]
        fld dword ptr ds : [ebx+4]
        fcomp dword ptr ds : [edx+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jp public_62bc1df
        mov dword ptr ds : [edi], edx
        mov edi, ecx
        jmp public_62bc1c6
        public_62bc1df : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 4
        cmp esi, eax
        mov dword ptr ds : [edi], ebx
        jne public_62bc1c0
        public_62bc1ec : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62bbfe0)
    }
}

#undef public_62bbff5
#undef public_62bc004
#undef public_62bc031
#undef public_62bc046
#undef public_62bc05f
#undef public_62bc06b
#undef public_62bc071
#undef public_62bc07e
#undef public_62bc080
#undef public_62bc08f
#undef public_62bc0a0
#undef public_62bc0df
#undef public_62bc0ec
#undef public_62bc0f0
#undef public_62bc0ff
#undef public_62bc101
#undef public_62bc12f
#undef public_62bc138
#undef public_62bc153
#undef public_62bc161
#undef public_62bc176
#undef public_62bc18f
#undef public_62bc19b
#undef public_62bc1a1
#undef public_62bc1ae
#undef public_62bc1b0
#undef public_62bc1b7
#undef public_62bc1c0
#undef public_62bc1c6
#undef public_62bc1df
#undef public_62bc1ec
