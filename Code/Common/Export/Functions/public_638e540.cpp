#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_63704b0);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);

#define public_638e584 _public_638e584
#define public_638e5a7 _public_638e5a7
#define public_638e5b6 _public_638e5b6
#define public_638e5b9 _public_638e5b9
#define public_638e5c1 _public_638e5c1
#define public_638e5d3 _public_638e5d3
#define public_638e5df _public_638e5df
#define public_638e5e1 _public_638e5e1
#define public_638e5f0 _public_638e5f0
#define public_638e617 _public_638e617
#define public_638e65d _public_638e65d
#define public_638e663 _public_638e663
#define public_638e67e _public_638e67e
#define public_638e695 _public_638e695
#define public_638e6b1 _public_638e6b1
#define public_638e6c3 _public_638e6c3

PROC_DECLARE(0x638e540, internal_638e540, public_638e540);
extern "C" NAKED register_t __cdecl internal_638e540()
{
    __asm
    {
        sub esp, 8
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x50]
        xor ebp, ebp
        test ah, 0x10
        mov dword ptr ss : [esp+8], ebp
        je public_638e6c3
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        push esi
        mov esi, 4
        cmp eax, esi
        jl public_638e584
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63fa808 @0x638e575*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa808
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638e584 : nop
        mov edx, dword ptr ds : [edi+0x50]
        mov eax, dword ptr ds : [edi+0x3C]
        and edx, 0xFFFFEFFF
        cmp eax, ebp
        mov dword ptr ds : [edi+0x50], edx
        je public_638e5c1
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, esi
        cmp eax, ebp
        je public_638e5c1
        mov edx, 0xFFFFDFFF
        public_638e5a7 : nop
        cmp eax, 2
        jne public_638e5b6
        mov dword ptr ss : [esp+0x10], 1
        jmp public_638e5b9
        public_638e5b6 : nop
        and dword ptr ds : [eax+0x50], edx
        public_638e5b9 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, esi
        cmp eax, ebp
        jne public_638e5a7
        public_638e5c1 : nop
        mov eax, dword ptr ds : [edi+0x38]
        cmp eax, ebp
        je public_638e5f0
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, esi
        cmp eax, ebp
        je public_638e5f0
        public_638e5d3 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, edi
        jne public_638e5df
        mov eax, dword ptr ds : [eax+8]
        jmp public_638e5e1
        public_638e5df : nop
        mov eax, edx
        public_638e5e1 : nop
        or dword ptr ds : [eax+0x50], 0x2000
        mov eax, dword ptr ds : [ecx]
        add ecx, esi
        cmp eax, ebp
        jne public_638e5d3
        public_638e5f0 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        cmp eax, ebp
        je public_638e695
        mov ebx, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_638e695
        mov dword ptr ss : [esp+0x1C], esi
        public_638e617 : nop
        cmp ebx, 2
        je public_638e67e
        mov ecx, dword ptr ds : [ebx+0x50]
        test ch, 0x20
        jne public_638e67e
        call public_63704b0
        mov edx, dword ptr ds : [public_658b24c]
        push 0
        push ebp
        mov esi, eax
        mov eax, dword ptr ds : [edi+0x34]
        push edx
        push eax
        call public_636e9c0
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+0x50]
        shr ecx, 0xB
        mov edx, ebp
        and ecx, 1
        and edx, 1
        add esp, 0x10
        xor ecx, edx
        je public_638e65d
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], ebx
        jmp public_638e663
        public_638e65d : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], edi
        public_638e663 : nop
        lea eax, ds:[edi+0x38]
        push esi
        push eax
        call public_636e1b0
        push esi
        add ebx, 0x38
        push ebx
        call public_636e1b0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        public_638e67e : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi+0x3C]
        mov ebx, dword ptr ds : [edx+ecx+4]
        add ecx, 4
        inc ebp
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_638e617
        public_638e695 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        pop esi
        pop ebx
        je public_638e6c3
        mov eax, dword ptr ds : [edi+0x3C]
        push 2
        push eax
        call public_636e400
        add esp, 8
        test eax, eax
        je public_638e6c3
        public_638e6b1 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        push 2
        push ecx
        call public_636e400
        add esp, 8
        test eax, eax
        jne public_638e6b1
        public_638e6c3 : nop
        pop edi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x638e540)
    }
}

#undef public_638e584
#undef public_638e5a7
#undef public_638e5b6
#undef public_638e5b9
#undef public_638e5c1
#undef public_638e5d3
#undef public_638e5df
#undef public_638e5e1
#undef public_638e5f0
#undef public_638e617
#undef public_638e65d
#undef public_638e663
#undef public_638e67e
#undef public_638e695
#undef public_638e6b1
#undef public_638e6c3
