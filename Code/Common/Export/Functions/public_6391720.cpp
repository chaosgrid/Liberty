#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6391400);
CLANG_FORWARD_PROC_SYMBOL(public_6391720);

#define public_6391746 _public_6391746
#define public_6391754 _public_6391754
#define public_6391765 _public_6391765
#define public_6391776 _public_6391776
#define public_6391789 _public_6391789
#define public_63917ba _public_63917ba
#define public_63917cc _public_63917cc
#define public_63917df _public_63917df
#define public_63917f2 _public_63917f2
#define public_6391814 _public_6391814
#define public_639181d _public_639181d
#define public_639182a _public_639182a
#define public_6391835 _public_6391835
#define public_6391866 _public_6391866

PROC_DECLARE(0x6391720, internal_6391720, public_6391720);
extern "C" NAKED register_t __cdecl internal_6391720()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b078]
        push esi
        xor esi, esi
        cmp eax, 1
        mov dword ptr ss : [esp+4], esi
        jl public_6391746
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fb99c @0x6391737*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb99c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6391746 : nop
        mov eax, dword ptr ds : [public_658b670]
        test eax, eax
        jne public_6391754
        call public_6374610
        public_6391754 : nop
        mov eax, dword ptr ds : [public_658b81c]
        test eax, eax
        push ebx
        push ebp
        push edi
        je public_6391776
        mov ecx, 0xFFFFDFFF
        public_6391765 : nop
        mov edx, dword ptr ds : [eax+0x30]
        test edx, edx
        je public_6391776
        and dword ptr ds : [eax+0x50], ecx
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_6391765
        public_6391776 : nop
        mov edi, dword ptr ds : [public_658b81c]
        test edi, edi
        je public_6391835
        mov ebp, 0x2000
        public_6391789 : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_6391835
        or dword ptr ds : [edi+0x50], ebp
        mov ecx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [edi+0x48], ecx
        inc dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        je public_63917cc
        mov edx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edx, edx
        je public_63917cc
        public_63917ba : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [edi+0x48], ecx
        mov edx, dword ptr ds : [eax]
        add eax, 4
        test edx, edx
        jne public_63917ba
        public_63917cc : nop
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        je public_639182a
        lea ebx, ds:[eax+4]
        mov eax, dword ptr ds : [ebx]
        add ebx, 4
        test eax, eax
        je public_639182a
        public_63917df : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_639181d
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_639181d
        public_63917f2 : nop
        test dword ptr ds : [eax+0x50], ebp
        jne public_6391814
        mov ecx, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [eax+0x48], ecx
        je public_6391814
        push eax
        push edi
        call public_6391400
        add esp, 8
        test eax, eax
        je public_6391814
        inc dword ptr ss : [esp+0x10]
        public_6391814 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_63917f2
        public_639181d : nop
        mov eax, dword ptr ds : [ebx]
        add ebx, 4
        test eax, eax
        jne public_63917df
        mov esi, dword ptr ss : [esp+0x10]
        public_639182a : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_6391789
        public_6391835 : nop
        mov ecx, dword ptr ds : [public_658bf40]
        mov eax, dword ptr ds : [public_658b078]
        pop edi
        add ecx, esi
        cmp eax, 1
        pop ebp
        mov dword ptr ds : [public_658bf40], ecx
        pop ebx
        jl public_6391866
        mov edx, dword ptr ds : [public_658b7fc]
        push esi
/*FIXUP push offset public_63fb960 @0x6391857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb960
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6391866 : nop
        xor eax, eax
        test esi, esi
        setg al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6391720)
    }
}

#undef public_6391746
#undef public_6391754
#undef public_6391765
#undef public_6391776
#undef public_6391789
#undef public_63917ba
#undef public_63917cc
#undef public_63917df
#undef public_63917f2
#undef public_6391814
#undef public_639181d
#undef public_639182a
#undef public_6391835
#undef public_6391866
