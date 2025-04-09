#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);
CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_404670);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_563feb _public_563feb
#define public_563ffd _public_563ffd
#define public_564051 _public_564051

PROC_DECLARE(0x563e70, internal_563e70, public_563e70);
extern "C" NAKED register_t __cdecl internal_563e70()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        push ebp
        call dword ptr ds : [public_5c6e70]
        mov ecx, dword ptr ds : [eax+0x9C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x18]
        mov eax, dword ptr ss : [esp+8]
        mov ebp, dword ptr ss : [esp+0x34]
        mov ebx, dword ptr ss : [esp+0x3C]
        sub ebp, eax
        sub ebx, eax
        mov eax, dword ptr ds : [public_67a480]
        push eax
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x40], ebx
        call public_402d30
        fild dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [public_610850]
        add esp, 4
        fstp dword ptr ss : [esp+0x10]
        dec edx
        fild dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x28], 0x3F800000
        fild dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x14]
        push ecx
        push ecx
        mov dword ptr ss : [esp+0x3C], edx
        fadd dword ptr ds : [public_5c75dc]
        lea ecx, ss:[esp+0x28]
        lea edx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x44]
        fild dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        push 0
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_564051
        mov edx, dword ptr ds : [public_610854]
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        dec edx
        push ecx
        mov dword ptr ss : [esp+0x3C], edx
        fild dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x34]
        lea ecx, ss:[esp+0x2C]
        lea edx, ss:[esp+0x24]
        fstp dword ptr ss : [esp]
        push 0
        push eax
        push ecx
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_404670
        add esp, 0x1C
        test eax, eax
        je public_564051
        push 1
        push 0
/*FIXUP push offset public_6101d8 @0x563f95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101d8
        call public_402e30
        mov ebx, eax
        mov ebp, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0x10]
        add ebx, 8
        lea eax, ss:[ebp+1]
        add esp, 0xC
        cmp eax, ecx
        mov dword ptr ds : [ebx+4], eax
        jle public_563ffd
        add eax, 0x20
        mov dword ptr ds : [ebx+8], eax
        imul eax, 0x2C
        push esi
        push eax
        call public_5b7e84
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x38], eax
        je public_563feb
        mov ecx, ebp
        imul ecx, 0x2C
        mov edx, ecx
        push edi
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        public_563feb : nop
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        mov dword ptr ds : [ebx], ecx
        pop esi
        public_563ffd : nop
        mov eax, dword ptr ds : [ebx]
        imul ebp, 0x2C
        add ebp, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, 0x3F800000
        mov dword ptr ss : [ebp+0x10], eax
        mov dword ptr ss : [ebp+0x14], eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[ebp+0x18]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [ebp+0x28], edx
        public_564051 : nop
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0x14
        UNREACHABLE_TRAP(0x563e70)
    }
}

#undef public_563feb
#undef public_563ffd
#undef public_564051
