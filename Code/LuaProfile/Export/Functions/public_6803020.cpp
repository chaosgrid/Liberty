#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803020);
CLANG_FORWARD_PROC_SYMBOL(public_68030f0);
CLANG_FORWARD_PROC_SYMBOL(public_6806080);
CLANG_FORWARD_PROC_SYMBOL(public_6806650);

#define public_680303b _public_680303b
#define public_680304c _public_680304c
#define public_680305e _public_680305e
#define public_6803093 _public_6803093
#define public_68030dc _public_68030dc

PROC_DECLARE(0x6803020, internal_6803020, public_6803020);
extern "C" NAKED register_t __cdecl internal_6803020()
{
    __asm
    {
        sub esp, 0x218
        push ebx
        mov ebx, dword ptr ss : [esp+0x220]
        test ebx, ebx
        push esi
        jne public_680303b
        mov esi, dword ptr ds : [public_680c050]
        jmp public_680304c
/*FIXUP public_680303b : nop
        push offset public_680d4ec @0x680303b*/
  FIXUP public_680303b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d4ec
        push ebx
        call dword ptr ds : [public_680c04c]
        add esp, 8
        mov esi, eax
        public_680304c : nop
        test esi, esi
        jne public_680305e
        pop esi
        mov eax, 2
        pop ebx
        add esp, 0x218
        ret 
        public_680305e : nop
        push edi
        push esi
        call dword ptr ds : [public_680c048]
        mov edi, eax
        push esi
        push edi
        call dword ptr ds : [public_680c044]
        xor eax, eax
        add esp, 0xC
        cmp edi, 0x1B
        sete al
        mov edi, eax
        test edi, edi
        je public_6803093
        push esi
/*FIXUP push offset public_680d4e8 @0x6803082*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d4e8
        push ebx
        call dword ptr ds : [public_680c040]
        add esp, 0xC
        mov esi, eax
        public_6803093 : nop
        push 0x104
        lea ecx, ss:[esp+0x10]
        push ebx
        push ecx
        call public_6806080
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x120]
        push esi
        push eax
        call public_6806650
        lea ecx, ss:[esp+0x128]
        push edi
        push ecx
        call public_68030f0
        mov edi, eax
        mov eax, dword ptr ds : [public_680c050]
        add esp, 0x20
        cmp esi, eax
        je public_68030dc
        push esi
        call dword ptr ds : [public_680c03c]
        add esp, 4
        public_68030dc : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x218
        ret 
        UNREACHABLE_TRAP(0x6803020)
    }
}

#undef public_680303b
#undef public_680304c
#undef public_680305e
#undef public_6803093
#undef public_68030dc
