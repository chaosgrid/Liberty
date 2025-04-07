#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_6373e90);
CLANG_FORWARD_PROC_SYMBOL(public_637ed40);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);

#define public_6373eb1 _public_6373eb1
#define public_6373ebf _public_6373ebf
#define public_6373edd _public_6373edd
#define public_6373efc _public_6373efc
#define public_6373f24 _public_6373f24
#define public_6373f2d _public_6373f2d
#define public_6373f3d _public_6373f3d

PROC_DECLARE(0x6373e90, internal_6373e90, public_6373e90);
extern "C" NAKED register_t __cdecl internal_6373e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        sub esp, 8
        cmp eax, 1
        jl public_6373eb1
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f100c @0x6373ea2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f100c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_6373eb1 : nop
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_658b810]
        test edi, edi
        je public_6373f3d
        public_6373ebf : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_6373f3d
        mov eax, dword ptr ds : [edi+0x40]
        test eax, eax
        lea ebp, ds:[edi+0x40]
        je public_6373f2d
        mov esi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test esi, esi
        je public_6373f2d
        public_6373edd : nop
        mov ecx, dword ptr ds : [public_658b84c]
        mov eax, dword ptr ds : [public_658b080]
        dec ecx
        test eax, eax
        mov dword ptr ds : [public_658b84c], ecx
        jne public_6373efc
        mov eax, dword ptr ds : [public_658b248]
        test eax, eax
        je public_6373f24
        public_6373efc : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        push esi
        call public_637fd60
        mov ecx, dword ptr ds : [public_658be50]
        lea edx, ss:[esp+0x1C]
        push edx
        inc ecx
        push edi
        push esi
        mov dword ptr ds : [public_658be50], ecx
        call public_637ed40
        add esp, 0x18
        public_6373f24 : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_6373edd
        public_6373f2d : nop
        push ebp
        call public_636e740
        mov edi, dword ptr ds : [edi+0x30]
        add esp, 4
        test edi, edi
        jne public_6373ebf
        public_6373f3d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6373e90)
    }
}

#undef public_6373eb1
#undef public_6373ebf
#undef public_6373edd
#undef public_6373efc
#undef public_6373f24
#undef public_6373f2d
#undef public_6373f3d
