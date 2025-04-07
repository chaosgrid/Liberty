#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6efccf0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd400);
CLANG_FORWARD_PROC_SYMBOL(public_6efd610);
CLANG_FORWARD_PROC_SYMBOL(public_6f55660);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac97e);

#define public_6efcdb1 _public_6efcdb1
#define public_6efcdf8 _public_6efcdf8
#define public_6efce8d _public_6efce8d
#define public_6efcf0c _public_6efcf0c
#define public_6efcf1e _public_6efcf1e

PROC_DECLARE(0x6efccf0, internal_6efccf0, public_6efccf0);
extern "C" NAKED register_t __cdecl internal_6efccf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac97e @0x6efccf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac97e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb3030]
        push edi
        lea ecx, ss:[esp+0x90]
        call esi
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA0]
        call public_6eb7810
        lea eax, ss:[esp+0x1F]
        push eax
        lea ecx, ss:[esp+0xC8]
        call public_6ead6a0
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x110], ebx
        call public_6efc7a0
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x110], 1
        call esi
        mov ebp, dword ptr ss : [esp+0x118]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6efcf1e
        mov ebx, dword ptr ds : [public_6fb3014]
/*FIXUP public_6efcdb1 : nop
        push offset public_6fb445c @0x6efcdb1*/
  FIXUP public_6efcdb1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        call ebx
        test al, al
        mov ecx, ebp
        je public_6efcdf8
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x90], eax
        jmp public_6efcf0c
/*FIXUP public_6efcdf8 : nop
        push offset public_6fb7b50 @0x6efcdf8*/
  FIXUP public_6efcdf8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b50
        call ebx
        test al, al
        mov ecx, ebp
        je public_6efce8d
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xD4], ecx
        mov dword ptr ss : [esp+0xD8], edx
        mov edx, dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0xDC], eax
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0xE0]
        rep movsd
        lea ecx, ss:[esp+0xD4]
        push ecx
        push edx
        lea ecx, ss:[esp+0xCC]
        mov byte ptr ss : [esp+0x10C], 0
        call public_6efd1f0
        jmp public_6efcf0c
/*FIXUP public_6efce8d : nop
        push offset public_6fb7b48 @0x6efce8d*/
  FIXUP public_6efce8d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b48
        call ebx
        test al, al
        je public_6efcf0c
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x10]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x4C], ecx
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x54], edx
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x58]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xD0]
        push 1
        push ecx
        lea ecx, ss:[esp+0xD0]
        mov byte ptr ss : [esp+0x84], 1
        call public_6efd610
        public_6efcf0c : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6efcdb1
        xor ebx, ebx
        public_6efcf1e : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], eax
        mov ecx, 9
        lea esi, ss:[esp+0xA0]
        lea edi, ss:[esp+0x5C]
        rep movsd
        lea ecx, ss:[esp+0xC4]
        push ecx
        lea ecx, ss:[esp+0x84]
        call public_6f55660
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fcf38c
        mov byte ptr ss : [esp+0x118], 2
        call public_6efd400
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x84]
        push ecx
        push edx
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x118], 1
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x84]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xCC]
        add esp, 4
        push ecx
        push edx
        lea ecx, ss:[esp+0xCC]
        mov dword ptr ss : [esp+0x8C], ebx
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x118], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0xC8]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x10C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6efccf0)
    }
}

#undef public_6efcdb1
#undef public_6efcdf8
#undef public_6efce8d
#undef public_6efcf0c
#undef public_6efcf1e
