#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43560);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f48a9f _public_6f48a9f
#define public_6f48ac3 _public_6f48ac3
#define public_6f48acb _public_6f48acb
#define public_6f48b18 _public_6f48b18
#define public_6f48b22 _public_6f48b22
#define public_6f48b36 _public_6f48b36

PROC_DECLARE(0x6f48a40, internal_6f48a40, public_6f48a40);
extern "C" NAKED register_t __cdecl internal_6f48a40()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        push edi
        je public_6f48b22
        mov eax, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, 0xFFFFFFFF
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ds:[esi+0x18]
        je public_6f48a9f
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [edi+4]
        je public_6f48a9f
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 0xD
        jne public_6f48a9f
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+0xD0]
        mov dword ptr ss : [esp+0xC], edx
        public_6f48a9f : nop
        push ebx
        lea ebx, ds:[esi+0x14]
        push ebx
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f48ac3
        mov edx, dword ptr ds : [ebx]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f48ac3
        lea eax, ss:[esp+0x18]
        jmp public_6f48acb
        public_6f48ac3 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ss:[esp+0x1C]
        public_6f48acb : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, ecx
        pop ebx
        je public_6f48b22
        mov eax, dword ptr ds : [esi]
        push 0x3F800000
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 0xD
        jne public_6f48b22
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [ecx+0xD0]
        mov dword ptr ss : [esp+0x14], eax
        test byte ptr ds : [esi+0x54], 1
        je public_6f48b18
        fld dword ptr ds : [esi+0x5C]
        fld dword ptr ss : [esp+0xC]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        public_6f48b18 : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_6f43560
        public_6f48b22 : nop
        mov esi, dword ptr ds : [esi+0x1C]
        cmp ebp, esi
        jb public_6f48b36
        test esi, esi
        jl public_6f48b36
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret 8
        public_6f48b36 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f48a40)
    }
}

#undef public_6f48a9f
#undef public_6f48ac3
#undef public_6f48acb
#undef public_6f48b18
#undef public_6f48b22
#undef public_6f48b36
