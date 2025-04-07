#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0260);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fe0);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab8e1 _public_62ab8e1
#define public_62ab914 _public_62ab914
#define public_62ab92e _public_62ab92e

PROC_DECLARE(0x62ab8a0, internal_62ab8a0, public_62ab8a0);
extern "C" NAKED register_t __cdecl internal_62ab8a0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push ebp
        mov esi, ecx
        mov dword ptr ds : [edi], 0
        call public_6334510
        add esp, 4
        test al, al
        push ebp
        je public_62ab8e1
        lea ecx, ds:[esi+0xE4]
        call public_629b6c0
        test eax, eax
        je public_62ab92e
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x44]
        fstp dword ptr ds : [edi]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab8e1 : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62ab914
        push ebp
        lea ecx, ds:[esi+0x144]
        mov dword ptr ds : [edi], 0
        call public_62a1540
        test eax, eax
        je public_62ab92e
        mov ecx, eax
        call public_62a0260
        fstp dword ptr ds : [edi]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab914 : nop
        cmp word ptr ds : [public_63a4aa6], bp
        jne public_62ab92e
        mov ecx, esi
        call public_62b5fe0
        fstp dword ptr ds : [edi]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab92e : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x62ab8a0)
    }
}

#undef public_62ab8e1
#undef public_62ab914
#undef public_62ab92e
