#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af30);

#define public_6d583c4 _public_6d583c4
#define public_6d583da _public_6d583da
#define public_6d583de _public_6d583de
#define public_6d583e3 _public_6d583e3
#define public_6d583fb _public_6d583fb
#define public_6d5840a _public_6d5840a
#define public_6d58428 _public_6d58428
#define public_6d5843e _public_6d5843e

PROC_DECLARE(0x6d583b0, internal_6d583b0, public_6d583b0);
extern "C" NAKED register_t __cdecl internal_6d583b0()
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
        je public_6d583e3
        public_6d583c4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6d5af30
        test eax, eax
        jge public_6d583da
        mov esi, dword ptr ds : [esi+8]
        jmp public_6d583de
        public_6d583da : nop
        mov edi, esi
        mov esi, dword ptr ds : [esi]
        public_6d583de : nop
        cmp esi, dword ptr ss : [ebp+8]
        jne public_6d583c4
        public_6d583e3 : nop
        cmp edi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], edi
        je public_6d5843e
        mov ebx, dword ptr ds : [edi+0x14]
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        jne public_6d583fb
        mov edi, offset public_6d64efc
        public_6d583fb : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        mov ecx, esi
        jb public_6d5840a
        mov ecx, ebx
        public_6d5840a : nop
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push edi
        push eax
        call dword ptr ds : [public_6d64cb0]
        add esp, 0xC
        test eax, eax
        jne public_6d58428
        cmp esi, ebx
        jb public_6d5843e
        cmp esi, ebx
        setne al
        test eax, eax
        public_6d58428 : nop
        jl public_6d5843e
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
        public_6d5843e : nop
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
        UNREACHABLE_TRAP(0x6d583b0)
    }
}

#undef public_6d583c4
#undef public_6d583da
#undef public_6d583de
#undef public_6d583e3
#undef public_6d583fb
#undef public_6d5840a
#undef public_6d58428
#undef public_6d5843e
