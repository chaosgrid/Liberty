#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_636e510);
CLANG_FORWARD_PROC_SYMBOL(public_636e800);
CLANG_FORWARD_PROC_SYMBOL(public_63721e0);
CLANG_FORWARD_PROC_SYMBOL(public_638d240);
CLANG_FORWARD_PROC_SYMBOL(public_63910e0);

#define public_639111b _public_639111b
#define public_639113e _public_639113e
#define public_639115e _public_639115e
#define public_6391187 _public_6391187
#define public_6391193 _public_6391193
#define public_6391198 _public_6391198
#define public_63911b0 _public_63911b0

PROC_DECLARE(0x63910e0, internal_63910e0, public_63910e0);
extern "C" NAKED register_t __cdecl internal_63910e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        push edi
        push eax
        push ecx
        xor edi, edi
        call public_636e800
        mov edx, dword ptr ds : [esi]
        mov ebp, eax
        push ebp
        push edx
        call public_636e510
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        test eax, eax
        je public_639113e
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_639113e
        public_639111b : nop
        cmp eax, ebx
        je public_6391198
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [ebx+0x14]
        and eax, 0xFFFFFF
        and edx, 0xFFFFFF
        cmp eax, edx
        jb public_639113e
        mov eax, dword ptr ds : [ecx]
        inc edi
        add ecx, 4
        test eax, eax
        jne public_639111b
        public_639113e : nop
        push ebx
        push edi
        push esi
        call public_636e100
        mov eax, ebp
        sub eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        add esp, 0xC
        and eax, 0x80000001
        jns public_639115e
        dec eax
        or eax, 0xFFFFFFFE
        inc eax
        public_639115e : nop
        je public_6391193
        cmp dword ptr ds : [public_658b078], 3
        jl public_6391187
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [public_658b7fc]
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63fb770 @0x6391178*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb770
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6391187 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], eax
        public_6391193 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6391198 : nop
        inc dword ptr ds : [public_658bb38]
        test dword ptr ds : [esi+0xC], 0x4000000
        je public_63911b0
        push esi
        call public_638d240
        add esp, 4
        public_63911b0 : nop
        push esi
        call public_63721e0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 2
        jl public_6391193
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
        mov eax, dword ptr ds : [esi+0xC]
        and edx, 0xFFFFFF
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fb724 @0x63911e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb724
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63910e0)
    }
}

#undef public_639111b
#undef public_639113e
#undef public_639115e
#undef public_6391187
#undef public_6391193
#undef public_6391198
#undef public_63911b0
