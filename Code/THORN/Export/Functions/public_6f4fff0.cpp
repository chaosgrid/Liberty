#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f50042 _public_6f50042
#define public_6f5005b _public_6f5005b
#define public_6f5006a _public_6f5006a
#define public_6f5008c _public_6f5008c
#define public_6f500a9 _public_6f500a9
#define public_6f500bc _public_6f500bc
#define public_6f500c7 _public_6f500c7
#define public_6f500cc _public_6f500cc
#define public_6f500d6 _public_6f500d6

PROC_DECLARE(0x6f4fff0, internal_6f4fff0, public_6f4fff0);
extern "C" NAKED register_t __cdecl internal_6f4fff0()
{
    __asm
    {
        sub esp, 8
        push esi
        push 0x40240000
        push 0
        push 2
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        mov esi, eax
        cmp esi, 0xA
        jne public_6f50042
        push 1
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b4c0
        add esp, 8
        test eax, eax
        je public_6f500cc
        push esi
        call public_6f4b540
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop esi
        add esp, 8
        ret 
        public_6f50042 : nop
        push 0
        push 1
        call public_6f4f5e0
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+4], eax
        jl public_6f5005b
        cmp esi, 0x24
        jle public_6f5006a
/*FIXUP public_6f5005b : nop
        push offset public_6f60d94 @0x6f5005b*/
  FIXUP public_6f5005b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d94
        push 2
        call public_6f4f570
        add esp, 8
        public_6f5006a : nop
        mov ecx, dword ptr ss : [esp+4]
        push esi
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_6f5a0e0]
        mov esi, dword ptr ds : [public_6f5a0c4]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 0xC
        mov dword ptr ss : [esp+8], eax
        public_6f5008c : nop
        mov edx, dword ptr ds : [public_6f5a0c0]
        cmp dword ptr ds : [edx], 1
        jle public_6f500a9
        xor eax, eax
        mov al, byte ptr ds : [ecx]
        push 8
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 8
        jmp public_6f500bc
        public_6f500a9 : nop
        xor edx, edx
        mov dl, byte ptr ds : [ecx]
        xor eax, eax
        mov eax, dword ptr ds : [public_6f5a0bc]
        mov eax, dword ptr ds : [eax]
        mov al, byte ptr ds : [eax+edx*2]
        and eax, 8
        public_6f500bc : nop
        test eax, eax
        je public_6f500c7
        inc ecx
        mov dword ptr ss : [esp+4], ecx
        jmp public_6f5008c
        public_6f500c7 : nop
        cmp byte ptr ds : [ecx], 0
        je public_6f500d6
        public_6f500cc : nop
        call public_6f4b6c0
        pop esi
        add esp, 8
        ret 
        public_6f500d6 : nop
        fild dword ptr ss : [esp+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4fff0)
    }
}

#undef public_6f50042
#undef public_6f5005b
#undef public_6f5006a
#undef public_6f5008c
#undef public_6f500a9
#undef public_6f500bc
#undef public_6f500c7
#undef public_6f500cc
#undef public_6f500d6
