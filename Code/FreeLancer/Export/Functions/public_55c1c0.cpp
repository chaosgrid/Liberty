#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_55ac30);
CLANG_FORWARD_PROC_SYMBOL(public_55c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_564610);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);

#define public_55c31c _public_55c31c
#define public_55c326 _public_55c326
#define public_55c376 _public_55c376
#define public_55c392 _public_55c392

PROC_DECLARE(0x55c1c0, internal_55c1c0, public_55c1c0);
extern "C" NAKED register_t __cdecl internal_55c1c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x2C]
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x7C]
        mov esi, dword ptr ss : [esp+0x5C]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x84]
        push ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        push edx
        mov edx, dword ptr ss : [esp+0x7C]
        push eax
        mov eax, dword ptr ss : [esp+0x7C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        push edx
        mov edx, dword ptr ss : [esp+0x7C]
        push eax
        mov eax, dword ptr ss : [esp+0x7C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        push edx
        mov edx, dword ptr ss : [esp+0x78]
        push eax
        push ecx
        push esi
        push edx
        mov ecx, ebx
        mov byte ptr ds : [ebx+0x335], 1
        call public_55ac30
        test esi, esi
        je public_55c326
        push 0
        push 0
        push esi
        lea ecx, ds:[ebx+0x378]
        call public_59ec80
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x94]
        push edx
        mov edx, dword ptr ds : [ebx+0x37C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov esi, dword ptr ds : [ebx+0x37C]
        cmp esi, 0xFFFFFFFF
        je public_55c31c
        fld dword ptr ds : [ebx+0xB0]
        sub esp, 0xC
        fadd dword ptr ds : [ebx+0x68]
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+0xAC]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx+0xA8]
        fadd dword ptr ds : [ebx+0x60]
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
        mov edx, dword ptr ds : [ebx+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_55c31c
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
        mov edx, dword ptr ds : [ebx+0x37C]
        mov ecx, 0xC
        lea edi, ss:[esp+0x20]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55c31c : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x8C]
        public_55c326 : nop
        mov dword ptr ds : [ebx+0x3A0], 0
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea esi, ds:[ebx+0x360]
        lea edi, ds:[ebx+0x3A4]
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea ebp, ds:[ebx+0x3B4]
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f9c]
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        jne public_55c376
        mov edi, dword ptr ds : [public_5c7078]
        public_55c376 : nop
        push edi
        call public_564610
        mov dword ptr ds : [ebx+0x3C4], eax
        mov ebp, dword ptr ss : [ebp+4]
        add esp, 4
        test ebp, ebp
        jne public_55c392
        mov ebp, dword ptr ds : [public_5c7078]
        public_55c392 : nop
        push ebp
        call public_564610
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x3C8], eax
        pop ebx
        add esp, 0x3C
        ret 0x34
        UNREACHABLE_TRAP(0x55c1c0)
    }
}

#undef public_55c31c
#undef public_55c326
#undef public_55c376
#undef public_55c392
