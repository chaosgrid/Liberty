#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af80);
CLANG_FORWARD_PROC_SYMBOL(public_6f4afc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f5047c _public_6f5047c
#define public_6f5048b _public_6f5048b
#define public_6f504c8 _public_6f504c8
#define public_6f504e9 _public_6f504e9
#define public_6f5050a _public_6f5050a
#define public_6f5051c _public_6f5051c
#define public_6f50539 _public_6f50539

PROC_DECLARE(0x6f50420, internal_6f50420, public_6f50420);
extern "C" NAKED register_t __cdecl internal_6f50420()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f4f730
        push 2
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f505e0
        push 0
/*FIXUP push offset public_6f61e0c @0x6f5043b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61e0c
        push 3
        mov ebx, eax
        call public_6f4f630
        mov esi, eax
        push 4
        mov dword ptr ss : [esp+0x28], esi
        call public_6f4b090
        push ebx
        mov ebp, eax
        call public_6f50550
        add esp, 0x1C
        call public_6f57f16
        test ebp, ebp
        mov edi, eax
        je public_6f5047c
        push ebp
        call public_6f4b900
        add esp, 4
        call public_6f4b220
        mov ebp, eax
        public_6f5047c : nop
        push edi
        call public_6f4c260
        add esp, 4
        xor eax, eax
        test edi, edi
        jle public_6f504c8
        public_6f5048b : nop
        lea esi, ds:[eax+1]
        push esi
        push ebx
        call public_6f4e820
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [eax], 0x10
        mov eax, esi
        add esp, 8
        cmp eax, edi
        jl public_6f5048b
        mov esi, dword ptr ss : [esp+0x10]
        public_6f504c8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6f4b0b0
        add esp, 4
        test ebp, ebp
        mov edi, eax
        je public_6f504e9
        push ebp
        call public_6f4b900
        add esp, 4
        call public_6f4b220
        public_6f504e9 : nop
        test edi, edi
        je public_6f5051c
        push 0x78
        push esi
        call dword ptr ds : [public_6f5a0d0]
        add esp, 8
        test eax, eax
        je public_6f5050a
        call public_6f4b6c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f5050a : nop
        push 0
        call public_6f4c7f0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f5051c : nop
        push 0x70
        push esi
        call dword ptr ds : [public_6f5a0d0]
        add esp, 8
        test eax, eax
        je public_6f50539
        call public_6f4af80
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f50539 : nop
        call public_6f4afc0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f50420)
    }
}

#undef public_6f5047c
#undef public_6f5048b
#undef public_6f504c8
#undef public_6f504e9
#undef public_6f5050a
#undef public_6f5051c
#undef public_6f50539
