#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f43d9d _public_6f43d9d
#define public_6f43da5 _public_6f43da5
#define public_6f43dcf _public_6f43dcf
#define public_6f43dd8 _public_6f43dd8

PROC_DECLARE(0x6f43d70, internal_6f43d70, public_6f43d70);
extern "C" NAKED register_t __cdecl internal_6f43d70()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f43d9d
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f43d9d
        lea eax, ss:[esp+0x14]
        jmp public_6f43da5
        public_6f43d9d : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f43da5 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f43dd8
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f43dd8
        test ebx, ebx
        je public_6f43dcf
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6f43dcf : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f43dd8 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f43d70)
    }
}

#undef public_6f43d9d
#undef public_6f43da5
#undef public_6f43dcf
#undef public_6f43dd8
