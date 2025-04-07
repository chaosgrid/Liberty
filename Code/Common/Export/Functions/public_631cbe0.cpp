#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6278230);
CLANG_FORWARD_PROC_SYMBOL(public_62782b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279d70);
CLANG_FORWARD_PROC_SYMBOL(public_631cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631cbf4 _public_631cbf4
#define public_631cc17 _public_631cc17
#define public_631cc40 _public_631cc40
#define public_631cc5d _public_631cc5d
#define public_631cc61 _public_631cc61
#define public_631cc81 _public_631cc81

PROC_DECLARE(0x631cbe0, internal_631cbe0, public_631cbe0);
extern "C" NAKED register_t __cdecl internal_631cbe0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, offset public_640176c
        mov dword ptr ss : [esp+0x14], 7
        public_631cbf4 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        mov eax, dword ptr ds : [esi]
        lea ebx, ss:[ebp-4]
        mov dword ptr ss : [esp+0x10], eax
        je public_631cc5d
        mov ecx, eax
        cmp eax, ecx
        jne public_631cc5d
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ss : [ebp+4]
        mov esi, edi
        je public_631cc40
        public_631cc17 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6278230
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_6279d70
        push edi
        call public_6391d5a
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_631cc17
        public_631cc40 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+0x10], 0
        mov dword ptr ds : [eax], eax
        mov ebx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebx
        jmp public_631cc81
        public_631cc5d : nop
        cmp eax, esi
        je public_631cc81
        public_631cc61 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_62782b0
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_6277dd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jne public_631cc61
        public_631cc81 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x14
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_631cbf4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x631cbe0)
    }
}

#undef public_631cbf4
#undef public_631cc17
#undef public_631cc40
#undef public_631cc5d
#undef public_631cc61
#undef public_631cc81
