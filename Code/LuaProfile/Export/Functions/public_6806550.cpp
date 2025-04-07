#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6806550);
CLANG_FORWARD_PROC_SYMBOL(public_68065b0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_6806570 _public_6806570
#define public_6806581 _public_6806581
#define public_680659d _public_680659d

PROC_DECLARE(0x6806550, internal_6806550, public_6806550);
extern "C" NAKED register_t __cdecl internal_6806550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+eax]
        cmp esi, dword ptr ss : [esp+0x20]
        jb public_6806570
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6802e00
        add esp, 4
        public_6806570 : nop
        mov edx, esi
        xor edx, edi
        cmp edx, edi
        jbe public_680659d
        test edi, edi
        jbe public_6806581
        cmp esi, 8
        jb public_680659d
        public_6806581 : nop
        push esi
        call public_68065b0
        imul eax, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_68065d0
        add esp, 0xC
        pop edi
        pop esi
        ret 
        public_680659d : nop
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806550)
    }
}

#undef public_6806570
#undef public_6806581
#undef public_680659d
