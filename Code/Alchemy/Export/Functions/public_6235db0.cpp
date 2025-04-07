#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6235690);
CLANG_FORWARD_PROC_SYMBOL(public_6235db0);

#define public_6235ded _public_6235ded
#define public_6235e84 _public_6235e84

PROC_DECLARE(0x6235db0, internal_6235db0, public_6235db0);
extern "C" NAKED register_t __cdecl internal_6235db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        lea ebx, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_6257b24]
        test eax, eax
        push edi
        jne public_6235ded
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
        public_6235ded : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        mov ecx, 6
        sub esp, 0x18
        mov esi, ebp
        mov edi, esp
        rep movsd
        push ebx
        lea ecx, ds:[ebx+0xD8]
        call public_6234ab0
        fld dword ptr ss : [ebp+0xC]
        fsub dword ptr ds : [public_624bac4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb68]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_6235e84
        fld dword ptr ss : [ebp+0x10]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb68]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_6235e84
        fld dword ptr ss : [ebp+0x14]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb68]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_6235e84
        mov eax, dword ptr ds : [ebx+0xDC]
        mov dword ptr ds : [eax+0x30], 0
        add eax, 0x30
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0x3F800000
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        public_6235e84 : nop
        mov eax, dword ptr ds : [ebx+0xDC]
        xor ecx, ecx
        add eax, 0x30
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6235db0)
    }
}

#undef public_6235ded
#undef public_6235e84
