#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_6390100);

#define public_6390132 _public_6390132
#define public_6390152 _public_6390152
#define public_6390164 _public_6390164
#define public_639017a _public_639017a
#define public_639017e _public_639017e
#define public_6390199 _public_6390199
#define public_63901ad _public_63901ad
#define public_63901bc _public_63901bc
#define public_63901cd _public_63901cd
#define public_63901d5 _public_63901d5
#define public_63901df _public_63901df

PROC_DECLARE(0x6390100, internal_6390100, public_6390100);
extern "C" NAKED register_t __cdecl internal_6390100()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        jl public_6390132
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fb294 @0x6390123*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb294
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6390132 : nop
        inc dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        lea edx, ds:[ebx+0x3C]
        mov dword ptr ss : [esp+0x18], edx
        je public_6390164
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6390164
        public_6390152 : nop
        mov esi, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], esi
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6390152
        public_6390164 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        test eax, eax
        je public_63901df
        mov esi, dword ptr ds : [eax+4]
        lea ebp, ds:[eax+4]
        add ebp, 4
        test esi, esi
        je public_63901df
        jmp public_639017e
        public_639017a : nop
        mov edx, dword ptr ss : [esp+0x18]
        public_639017e : nop
        mov eax, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [esi+0x48], eax
        jne public_63901bc
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 0x10
        je public_6390199
        push esi
        call public_638e540
        add esp, 4
        public_6390199 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp dword ptr ds : [eax+4], edi
        je public_63901ad
        push edi
        push eax
        call public_636e400
        add esp, 8
        jmp public_63901d5
        public_63901ad : nop
        push ebx
        push eax
        call public_636e400
        mov ecx, dword ptr ds : [esi+0x3C]
        push ebx
        push edi
        push ecx
        jmp public_63901cd
        public_63901bc : nop
        cmp esi, ebx
        je public_63901d5
        push esi
        push edx
        call public_636e1b0
        mov edx, dword ptr ds : [esi+0x3C]
        push ebx
        push edi
        push edx
        public_63901cd : nop
        call public_636ebb0
        add esp, 0x14
        public_63901d5 : nop
        mov esi, dword ptr ss : [ebp]
        add ebp, 4
        test esi, esi
        jne public_639017a
        public_63901df : nop
        mov eax, dword ptr ds : [edi+0x3C]
        push ebx
        push eax
        call public_636e400
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        push edi
        push edx
        call public_636e400
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6390100)
    }
}

#undef public_6390132
#undef public_6390152
#undef public_6390164
#undef public_639017a
#undef public_639017e
#undef public_6390199
#undef public_63901ad
#undef public_63901bc
#undef public_63901cd
#undef public_63901d5
#undef public_63901df
