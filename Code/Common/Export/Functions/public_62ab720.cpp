#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261db0);
CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab763 _public_62ab763
#define public_62ab791 _public_62ab791

PROC_DECLARE(0x62ab720, internal_62ab720, public_62ab720);
extern "C" NAKED register_t __cdecl internal_62ab720()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        mov dword ptr ss : [ebp], 0
        call public_6334510
        add esp, 4
        test al, al
        push esi
        je public_62ab763
        lea ecx, ds:[edi+0xE4]
        call public_629b6c0
        test eax, eax
        je public_62ab791
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        fstp dword ptr ss : [ebp]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab763 : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62ab791
        push esi
        lea ecx, ds:[edi+0x144]
        call public_62a1540
        test eax, eax
        je public_62ab791
        mov ecx, eax
        call public_6261db0
        fstp dword ptr ss : [ebp]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab791 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x62ab720)
    }
}

#undef public_62ab763
#undef public_62ab791
