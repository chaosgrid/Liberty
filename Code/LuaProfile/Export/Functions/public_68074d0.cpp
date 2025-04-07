#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68074d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807560);
CLANG_FORWARD_PROC_SYMBOL(public_6807600);
CLANG_FORWARD_PROC_SYMBOL(public_680a800);

#define public_68074e7 _public_68074e7
#define public_68074ea _public_68074ea
#define public_680750d _public_680750d
#define public_6807515 _public_6807515
#define public_6807535 _public_6807535
#define public_680753c _public_680753c

PROC_DECLARE(0x68074d0, internal_68074d0, public_68074d0);
extern "C" NAKED register_t __cdecl internal_68074d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push edi
        je public_68074e7
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax+4]
        jmp public_68074ea
        public_68074e7 : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_68074ea : nop
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        call public_6807600
        add esp, 8
        test eax, eax
        jl public_680750d
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop ebp
        mov dword ptr ds : [ecx], 1
        mov dword ptr ds : [ecx+4], eax
        pop ebx
        ret 
        public_680750d : nop
        push esi
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_680753c
        public_6807515 : nop
        push edi
        push esi
        call public_6807600
        add esp, 8
        test eax, eax
        jl public_6807535
        lea ecx, ds:[edi+0x28]
        push ecx
/*FIXUP push offset public_680dbd0 @0x6807527*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dbd0
        push ebp
        call public_680a800
        add esp, 0xC
        public_6807535 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6807515
        public_680753c : nop
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        push ebx
        mov dword ptr ds : [esi], 0
        call public_6807560
        add esp, 8
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68074d0)
    }
}

#undef public_68074e7
#undef public_68074ea
#undef public_680750d
#undef public_6807515
#undef public_6807535
#undef public_680753c
