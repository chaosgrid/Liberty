#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bea90);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62beafe _public_62beafe
#define public_62beb12 _public_62beb12
#define public_62beb18 _public_62beb18
#define public_62beb26 _public_62beb26
#define public_62beb4a _public_62beb4a
#define public_62beb67 _public_62beb67
#define public_62beb80 _public_62beb80
#define public_62beb93 _public_62beb93
#define public_62beb9e _public_62beb9e
#define public_62beba1 _public_62beba1
#define public_62beba6 _public_62beba6
#define public_62bebcf _public_62bebcf
#define public_62bebe8 _public_62bebe8
#define public_62bebfb _public_62bebfb
#define public_62bec05 _public_62bec05
#define public_62bec27 _public_62bec27
#define public_62bec3a _public_62bec3a
#define public_62bec47 _public_62bec47
#define public_62bec49 _public_62bec49
#define public_62bec4f _public_62bec4f
#define public_62bec78 _public_62bec78
#define public_62bec8b _public_62bec8b
#define public_62bec96 _public_62bec96
#define public_62bec99 _public_62bec99
#define public_62bec9b _public_62bec9b
#define public_62bec9e _public_62bec9e
#define public_62becaa _public_62becaa

PROC_DECLARE(0x62bea90, internal_62bea90, public_62bea90);
extern "C" NAKED register_t __cdecl internal_62bea90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62bee40
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62beafe
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62beafe
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [edi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_62beafe
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62beb18
        mov dword ptr ds : [eax+8], ebx
        jmp public_62beb18
        public_62beafe : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62beb12
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], ebx
        jmp public_62beb18
        public_62beb12 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62beb18
        mov dword ptr ds : [eax], ebx
        public_62beb18 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov eax, ebx
        je public_62becaa
        public_62beb26 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62becaa
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62bec05
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_62beb67
        public_62beb4a : nop
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_62bec9e
        public_62beb67 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_62beba6
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_62beb80
        mov dword ptr ds : [edx+4], eax
        public_62beb80 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62beb93
        mov dword ptr ds : [edx+4], ecx
        jmp public_62beba1
        public_62beb93 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_62beb9e
        mov dword ptr ds : [edx], ecx
        jmp public_62beba1
        public_62beb9e : nop
        mov dword ptr ds : [edx+8], ecx
        public_62beba1 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_62beba6 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_62bebcf
        mov dword ptr ds : [edi+4], ecx
        public_62bebcf : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62bebe8
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62bec9b
        public_62bebe8 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62bebfb
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62bec9b
        public_62bebfb : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62bec9b
        public_62bec05 : nop
        cmp byte ptr ds : [edx+0x14], 0
        je public_62beb4a
        cmp eax, dword ptr ds : [ecx]
        jne public_62bec4f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_62bec27
        mov dword ptr ds : [edx+4], eax
        public_62bec27 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62bec3a
        mov dword ptr ds : [edx+4], ecx
        jmp public_62bec49
        public_62bec3a : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_62bec47
        mov dword ptr ds : [edx+8], ecx
        jmp public_62bec49
        public_62bec47 : nop
        mov dword ptr ds : [edx], ecx
        public_62bec49 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_62bec4f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_62bec78
        mov dword ptr ds : [edi+4], ecx
        public_62bec78 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62bec8b
        mov dword ptr ds : [edi+4], edx
        jmp public_62bec99
        public_62bec8b : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_62bec96
        mov dword ptr ds : [edi], edx
        jmp public_62bec99
        public_62bec96 : nop
        mov dword ptr ds : [edi+8], edx
        public_62bec99 : nop
        mov dword ptr ds : [edx], ecx
        public_62bec9b : nop
        mov dword ptr ds : [ecx+4], edx
        public_62bec9e : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62beb26
        public_62becaa : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62bea90)
    }
}

#undef public_62beafe
#undef public_62beb12
#undef public_62beb18
#undef public_62beb26
#undef public_62beb4a
#undef public_62beb67
#undef public_62beb80
#undef public_62beb93
#undef public_62beb9e
#undef public_62beba1
#undef public_62beba6
#undef public_62bebcf
#undef public_62bebe8
#undef public_62bebfb
#undef public_62bec05
#undef public_62bec27
#undef public_62bec3a
#undef public_62bec47
#undef public_62bec49
#undef public_62bec4f
#undef public_62bec78
#undef public_62bec8b
#undef public_62bec96
#undef public_62bec99
#undef public_62bec9b
#undef public_62bec9e
#undef public_62becaa
