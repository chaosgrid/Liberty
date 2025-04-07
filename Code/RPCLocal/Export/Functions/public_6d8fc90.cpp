#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d8fce3 _public_6d8fce3
#define public_6d8fcfb _public_6d8fcfb
#define public_6d8fd27 _public_6d8fd27
#define public_6d8fd53 _public_6d8fd53
#define public_6d8fd7f _public_6d8fd7f
#define public_6d8fdad _public_6d8fdad
#define public_6d8fdf5 _public_6d8fdf5
#define public_6d8fe0f _public_6d8fe0f
#define public_6d8fe36 _public_6d8fe36
#define public_6d8fe4c _public_6d8fe4c
#define public_6d8fe92 _public_6d8fe92
#define public_6d8fe96 _public_6d8fe96
#define public_6d8feae _public_6d8feae
#define public_6d8fedb _public_6d8fedb
#define public_6d8ff0d _public_6d8ff0d
#define public_6d8ff51 _public_6d8ff51
#define public_6d8ff69 _public_6d8ff69
#define public_6d8ff78 _public_6d8ff78
#define public_6d8ffab _public_6d8ffab
#define public_6d8ffb7 _public_6d8ffb7

PROC_DECLARE(0x6d8fc90, internal_6d8fc90, public_6d8fc90);
extern "C" NAKED register_t __cdecl internal_6d8fc90()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea ebx, ds:[esi+0x10]
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ds : [esi+0x14]
        push ebx
        push eax
        lea ebp, ds:[esi+0x18]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6d8fce3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6d8fce3 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov eax, 0x16
        jbe public_6d8fcfb
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8fcfb : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8ffb7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d8fd27
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8fd27 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8ffb7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d8fd53
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8fd53 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8ffb7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d8fd7f
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8fd7f : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8ffb7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, ecx
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d8fdad
        mov dword ptr ds : [ebx+0xC], eax
        public_6d8fdad : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8ffb7
        mov eax, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [esi+0x2C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d8fdf5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d8fdf5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6d8fe0f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6d8fe0f : nop
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, ecx
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6d8fe36
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d8fe36 : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6d8fe4c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6d8fe4c : nop
        mov ecx, dword ptr ds : [eax+0x30]
        mov edi, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, edx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [eax+0x38]
        test ecx, ecx
        jbe public_6d8ff51
        mov edx, dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6d8ff51
        jmp public_6d8fe96
        public_6d8fe92 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6d8fe96 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6d8feae
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d8feae : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6d8ff69
        mov esi, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [edx]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ss : [ebp], esi
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add edi, 4
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6d8fedb
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d8fedb : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6d8ff69
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], esi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add edi, ecx
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6d8ff0d
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d8ff0d : nop
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6d8ff69
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x1C], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x1C]
        add ecx, edx
        mov edx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6d8fe92
        public_6d8ff51 : nop
        mov edx, dword ptr ds : [eax+0x14]
        push ebx
        push edx
        push ebp
        mov ecx, eax
        call public_6da13c0
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x1C], eax
        je public_6d8ff78
        public_6d8ff69 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 8
        ret 0xC
        public_6d8ff78 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [ebx]
        add edi, edx
        mov dword ptr ds : [ecx+0x18], edi
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        mov esi, ebp
        jbe public_6d8ffab
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d8ffab : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6d8ffb7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6d8fc90)
    }
}

#undef public_6d8fce3
#undef public_6d8fcfb
#undef public_6d8fd27
#undef public_6d8fd53
#undef public_6d8fd7f
#undef public_6d8fdad
#undef public_6d8fdf5
#undef public_6d8fe0f
#undef public_6d8fe36
#undef public_6d8fe4c
#undef public_6d8fe92
#undef public_6d8fe96
#undef public_6d8feae
#undef public_6d8fedb
#undef public_6d8ff0d
#undef public_6d8ff51
#undef public_6d8ff69
#undef public_6d8ff78
#undef public_6d8ffab
#undef public_6d8ffb7
