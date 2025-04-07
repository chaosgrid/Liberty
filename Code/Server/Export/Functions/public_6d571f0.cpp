#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d571f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);

#define public_6d57204 _public_6d57204
#define public_6d5721a _public_6d5721a
#define public_6d5721e _public_6d5721e
#define public_6d57223 _public_6d57223
#define public_6d5723b _public_6d5723b
#define public_6d5724a _public_6d5724a
#define public_6d57268 _public_6d57268
#define public_6d5727e _public_6d5727e

PROC_DECLARE(0x6d571f0, internal_6d571f0, public_6d571f0);
extern "C" NAKED register_t __cdecl internal_6d571f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, eax
        je public_6d57223
        public_6d57204 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6d5af80
        test eax, eax
        jge public_6d5721a
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d5721e
        public_6d5721a : nop
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        public_6d5721e : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_6d57204
        public_6d57223 : nop
        cmp edi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], edi
        je public_6d5727e
        mov ebx, dword ptr ds : [edi+0x14]
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        jne public_6d5723b
        mov edi, offset public_6d64f30
        public_6d5723b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        mov ecx, esi
        jb public_6d5724a
        mov ecx, ebx
        public_6d5724a : nop
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edi
        push eax
        call dword ptr ds : [public_6d64ca4]
        add esp, 0xC
        test eax, eax
        jne public_6d57268
        cmp esi, ebx
        jb public_6d5727e
        cmp esi, ebx
        setne al
        test eax, eax
        public_6d57268 : nop
        jl public_6d5727e
        pop edi
        lea eax, ss:[esp+0xC]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6d5727e : nop
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        lea eax, ss:[esp+0x18]
        pop esi
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d571f0)
    }
}

#undef public_6d57204
#undef public_6d5721a
#undef public_6d5721e
#undef public_6d57223
#undef public_6d5723b
#undef public_6d5724a
#undef public_6d57268
#undef public_6d5727e
