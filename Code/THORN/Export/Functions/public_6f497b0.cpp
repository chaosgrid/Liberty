#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f497ff _public_6f497ff
#define public_6f4980e _public_6f4980e
#define public_6f49839 _public_6f49839
#define public_6f49841 _public_6f49841
#define public_6f49855 _public_6f49855
#define public_6f49875 _public_6f49875

PROC_DECLARE(0x6f497b0, internal_6f497b0, public_6f497b0);
extern "C" NAKED register_t __cdecl internal_6f497b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        push edi
        lea eax, ds:[esi+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ebx+4]
        je public_6f4980e
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 2
        jne public_6f4980e
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0xCC]
        test ecx, ecx
        je public_6f497ff
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x70]
        push eax
        push ecx
        call dword ptr ds : [edx+0x28]
        jmp public_6f4980e
        public_6f497ff : nop
        fld dword ptr ds : [eax+0xC8]
        fst dword ptr ds : [eax+0xD8]
        fstp dword ptr ds : [esi+0x70]
        public_6f4980e : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, 0xFFFFFFFF
        lea edi, ds:[esi+0x18]
        je public_6f49855
        push edi
        mov ecx, ebx
        call public_6f4af00
        mov ecx, dword ptr ds : [ebx+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f49839
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f49839
        lea eax, ss:[esp+0xC]
        jmp public_6f49841
        public_6f49839 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f49841 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f49855
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x54], ecx
        public_6f49855 : nop
        mov cl, byte ptr ds : [esi+0x30]
        mov al, 1
        test al, cl
        mov dword ptr ds : [esi+0x74], 0
        je public_6f49875
        pop edi
        mov dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6f49875 : nop
        mov edx, dword ptr ds : [esi+0x40]
        add edx, dword ptr ds : [esi+0x2C]
        pop edi
        mov dword ptr ds : [esi+0x1C], edx
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f497b0)
    }
}

#undef public_6f497ff
#undef public_6f4980e
#undef public_6f49839
#undef public_6f49841
#undef public_6f49855
#undef public_6f49875
