#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_55a6b0);
CLANG_FORWARD_PROC_SYMBOL(public_564610);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);

#define public_55c00f _public_55c00f
#define public_55c014 _public_55c014
#define public_55c029 _public_55c029
#define public_55c121 _public_55c121
#define public_55c12c _public_55c12c
#define public_55c17c _public_55c17c
#define public_55c198 _public_55c198

PROC_DECLARE(0x55bfd0, internal_55bfd0, public_55bfd0);
extern "C" NAKED register_t __cdecl internal_55bfd0()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ss : [esp+0x44]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [ebp+0x335], 1
        call public_55a6b0
        lea esi, ss:[ebp+0x350]
        mov byte ptr ss : [esp+0x54], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_55c00f
        mov ecx, esi
        call dword ptr ds : [public_5c6fe4]
        mov eax, dword ptr ds : [esi+4]
        jmp public_55c014
        public_55c00f : nop
        mov eax, dword ptr ds : [public_5c7078]
        public_55c014 : nop
        cmp byte ptr ds : [eax], 0
        je public_55c12c
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_55c029
        mov eax, dword ptr ds : [public_5c7078]
        public_55c029 : nop
        push 0
        push 0
        push eax
        lea ecx, ss:[ebp+0x378]
        call public_59ec80
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x94]
        push edx
        mov edx, dword ptr ss : [ebp+0x37C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov esi, dword ptr ss : [ebp+0x37C]
        cmp esi, 0xFFFFFFFF
        je public_55c121
        fld dword ptr ss : [ebp+0xB0]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+0x68]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0xAC]
        fadd dword ptr ss : [ebp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xA8]
        fadd dword ptr ss : [ebp+0x60]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov ecx, dword ptr ss : [ebp+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55c121
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [ebp+0x37C]
        mov ecx, 0xC
        lea edi, ss:[esp+0x20]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [ebp+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55c121 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x8C]
        public_55c12c : nop
        mov dword ptr ss : [ebp+0x3A0], 0
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea esi, ss:[ebp+0x360]
        lea edi, ss:[ebp+0x3A4]
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea ebx, ss:[ebp+0x3B4]
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f9c]
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_55c17c
        mov edi, dword ptr ds : [public_5c7078]
        public_55c17c : nop
        push edi
        call public_564610
        mov dword ptr ss : [ebp+0x3C4], eax
        mov ebx, dword ptr ds : [ebx+4]
        add esp, 4
        test ebx, ebx
        jne public_55c198
        mov ebx, dword ptr ds : [public_5c7078]
        public_55c198 : nop
        push ebx
        call public_564610
        add esp, 4
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x3C8], eax
        mov al, byte ptr ss : [esp+0x4C]
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x55bfd0)
    }
}

#undef public_55c00f
#undef public_55c014
#undef public_55c029
#undef public_55c121
#undef public_55c12c
#undef public_55c17c
#undef public_55c198
