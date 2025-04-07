#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_62fef70);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);

#define public_62fef90 _public_62fef90
#define public_62fefce _public_62fefce
#define public_62feff0 _public_62feff0
#define public_62ff00a _public_62ff00a
#define public_62ff019 _public_62ff019

PROC_DECLARE(0x62fef70, internal_62fef70, public_62fef70);
extern "C" NAKED register_t __cdecl internal_62fef70()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
        mov ecx, esi
        call public_6310170
        test al, al
        je public_62ff019
        lea ebx, ds:[ebx]
/*FIXUP public_62fef90 : nop
        push offset public_63a2310 @0x62fef90*/
  FIXUP public_62fef90 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2310
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62fefce
        push 0
        call public_63108f0
        fstp dword ptr ss : [esp+8]
        push 1
        mov ecx, esi
        call public_63108f0
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+8]
        push eax
        push 1
        push ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, edi
        call public_626b560
        jmp public_62ff00a
/*FIXUP public_62fefce : nop
        push offset public_63a2308 @0x62fefce*/
  FIXUP public_62fefce : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2308
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62feff0
        push 0
        call public_63108f0
        fmul qword ptr ds : [public_639df88]
        fstp dword ptr ds : [edi+0x10]
        jmp public_62ff00a
/*FIXUP public_62feff0 : nop
        push offset public_63a2300 @0x62feff0*/
  FIXUP public_62feff0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2300
        call public_6310410
        test al, al
        je public_62ff00a
        push 0
        mov ecx, esi
        call public_63108f0
        fstp dword ptr ds : [edi+0x14]
        public_62ff00a : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62fef90
        public_62ff019 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62fef70)
    }
}

#undef public_62fef90
#undef public_62fefce
#undef public_62feff0
#undef public_62ff00a
#undef public_62ff019
