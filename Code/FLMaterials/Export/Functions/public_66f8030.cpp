#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fc970);

#define public_66f8059 _public_66f8059
#define public_66f805b _public_66f805b
#define public_66f80a0 _public_66f80a0
#define public_66f80c7 _public_66f80c7
#define public_66f8123 _public_66f8123
#define public_66f8157 _public_66f8157
#define public_66f8175 _public_66f8175
#define public_66f8182 _public_66f8182

PROC_DECLARE(0x66f8030, internal_66f8030, public_66f8030);
extern "C" NAKED register_t __cdecl internal_66f8030()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push 0
        push esi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_66f8059
        add eax, 0xFFFFFFFC
        jmp public_66f805b
        public_66f8059 : nop
        xor eax, eax
        public_66f805b : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [esi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push esi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xE
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701f24
        mov eax, 1
        lea ebx, ds:[ebx]
        public_66f80a0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f80a0
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701f5c
        mov eax, 1
        public_66f80c7 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f80c7
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        je public_66f8123
        call public_66fc970
        test eax, eax
        je public_66f8123
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x80]
        test eax, eax
        je public_66f8123
        mov edx, eax
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[ebx+0x30]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ebx+0x2C], eax
        public_66f8123 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        fld dword ptr ds : [ebx+0x2C]
        fcomp qword ptr ds : [public_67016d8]
        fnstsw ax
        test ah, 5
        jnp public_66f8175
        mov al, byte ptr ds : [ebx+0x64]
        test al, al
        jne public_66f8175
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6701ed4
        mov eax, 0x89
        public_66f8157 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f8157
        pop edi
        pop esi
        pop ebx
        ret 8
        public_66f8175 : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6701ef4
        mov eax, 0x89
        public_66f8182 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f8182
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f8030)
    }
}

#undef public_66f8059
#undef public_66f805b
#undef public_66f80a0
#undef public_66f80c7
#undef public_66f8123
#undef public_66f8157
#undef public_66f8175
#undef public_66f8182
