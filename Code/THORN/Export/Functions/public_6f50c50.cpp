#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f50ca2 _public_6f50ca2
#define public_6f50cbb _public_6f50cbb
#define public_6f50cd4 _public_6f50cd4

PROC_DECLARE(0x6f50c50, internal_6f50c50, public_6f50c50);
extern "C" NAKED register_t __cdecl internal_6f50c50()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        push 1
        call public_6f505e0
        mov edi, eax
        push edi
        call public_6f50550
        call public_6f57f16
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        fild dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        push 2
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        test ebx, ebx
        mov esi, eax
        jle public_6f50cd4
        push esi
        push edi
        call public_6f4e820
        push eax
        call public_6f4b8b0
        add esp, 0xC
        cmp esi, ebx
        jge public_6f50cbb
        push ebp
        lea ebp, ds:[esi+1]
        public_6f50ca2 : nop
        push ebp
        push edi
        call public_6f4e820
        push eax
        push esi
        push edi
        call public_6f4e7f0
        add esp, 0x14
        inc esi
        inc ebp
        cmp esi, ebx
        jl public_6f50ca2
        pop ebp
        public_6f50cbb : nop
        lea eax, ds:[ebx-1]
        push eax
        push edi
        call public_6f4cea0
/*FIXUP push offset public_6f60a08 @0x6f50cc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60a08
        push ebx
        push edi
        call public_6f4e7f0
        add esp, 0x14
        public_6f50cd4 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f50c50)
    }
}

#undef public_6f50ca2
#undef public_6f50cbb
#undef public_6f50cd4
