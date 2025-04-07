#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f60d0);

#define public_66f5ddb _public_66f5ddb
#define public_66f5e13 _public_66f5e13
#define public_66f5e62 _public_66f5e62
#define public_66f5ea3 _public_66f5ea3
#define public_66f5edc _public_66f5edc
#define public_66f5f42 _public_66f5f42
#define public_66f5f50 _public_66f5f50
#define public_66f5f77 _public_66f5f77
#define public_66f5fe3 _public_66f5fe3
#define public_66f5fe7 _public_66f5fe7
#define public_66f5ff8 _public_66f5ff8
#define public_66f604a _public_66f604a
#define public_66f608c _public_66f608c
#define public_66f60bd _public_66f60bd

PROC_DECLARE(0x66f5dc0, internal_66f5dc0, public_66f5dc0);
extern "C" NAKED register_t __cdecl internal_66f5dc0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        push esi
        push edi
        jne public_66f5ddb
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 0x20
        public_66f5ddb : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [esi+0x70]
        test cl, cl
        jne public_66f5e13
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x20
        public_66f5e13 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 3
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ss : [esp+0x30]
        and eax, 0x100
        mov dword ptr ss : [esp+0x10], eax
        je public_66f5e62
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push ebx
        add ecx, edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        mov edi, eax
        test edi, edi
        jge public_66f5edc
        public_66f5e62 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_66f5ea3
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ds:[ecx+edi*2]
        mov edi, dword ptr ss : [esp+0x28]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        add ecx, edi
        push ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ecx]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        public_66f5ea3 : nop
        test eax, eax
        mov edi, eax
        jge public_66f5edc
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_66f5edc
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jbe public_66f5edc
        test ebx, ebx
        jbe public_66f5edc
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_66f60d0
        mov edi, eax
        public_66f5edc : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        test edi, edi
        jl public_66f60bd
        mov eax, dword ptr ds : [esi+0x74]
        test eax, eax
        je public_66f5fe7
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov edi, 1
        push edi
        xor ebx, ebx
        push ebx
        mov dword ptr ss : [esp+0x24], edi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xFC]
        cmp dword ptr ss : [esp+0x18], edi
        je public_66f5f42
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push edi
        push eax
        mov ebx, edi
        call dword ptr ds : [edx+0xFC]
        cmp dword ptr ss : [esp+0x18], edi
        jne public_66f5fe3
        public_66f5f42 : nop
        mov ebp, dword ptr ds : [esi+4]
        mov edi, offset public_67019c4
        mov eax, 1
        nop 
        public_66f5f50 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        push ebx
        push ebp
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f5f50
        mov ebp, dword ptr ds : [esi+4]
        mov edi, offset public_67019fc
        mov eax, 1
        public_66f5f77 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        lea eax, ds:[ebx+1]
        push eax
        push ebp
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f5f77
        mov ecx, dword ptr ds : [esi+0x74]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push ebx
        push eax
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0x30000
        push 0xB
        push ebx
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8E
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push 0x8F
        push eax
        call dword ptr ds : [edx+0xF0]
        mov ebp, dword ptr ss : [esp+0x1C]
        public_66f5fe3 : nop
        mov ebx, dword ptr ss : [esp+0x30]
        public_66f5fe7 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x30], eax
        mov edi, offset public_6701994
        mov eax, 0x89
        public_66f5ff8 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f5ff8
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_66f604a
        mov edx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx+4]
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        add edx, edi
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_66f60bd
        public_66f604a : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_66f608c
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        lea ecx, ds:[ecx+edi*2]
        mov edi, dword ptr ss : [esp+0x28]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        add ecx, edi
        push ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ecx]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        test eax, eax
        jge public_66f60bd
        public_66f608c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_66f60bd
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jbe public_66f60bd
        test ebx, ebx
        jbe public_66f60bd
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_66f60d0
        public_66f60bd : nop
        mov eax, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x20
        UNREACHABLE_TRAP(0x66f5dc0)
    }
}

#undef public_66f5ddb
#undef public_66f5e13
#undef public_66f5e62
#undef public_66f5ea3
#undef public_66f5edc
#undef public_66f5f42
#undef public_66f5f50
#undef public_66f5f77
#undef public_66f5fe3
#undef public_66f5fe7
#undef public_66f5ff8
#undef public_66f604a
#undef public_66f608c
#undef public_66f60bd
