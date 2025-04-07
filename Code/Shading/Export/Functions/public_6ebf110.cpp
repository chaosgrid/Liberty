#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf110);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);

#define public_6ebf133 _public_6ebf133
#define public_6ebf150 _public_6ebf150
#define public_6ebf1da _public_6ebf1da
#define public_6ebf263 _public_6ebf263
#define public_6ebf28d _public_6ebf28d
#define public_6ebf293 _public_6ebf293
#define public_6ebf2a4 _public_6ebf2a4

PROC_DECLARE(0x6ebf110, internal_6ebf110, public_6ebf110);
extern "C" NAKED register_t __cdecl internal_6ebf110()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx]
        cmp eax, 0xA
        push ebp
        push esi
        push edi
        jl public_6ebf133
        cmp eax, 0xE
        jg public_6ebf133
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6ebf133 : nop
        push eax
        call public_6ed0ba0
        mov edx, dword ptr ds : [eax+0x38]
        mov edi, dword ptr ds : [public_6ed57c4]
        add esp, 4
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x18], ebp
        nop 
        public_6ebf150 : nop
        test edi, edi
        je public_6ebf2a4
        mov ecx, dword ptr ds : [public_6ed57c8]
        sub ecx, edi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        jae public_6ebf2a4
        mov eax, dword ptr ds : [ebx]
        cmp eax, 1
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[ecx+edi]
        jne public_6ebf1da
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        and edx, 8
        cmp edx, eax
        jne public_6ebf293
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        and eax, 8
        cmp eax, ecx
        jne public_6ebf293
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        and ecx, 8
        cmp ecx, eax
        jne public_6ebf293
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x18]
        and edx, 8
        cmp edx, eax
        jne public_6ebf293
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6ebf293
        jmp public_6ebf263
        public_6ebf1da : nop
        push eax
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        and ecx, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6ebf28d
        mov edx, dword ptr ds : [ebx]
        push edx
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0xC]
        and ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, eax
        jne public_6ebf28d
        mov edx, dword ptr ds : [ebx]
        push edx
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        and ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp ecx, eax
        jne public_6ebf28d
        mov edx, dword ptr ds : [ebx]
        push edx
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [esi+0x1C]
        and ecx, eax
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp ecx, eax
        jne public_6ebf28d
        mov edx, dword ptr ds : [ebx]
        push edx
        call public_6ed0ba0
        mov eax, dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ds : [esi+0x24]
        and ecx, eax
        mov eax, dword ptr ds : [esi+0x20]
        add esp, 4
        cmp ecx, eax
        jne public_6ebf28d
        mov edi, dword ptr ds : [public_6ed57c4]
        public_6ebf263 : nop
        mov edx, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x28]
        and edx, ecx
        cmp edx, eax
        jne public_6ebf293
        mov esi, dword ptr ds : [esi+0x30]
        push esi
        call public_6ed0b80
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_6ebf28d : nop
        mov edi, dword ptr ds : [public_6ed57c4]
        public_6ebf293 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc ebp
        add eax, 0x34
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6ebf150
        public_6ebf2a4 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ebf110)
    }
}

#undef public_6ebf133
#undef public_6ebf150
#undef public_6ebf1da
#undef public_6ebf263
#undef public_6ebf28d
#undef public_6ebf293
#undef public_6ebf2a4
