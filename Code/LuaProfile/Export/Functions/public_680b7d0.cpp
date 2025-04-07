#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805d00);
CLANG_FORWARD_PROC_SYMBOL(public_6805d20);
CLANG_FORWARD_PROC_SYMBOL(public_680a800);
CLANG_FORWARD_PROC_SYMBOL(public_680b7d0);

#define public_680b806 _public_680b806
#define public_680b81c _public_680b81c
#define public_680b83c _public_680b83c
#define public_680b845 _public_680b845

PROC_DECLARE(0x680b7d0, internal_680b7d0, public_680b7d0);
extern "C" NAKED register_t __cdecl internal_680b7d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_680e3a8 @0x680b7d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e3a8
        push esi
        call public_6805d20
        add esp, 8
        test eax, eax
        jge public_680b845
        mov eax, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [eax], 1
        jle public_680b806
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push 0x103
        push ecx
        call dword ptr ds : [public_680c05c]
        add esp, 8
        jmp public_680b81c
        public_680b806 : nop
        mov eax, dword ptr ds : [public_680c054]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        mov dl, byte ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx+edx*2]
        and eax, 0x103
        public_680b81c : nop
        test eax, eax
        jne public_680b83c
        cmp byte ptr ds : [esi], 0x5F
        je public_680b83c
        mov edx, dword ptr ss : [esp+8]
        push esi
/*FIXUP push offset public_680e5c0 @0x680b82a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e5c0
        push edx
        call public_680a800
        add esp, 0xC
        xor eax, eax
        pop esi
        ret 
        public_680b83c : nop
        push esi
        call public_6805d00
        add esp, 4
        public_680b845 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x680b7d0)
    }
}

#undef public_680b806
#undef public_680b81c
#undef public_680b83c
#undef public_680b845
