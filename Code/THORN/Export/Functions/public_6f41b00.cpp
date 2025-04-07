#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f41b56 _public_6f41b56
#define public_6f41bf6 _public_6f41bf6
#define public_6f41c0c _public_6f41c0c
#define public_6f41c3a _public_6f41c3a

PROC_DECLARE(0x6f41b00, internal_6f41b00, public_6f41b00);
extern "C" NAKED register_t __cdecl internal_6f41b00()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x15C]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        lea edi, ds:[ebx+0x160]
        mov ecx, 0x24
        rep movsd
        je public_6f41b56
        mov edx, dword ptr ds : [ebx+0x180]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ebx+0x15C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x16C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [ebx+0x15C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x188]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6f41b56 : nop
        mov esi, dword ptr ds : [ebx+0x158]
        test esi, esi
        je public_6f41c3a
        fld dword ptr ds : [ebx+0x18C]
        push ebp
        fmul dword ptr ds : [public_6f5b0e0]
        call public_6f57f16
        fld dword ptr ds : [ebx+0x190]
        fmul dword ptr ds : [public_6f5b0e0]
        mov edi, eax
        call public_6f57f16
        fld dword ptr ds : [ebx+0x194]
        fmul dword ptr ds : [public_6f5b0e0]
        mov ebp, eax
        call public_6f57f16
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ebx+0x158]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x16C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [ebx+0x1D4]
        mov eax, dword ptr ds : [ebx+0x158]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x14]
        cmp dword ptr ds : [ebx+0x188], 1
        mov eax, dword ptr ds : [ebx+0x158]
        pop ebp
        jne public_6f41bf6
        mov edx, dword ptr ds : [eax]
        push 0xBF800000
        push eax
        call dword ptr ds : [edx+0x18]
        jmp public_6f41c0c
        public_6f41bf6 : nop
        fld dword ptr ds : [ebx+0x1EC]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ds : [public_6f5a230]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6f41c0c : nop
        mov esi, dword ptr ds : [ebx+0x188]
        mov eax, dword ptr ds : [ebx+0x158]
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        cmp esi, 3
        sete cl
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ebx+0x180]
        mov eax, dword ptr ds : [ebx+0x158]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        public_6f41c3a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f41b00)
    }
}

#undef public_6f41b56
#undef public_6f41bf6
#undef public_6f41c0c
#undef public_6f41c3a
