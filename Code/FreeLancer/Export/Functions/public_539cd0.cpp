#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407450);
CLANG_FORWARD_PROC_SYMBOL(public_539cd0);
CLANG_FORWARD_PROC_SYMBOL(public_539f90);

#define public_539d47 _public_539d47
#define public_539d49 _public_539d49

PROC_DECLARE(0x539cd0, internal_539cd0, public_539cd0);
extern "C" NAKED register_t __cdecl internal_539cd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi]
        mov esi, ecx
        fld st(0)
        mov ecx, ebx
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ds : [public_5c6a18]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 0xC
        test ecx, ecx
        je public_539d47
        mov ebp, dword ptr ds : [public_5c6590]
        call ebp
        test eax, eax
        je public_539d47
        mov ecx, dword ptr ds : [esi+0x10]
        call ebp
        mov eax, dword ptr ds : [eax+4]
        jmp public_539d49
        public_539d47 : nop
        xor eax, eax
        public_539d49 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, eax
        call public_407450
        push 0
        lea edx, ds:[edi+0xC]
        push edx
        push edi
        push eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, esi
        call public_539f90
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x539cd0)
    }
}

#undef public_539d47
#undef public_539d49
