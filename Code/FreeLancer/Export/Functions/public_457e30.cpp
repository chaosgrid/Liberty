#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_457e30);
CLANG_FORWARD_PROC_SYMBOL(public_5582a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_457e36 _public_457e36
#define public_457e5a _public_457e5a
#define public_457e66 _public_457e66
#define public_457e74 _public_457e74
#define public_457e80 _public_457e80
#define public_457ea3 _public_457ea3
#define public_457eb5 _public_457eb5
#define public_457ede _public_457ede

PROC_DECLARE(0x457e30, internal_457e30, public_457e30);
extern "C" NAKED register_t __cdecl internal_457e30()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        public_457e36 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_457e5a
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_457e5a
        mov eax, ecx
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_41b030
        add esp, 4
        inc edi
        jmp public_457e36
        public_457e5a : nop
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, edx
        cmp eax, edx
        je public_457e74
        public_457e66 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_457e66
        public_457e74 : nop
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        test eax, eax
        jle public_457eb5
        public_457e80 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edx+edi*4]
        cmp ecx, 0xFFFFFFFF
        je public_457ea3
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+edi*4], 0xFFFFFFFF
        public_457ea3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+edi*4], 0
        mov eax, dword ptr ds : [esi+4]
        inc edi
        cmp edi, eax
        jl public_457e80
        public_457eb5 : nop
        lea ecx, ds:[esi+0x20]
        call public_5582a0
        mov edx, dword ptr ds : [esi+8]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi]
        add esp, 8
        test ecx, ecx
        je public_457ede
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_457ede : nop
        pop edi
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x457e30)
    }
}

#undef public_457e36
#undef public_457e5a
#undef public_457e66
#undef public_457e74
#undef public_457e80
#undef public_457ea3
#undef public_457eb5
#undef public_457ede
