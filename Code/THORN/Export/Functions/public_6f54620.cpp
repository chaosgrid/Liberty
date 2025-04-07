#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53650);
CLANG_FORWARD_PROC_SYMBOL(public_6f53740);
CLANG_FORWARD_PROC_SYMBOL(public_6f54620);
CLANG_FORWARD_PROC_SYMBOL(public_6f54700);

#define public_6f54664 _public_6f54664
#define public_6f54686 _public_6f54686
#define public_6f546ba _public_6f546ba
#define public_6f546dc _public_6f546dc
#define public_6f546ea _public_6f546ea

PROC_DECLARE(0x6f54620, internal_6f54620, public_6f54620);
extern "C" NAKED register_t __cdecl internal_6f54620()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor edi, edi
        xor ebp, ebp
        sub eax, 0x29
        je public_6f546ea
        sub eax, 0xEB
        je public_6f54664
        sub eax, 2
        je public_6f546dc
/*FIXUP push offset public_6f613dc @0x6f54647*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f613dc
        push esi
        call public_6f511c0
        add esp, 8
        push ebp
        push edi
        push esi
        call public_6f54700
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        ret 
        public_6f54664 : nop
        push 0
        push esi
        mov edi, 1
        call public_6f53650
        add esp, 4
        push eax
        push esi
        call public_6f53740
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        jne public_6f546ea
        public_6f54686 : nop
        push esi
        call public_6f52920
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        sub eax, 0x114
        jne public_6f546ba
        mov eax, edi
        push eax
        push esi
        inc edi
        call public_6f53650
        add esp, 4
        push eax
        push esi
        call public_6f53740
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        jne public_6f546ea
        jmp public_6f54686
        public_6f546ba : nop
        sub eax, 2
        je public_6f546dc
/*FIXUP push offset public_6f613dc @0x6f546bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f613dc
        push esi
        call public_6f511c0
        add esp, 8
        push ebp
        push edi
        push esi
        call public_6f54700
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        ret 
        public_6f546dc : nop
        push esi
        call public_6f52920
        add esp, 4
        mov ebp, 1
        public_6f546ea : nop
        push ebp
        push edi
        push esi
        call public_6f54700
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f54620)
    }
}

#undef public_6f54664
#undef public_6f54686
#undef public_6f546ba
#undef public_6f546dc
#undef public_6f546ea
