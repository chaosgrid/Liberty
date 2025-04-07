#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6235690);

#define public_6232bf5 _public_6232bf5
#define public_6232c8f _public_6232c8f

PROC_DECLARE(0x6232bc0, internal_6232bc0, public_6232bc0);
extern "C" NAKED register_t __cdecl internal_6232bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257b24]
        push ebx
        push esi
        push edi
        test eax, eax
        jne public_6232bf5
        mov eax, dword ptr ds : [public_6257b28]
        mov edi, dword ptr ds : [public_6257b18]
        sub eax, edi
        mov edx, dword ptr ds : [public_6257b14]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257b1c]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_6235690
        public_6232bf5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov ecx, 6
        sub esp, 0x18
        mov esi, ebx
        mov edi, esp
        rep movsd
        mov esi, dword ptr ss : [esp+0x30]
        push esi
        lea ecx, ds:[esi+0xD8]
        call public_6234ab0
        fld dword ptr ds : [ebx+0xC]
        fsub dword ptr ds : [public_624bac4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb68]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_6232c8f
        fld dword ptr ds : [ebx+0x10]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb68]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_6232c8f
        fld dword ptr ds : [ebx+0x14]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb68]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_6232c8f
        mov eax, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [eax+0x30], 0
        add eax, 0x30
        mov dword ptr ds : [eax+8], 0x3F800000
        mov dword ptr ds : [eax+4], 0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret 0x10
        public_6232c8f : nop
        mov eax, dword ptr ds : [esi+0xDC]
        mov dword ptr ds : [eax+0x30], 0x3F800000
        add eax, 0x30
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+4], 0
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6232bc0)
    }
}

#undef public_6232bf5
#undef public_6232c8f
