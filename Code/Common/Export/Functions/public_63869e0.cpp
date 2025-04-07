#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ed80);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_63869e0);

#define public_6386a0d _public_6386a0d
#define public_6386a55 _public_6386a55
#define public_6386a69 _public_6386a69
#define public_6386a85 _public_6386a85
#define public_6386a9f _public_6386a9f
#define public_6386aa3 _public_6386aa3
#define public_6386acc _public_6386acc
#define public_6386ae2 _public_6386ae2

PROC_DECLARE(0x63869e0, internal_63869e0, public_63869e0);
extern "C" NAKED register_t __cdecl internal_63869e0()
{
    __asm
    {
        push ecx
        cmp dword ptr ds : [public_658b078], 4
        jl public_6386a0d
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [public_658b7fc]
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63f7bf8 @0x63869fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7bf8
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6386a0d : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        push ebx
        push ebp
        lea ebp, ds:[eax+0xC]
        push ecx
        call public_636ec10
        push eax
        call public_636ec70
        mov edx, dword ptr ss : [ebp]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_636e460
        mov ebx, eax
        lea eax, ss:[esp+0x14]
        push ebx
        push eax
        call public_636e1b0
        mov ecx, dword ptr ss : [ebp]
        push ecx
        call public_636ec10
        add esp, 0x18
        test eax, eax
        je public_6386ae2
        push esi
        push edi
        public_6386a55 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_6386aa3
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6386aa3
        public_6386a69 : nop
        mov edx, dword ptr ds : [ebx+0x3C]
        push esi
        push edx
        call public_636e7d0
        add esp, 8
        test eax, eax
        jne public_6386a85
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6386a69
        jmp public_6386a9f
        public_6386a85 : nop
        mov eax, dword ptr ss : [ebp]
        push esi
        push eax
        call public_636e400
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        call public_636e1b0
        add esp, 0x10
        mov ebx, esi
        public_6386a9f : nop
        test esi, esi
        jne public_6386acc
        public_6386aa3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [eax+0x14]
        push edx
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63f7ba8 @0x6386ab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7ba8
        call public_6356960
        push 0
        push ebx
        push 5
        call public_6378600
        add esp, 0x18
        public_6386acc : nop
        mov edx, dword ptr ss : [ebp]
        push edx
        call public_636ec10
        add esp, 4
        test eax, eax
        jne public_6386a55
        pop edi
        pop esi
        public_6386ae2 : nop
        push ebp
        call public_636e740
        add esp, 4
        call public_636ed80
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [ebp], eax
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x63869e0)
    }
}

#undef public_6386a0d
#undef public_6386a55
#undef public_6386a69
#undef public_6386a85
#undef public_6386a9f
#undef public_6386aa3
#undef public_6386acc
#undef public_6386ae2
