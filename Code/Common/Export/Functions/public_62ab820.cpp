#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0200);
CLANG_FORWARD_PROC_SYMBOL(public_62a1540);
CLANG_FORWARD_PROC_SYMBOL(public_63344f0);
CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_62ab863 _public_62ab863
#define public_62ab891 _public_62ab891

PROC_DECLARE(0x62ab820, internal_62ab820, public_62ab820);
extern "C" NAKED register_t __cdecl internal_62ab820()
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
        je public_62ab863
        lea ecx, ds:[edi+0xE4]
        call public_629b6c0
        test eax, eax
        je public_62ab891
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x38]
        fstp dword ptr ss : [ebp]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab863 : nop
        call public_63344f0
        add esp, 4
        test al, al
        je public_62ab891
        push esi
        lea ecx, ds:[edi+0x144]
        call public_62a1540
        test eax, eax
        je public_62ab891
        mov ecx, eax
        call public_62a0200
        fstp dword ptr ss : [ebp]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        ret 8
        public_62ab891 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x62ab820)
    }
}

#undef public_62ab863
#undef public_62ab891
