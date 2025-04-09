#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);

#define public_41d600 _public_41d600
#define public_41d61c _public_41d61c

PROC_DECLARE(0x41d5b0, internal_41d5b0, public_41d5b0);
extern "C" NAKED register_t __cdecl internal_41d5b0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_67eca8]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, ebx
        push edi
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push ebp
        push edx
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_41d600
        push ebp
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41d5e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41d5f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_41d600 : nop
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[edi+edi]
        add edx, ecx
        mov eax, edx
        cmp ebx, eax
        mov dword ptr ds : [esi], edx
        jne public_41d61c
        add eax, 0xFFFFFFFE
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [eax], 0
        add dword ptr ds : [esi], 2
        public_41d61c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x41d5b0)
    }
}

#undef public_41d600
#undef public_41d61c
