#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d918d9 _public_6d918d9
#define public_6d918f1 _public_6d918f1
#define public_6d91901 _public_6d91901
#define public_6d91926 _public_6d91926
#define public_6d91936 _public_6d91936
#define public_6d91960 _public_6d91960
#define public_6d91970 _public_6d91970
#define public_6d9198a _public_6d9198a
#define public_6d919b5 _public_6d919b5
#define public_6d919cc _public_6d919cc
#define public_6d919d3 _public_6d919d3
#define public_6d919ea _public_6d919ea
#define public_6d919f3 _public_6d919f3
#define public_6d91a26 _public_6d91a26

PROC_DECLARE(0x6d91890, internal_6d91890, public_6d91890);
extern "C" NAKED register_t __cdecl internal_6d91890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d918d9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d918d9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x16
        jbe public_6d918f1
        mov dword ptr ds : [ebx+0xC], edi
        public_6d918f1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d91901
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d91901 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+0x24]
        test eax, eax
        jbe public_6d91960
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d91926
        mov dword ptr ds : [ebx+0xC], edi
        public_6d91926 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d91936
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d91936 : nop
        mov eax, dword ptr ss : [ebp+0x24]
        mov edi, dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x16
        public_6d91960 : nop
        cmp word ptr ss : [ebp+0x30], 0
        jbe public_6d919d3
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6d919d3
        public_6d91970 : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6d919cc
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6d9198a
        mov dword ptr ds : [ebx+0xC], edi
        public_6d9198a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d919ea
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6d919b5
        mov dword ptr ds : [ebx+0xC], edi
        public_6d919b5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d919ea
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6d919cc : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ss : [ebp+0x2C]
        jne public_6d91970
        public_6d919d3 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d919f3
        public_6d919ea : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d919f3 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
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
        jbe public_6d91a26
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d91a26 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6d91890)
    }
}

#undef public_6d918d9
#undef public_6d918f1
#undef public_6d91901
#undef public_6d91926
#undef public_6d91936
#undef public_6d91960
#undef public_6d91970
#undef public_6d9198a
#undef public_6d919b5
#undef public_6d919cc
#undef public_6d919d3
#undef public_6d919ea
#undef public_6d919f3
#undef public_6d91a26
