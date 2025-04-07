#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceec90);

#define public_6cea3d4 _public_6cea3d4
#define public_6cea3d6 _public_6cea3d6
#define public_6cea426 _public_6cea426
#define public_6cea428 _public_6cea428
#define public_6cea440 _public_6cea440
#define public_6cea455 _public_6cea455
#define public_6cea457 _public_6cea457
#define public_6cea47f _public_6cea47f

PROC_DECLARE(0x6cea3a0, internal_6cea3a0, public_6cea3a0);
extern "C" NAKED register_t __cdecl internal_6cea3a0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push ebp
        fcomp dword ptr ds : [public_6d65188]
        mov ebp, ecx
        fnstsw ax
        test ah, 0x41
        jne public_6cea47f
        mov eax, dword ptr ss : [ebp]
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_6cea3d4
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_6cea3d4
        mov edx, ecx
        jmp public_6cea3d6
        public_6cea3d4 : nop
        xor edx, edx
        public_6cea3d6 : nop
        mov edx, dword ptr ds : [edx+0xB4]
        test edx, edx
        push esi
        push edi
        jbe public_6cea440
        mov edi, dword ptr ds : [public_6d90264]
        lea esi, ds:[edx-1]
        cmp esi, edi
        jae public_6cea440
        mov edi, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        push ebx
        mov ebx, dword ptr ds : [esi+edi+0x348]
        test ebx, ebx
        pop ebx
        je public_6cea440
        imul edx, 0x418
        cmp dword ptr ds : [edx+edi-0x34], eax
        jne public_6cea440
        test ecx, ecx
        je public_6cea426
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cea426
        mov eax, ecx
        jmp public_6cea428
        public_6cea426 : nop
        xor eax, eax
        public_6cea428 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        imul edx, 0x418
        fld dword ptr ds : [edx+edi-0x54]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        public_6cea440 : nop
        test ecx, ecx
        pop edi
        pop esi
        je public_6cea455
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6cea457
        public_6cea455 : nop
        xor ecx, ecx
        public_6cea457 : nop
        push 0x1000000
        add ecx, 0xE4
        call dword ptr ds : [public_6d64024]
        test eax, eax
        je public_6cea47f
        mov ecx, eax
        call dword ptr ds : [public_6d64294]
        fld dword ptr ds : [eax+0x70]
        fdivr dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        public_6cea47f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ceec90
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6cea3a0)
    }
}

#undef public_6cea3d4
#undef public_6cea3d6
#undef public_6cea426
#undef public_6cea428
#undef public_6cea440
#undef public_6cea455
#undef public_6cea457
#undef public_6cea47f
