#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e200);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_636f890);
CLANG_FORWARD_PROC_SYMBOL(public_636f970);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);

#define public_636f99d _public_636f99d
#define public_636f9b5 _public_636f9b5
#define public_636f9b7 _public_636f9b7
#define public_636fa14 _public_636fa14
#define public_636fa82 _public_636fa82
#define public_636fa8e _public_636fa8e
#define public_636fab5 _public_636fab5
#define public_636fae5 _public_636fae5
#define public_636faf4 _public_636faf4
#define public_636fb06 _public_636fb06
#define public_636fb2b _public_636fb2b
#define public_636fb40 _public_636fb40
#define public_636fb43 _public_636fb43
#define public_636fb7b _public_636fb7b
#define public_636fba2 _public_636fba2
#define public_636fbb5 _public_636fbb5

PROC_DECLARE(0x636f970, internal_636f970, public_636f970);
extern "C" NAKED register_t __cdecl internal_636f970()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x38]
        sub esp, 0xC
        push ebx
        xor ebx, ebx
        test eax, eax
        push edi
        je public_636fba2
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_636fba2
        push ebp
        push esi
        public_636f99d : nop
        mov eax, dword ptr ds : [edi+0xC]
        and eax, 0xFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_636f9b5
        mov esi, dword ptr ds : [edi+8]
        jmp public_636f9b7
        public_636f9b5 : nop
        mov esi, eax
        public_636f9b7 : nop
        mov edx, dword ptr ds : [esi+0x50]
        test dh, 4
        je public_636fa14
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        jne public_636fb7b
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, dword ptr ds : [public_658b8e0]
        jne public_636fb7b
        push edi
        call public_636e740
        add esp, 4
        test edi, edi
        je public_636fb7b
        mov eax, dword ptr ds : [public_658b9ac]
        mov ecx, dword ptr ds : [public_658b980]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        mov edx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [public_658b978]
        mov ecx, dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [eax], edi
        jmp public_636fb7b
        public_636fa14 : nop
        xor edx, edx
        cmp eax, ecx
        mov eax, dword ptr ds : [public_658b24c]
        sete dl
        push eax
        mov ebp, edx
        call public_636e920
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_636e1b0
        mov eax, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_636e200
        mov edx, dword ptr ss : [esp+0x24]
        push esi
        push ebp
        push edx
        call public_636f890
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x20
        inc ecx
        mov dword ptr ds : [eax], ecx
        test dword ptr ds : [esi+0x50], 0x800000
        je public_636fa8e
        or dword ptr ds : [ebx+0x50], 0x1000000
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x20
        jne public_636fa82
        mov dword ptr ds : [ebx+0x20], ebx
        mov dword ptr ds : [esi+0x20], ebx
        jmp public_636fa8e
        public_636fa82 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [ebx+0x20], ecx
        mov dword ptr ds : [eax+0x20], ebx
        public_636fa8e : nop
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        mov eax, dword ptr ds : [esi+0x50]
        je public_636fab5
        test ah, 0x10
        jne public_636fb7b
        lea edx, ds:[ebx+0x38]
        push edi
        push edx
        call public_636e1b0
        add esp, 8
        jmp public_636fb7b
        public_636fab5 : nop
        test ah, 0x20
        je public_636faf4
        test ah, 0x10
        je public_636fae5
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x4C]
        mov edx, dword ptr ds : [esi+0x4C]
        push ecx
        push edx
/*FIXUP push offset public_63eefdc @0x636facb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eefdc
        call public_6356960
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push esi
        push 5
        call public_637e2e0
        add esp, 0x18
        public_636fae5 : nop
        lea ecx, ds:[esi+0x3C]
        push ebx
        push ecx
        call public_636e1b0
        add esp, 8
        jmp public_636fb06
        public_636faf4 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x3C]
        push ebx
        push edx
        push eax
        call public_636ebb0
        add esp, 0xC
        public_636fb06 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x10
        push edi
        je public_636fb2b
        mov ecx, dword ptr ds : [esi+0x38]
        push ecx
        call public_636e400
        push edi
        call public_636e740
        push 0x10
        push edi
        call public_6377fe0
        add esp, 0x14
        jmp public_636fb43
        public_636fb2b : nop
        lea edx, ds:[ebx+0x38]
        push edx
        call public_636e1b0
        add esp, 8
        test ebp, ebp
        je public_636fb40
        mov dword ptr ds : [edi+4], ebx
        jmp public_636fb43
        public_636fb40 : nop
        mov dword ptr ds : [edi+8], ebx
        public_636fb43 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_636fb7b
        mov eax, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x4C]
        and eax, 0xFFFFFF
        push eax
        push ecx
/*FIXUP push offset public_63eef8c @0x636fb6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eef8c
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_636fb7b : nop
        mov edx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        or edx, 0x2000
        mov dword ptr ds : [esi+0x50], edx
        mov edi, dword ptr ds : [eax]
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        jne public_636f99d
        pop esi
        pop ebp
        public_636fba2 : nop
        mov eax, dword ptr ds : [public_658b0d8]
        test eax, eax
        jne public_636fbb5
        mov eax, dword ptr ds : [ecx+0x38]
        mov dword ptr ds : [eax+4], 0
        public_636fbb5 : nop
        pop edi
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x636f970)
    }
}

#undef public_636f99d
#undef public_636f9b5
#undef public_636f9b7
#undef public_636fa14
#undef public_636fa82
#undef public_636fa8e
#undef public_636fab5
#undef public_636fae5
#undef public_636faf4
#undef public_636fb06
#undef public_636fb2b
#undef public_636fb40
#undef public_636fb43
#undef public_636fb7b
#undef public_636fba2
#undef public_636fbb5
