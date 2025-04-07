#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2af0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2d90);
CLANG_FORWARD_PROC_SYMBOL(public_62c4900);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);

#define public_62c3b8b _public_62c3b8b
#define public_62c3bd4 _public_62c3bd4
#define public_62c3bd6 _public_62c3bd6
#define public_62c3c1b _public_62c3c1b
#define public_62c3c22 _public_62c3c22
#define public_62c3c31 _public_62c3c31
#define public_62c3c33 _public_62c3c33
#define public_62c3c9c _public_62c3c9c
#define public_62c3cab _public_62c3cab
#define public_62c3cad _public_62c3cad
#define public_62c3cd2 _public_62c3cd2
#define public_62c3cd4 _public_62c3cd4
#define public_62c3cf5 _public_62c3cf5

PROC_DECLARE(0x62c3b70, internal_62c3b70, public_62c3b70);
extern "C" NAKED register_t __cdecl internal_62c3b70()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x28], 1
        push edi
        je public_62c3b8b
        mov eax, 2
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x10
        ret 
        public_62c3b8b : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_62c3cf5
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c3cf5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c3cf5
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62c3c22
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        jns public_62c3c22
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c3bd4
        lea ecx, ds:[eax-8]
        jmp public_62c3bd6
        public_62c3bd4 : nop
        xor ecx, ecx
        public_62c3bd6 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ss : [esp+0xC], 0x3F800000
        call dword ptr ds : [edx+0x40]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_62c3c1b
        mov al, byte ptr ds : [esi+0x39B]
        test al, al
        jne public_62c3c22
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        push 0
        mov byte ptr ds : [esi+0x39B], 1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x6C]
        jmp public_62c3c22
        public_62c3c1b : nop
        mov byte ptr ds : [esi+0x39B], 0
        public_62c3c22 : nop
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c3c31
        lea ecx, ds:[eax-8]
        jmp public_62c3c33
        public_62c3c31 : nop
        xor ecx, ecx
        public_62c3c33 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_639f484]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62c3c9c
        mov eax, dword ptr ds : [esi+0xA8]
        lea ecx, ds:[esi+0xA8]
        call dword ptr ds : [eax+0x10]
        lea edi, ds:[esi+0x30]
        push 0
        mov ecx, edi
        call public_62d88b0
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], 1
        mov eax, 1
        pop esi
        add esp, 0x10
        ret 
        public_62c3c9c : nop
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c3cab
        lea ecx, ds:[eax-8]
        jmp public_62c3cad
        public_62c3cab : nop
        xor ecx, ecx
        public_62c3cad : nop
        mov eax, dword ptr ds : [ecx]
        lea edi, ds:[esi+0x450]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        push ecx
        mov ecx, edi
        call public_62c2af0
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c3cd2
        lea ecx, ds:[eax-8]
        jmp public_62c3cd4
        public_62c3cd2 : nop
        xor ecx, ecx
        public_62c3cd4 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        push ecx
        mov ecx, edi
        call public_62c2d90
        mov ecx, esi
        call public_62c4900
        pop edi
        pop esi
        add esp, 0x10
        ret 
        public_62c3cf5 : nop
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62c3b70)
    }
}

#undef public_62c3b8b
#undef public_62c3bd4
#undef public_62c3bd6
#undef public_62c3c1b
#undef public_62c3c22
#undef public_62c3c31
#undef public_62c3c33
#undef public_62c3c9c
#undef public_62c3cab
#undef public_62c3cad
#undef public_62c3cd2
#undef public_62c3cd4
#undef public_62c3cf5
