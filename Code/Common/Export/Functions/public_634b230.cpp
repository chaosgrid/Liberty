#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345e40);
CLANG_FORWARD_PROC_SYMBOL(public_634b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_634b230);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_634b268 _public_634b268
#define public_634b295 _public_634b295
#define public_634b29b _public_634b29b
#define public_634b2bc _public_634b2bc
#define public_634b2ea _public_634b2ea
#define public_634b2f0 _public_634b2f0

PROC_DECLARE(0x634b230, internal_634b230, public_634b230);
extern "C" NAKED register_t __cdecl internal_634b230()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, eax
        cmp ecx, dword ptr ss : [ebp]
        jl public_634b2f0
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ds : [edx+0xAC]
        fimul dword ptr ss : [ebp+4]
        call public_6391dae
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jl public_634b29b
        public_634b268 : nop
        mov edi, dword ptr ds : [esi+0x10]
        push edi
        mov ecx, esi
        call public_634b1a0
        test edi, edi
        mov dword ptr ds : [esi+0x10], eax
        je public_634b2f0
        mov ecx, edi
        call public_6345e40
        test eax, eax
        jne public_634b295
        mov eax, dword ptr ds : [ebx]
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, dword ptr ss : [ebp]
        jl public_634b2f0
        public_634b295 : nop
        dec dword ptr ss : [esp+0x14]
        jns public_634b268
        public_634b29b : nop
        mov edx, dword ptr ds : [esi+0x14]
        cmp edx, dword ptr ss : [ebp+8]
        jl public_634b2f0
        mov eax, dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+0xAC]
        fimul dword ptr ss : [ebp+0xC]
        call public_6391dae
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jl public_634b2f0
        public_634b2bc : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        je public_634b2f0
        push edi
        mov ecx, esi
        call public_634b1a0
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call public_6345e40
        cmp eax, 1
        jne public_634b2ea
        mov edx, dword ptr ds : [ebx]
        push edi
        mov ecx, ebx
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, dword ptr ss : [ebp+8]
        jl public_634b2f0
        public_634b2ea : nop
        dec dword ptr ss : [esp+0x14]
        jns public_634b2bc
        public_634b2f0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634b230)
    }
}

#undef public_634b268
#undef public_634b295
#undef public_634b29b
#undef public_634b2bc
#undef public_634b2ea
#undef public_634b2f0
