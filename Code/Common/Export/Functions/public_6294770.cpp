#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6294770);
CLANG_FORWARD_PROC_SYMBOL(public_629aed0);

#define public_6294788 _public_6294788
#define public_62947bc _public_62947bc
#define public_62947ef _public_62947ef
#define public_6294819 _public_6294819
#define public_629481f _public_629481f
#define public_629483f _public_629483f
#define public_629484b _public_629484b

PROC_DECLARE(0x6294770, internal_6294770, public_6294770);
extern "C" NAKED register_t __cdecl internal_6294770()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp al, cl
        jne public_6294788
        mov al, cl
        pop esi
        pop ecx
        ret 4
        public_6294788 : nop
        push ebx
        push ecx
        mov ecx, esi
        call public_629aed0
        mov cl, byte ptr ds : [esi+0x50]
        mov bl, byte ptr ds : [esi+0x10]
        cmp cl, bl
        mov byte ptr ss : [esp+0x10], al
        je public_629484b
        cmp cl, byte ptr ds : [esi+0x51]
        jne public_62947bc
        mov al, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x50], bl
        pop ebx
        mov dword ptr ds : [esi+0x4C], 0
        pop esi
        pop ecx
        ret 4
        public_62947bc : nop
        test cl, cl
        mov edx, dword ptr ds : [esi+0xC]
        je public_62947ef
        mov eax, dword ptr ds : [edx+0x90]
        fld dword ptr ds : [public_639a1d0]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_629481f
        fstp st(0)
        fld dword ptr ds : [esi+0x4C]
        fdiv dword ptr ss : [esp+8]
        jmp public_629481f
        public_62947ef : nop
        mov eax, dword ptr ds : [edx+0x8C]
        fld dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_6294819
        fstp st(0)
        fld dword ptr ds : [esi+0x4C]
        fdiv dword ptr ss : [esp+8]
        public_6294819 : nop
        fsubr qword ptr ds : [public_6399410]
        public_629481f : nop
        test cl, cl
        je public_629483f
        fsubr qword ptr ds : [public_6399410]
        mov al, byte ptr ss : [esp+0x10]
        fmul dword ptr ds : [edx+0x8C]
        mov byte ptr ds : [esi+0x50], bl
        pop ebx
        fstp dword ptr ds : [esi+0x4C]
        pop esi
        pop ecx
        ret 4
        public_629483f : nop
        fmul dword ptr ds : [edx+0x90]
        mov byte ptr ds : [esi+0x50], bl
        fstp dword ptr ds : [esi+0x4C]
        public_629484b : nop
        mov al, byte ptr ss : [esp+0x10]
        pop ebx
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6294770)
    }
}

#undef public_6294788
#undef public_62947bc
#undef public_62947ef
#undef public_6294819
#undef public_629481f
#undef public_629483f
#undef public_629484b
