#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d6710);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);

#define public_62cf491 _public_62cf491
#define public_62cf493 _public_62cf493

PROC_DECLARE(0x62cf3f0, internal_62cf3f0, public_62cf3f0);
extern "C" NAKED register_t __cdecl internal_62cf3f0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov esi, ecx
        call public_62d20d0
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [eax+0x17C]
        mov dword ptr ds : [esi+0x60], ecx
        mov edx, dword ptr ds : [eax+0x1B8]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x68]
        push edx
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0xD8]
        push eax
        call dword ptr ds : [edx+0x28]
        mov edi, dword ptr ds : [esi+0x64]
        push 1
        lea ecx, ds:[edi+0x34]
        mov byte ptr ds : [edi+0x28C], 1
        call public_62d6710
        push 2
        lea ecx, ds:[edi+0x150]
        call public_62d88b0
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        lea eax, ds:[esi+0x78]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x48]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [esi+0x54], ecx
        mov dword ptr ds : [esi+0x108], 0
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_62cf491
        add eax, 0xFFFFFFF8
        jmp public_62cf493
        public_62cf491 : nop
        xor eax, eax
        public_62cf493 : nop
        push eax
        lea edx, ss:[esp+0xC]
        push edx
        call public_62e60e0
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        add esp, 8
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        mov al, byte ptr ds : [esi+0x38]
        fsub dword ptr ds : [edi+8]
        pop edi
        fld st(2)
        mov byte ptr ds : [esi+0x120], al
        fmul st, st(3)
        mov dword ptr ds : [esi+0x58], 0
        fld st(1)
        mov dword ptr ds : [esi+0x5C], 0
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp dword ptr ds : [esi+0x10C]
        pop esi
        fstp st(0)
        fstp st(0)
        fstp st(0)
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62cf3f0)
    }
}

#undef public_62cf491
#undef public_62cf493
