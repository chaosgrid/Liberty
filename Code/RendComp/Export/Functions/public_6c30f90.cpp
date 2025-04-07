#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c30f90);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c3103e _public_6c3103e
#define public_6c31047 _public_6c31047
#define public_6c31050 _public_6c31050

PROC_DECLARE(0x6c30f90, internal_6c30f90, public_6c30f90);
extern "C" NAKED register_t __cdecl internal_6c30f90()
{
    __asm
    {
        sub esp, 0x38
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        mov dword ptr ss : [esp+8], ecx
        xor eax, eax
        mov dword ptr ss : [esp+0x10], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x24], 0x80000000
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], offset public_6c365fc
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c31050
        mov edx, dword ptr ds : [esi]
        push ebx
        push ebp
        push 0
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        mov ebx, eax
        mov eax, 0x88888889
        mul ebx
        shr edx, 5
        imul edx, 0x3C
        push edx
        call public_6c34eac
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x50]
        push ecx
        push ebx
        mov ebp, eax
        mov eax, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6c3103e
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x1C], ebp
        jmp public_6c31047
        public_6c3103e : nop
        push ebp
        call public_6c34ea0
        add esp, 4
        public_6c31047 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        pop ebp
        pop ebx
        public_6c31050 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ds:[ecx+8]
        push eax
        call dword ptr ds : [edx+0xC]
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6c30f90)
    }
}

#undef public_6c3103e
#undef public_6c31047
#undef public_6c31050
