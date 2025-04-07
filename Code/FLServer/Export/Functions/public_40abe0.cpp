#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40abe0);
CLANG_FORWARD_PROC_SYMBOL(public_418912);
CLANG_FORWARD_PROC_SYMBOL(public_419460);

#define public_40ac61 _public_40ac61
#define public_40ac84 _public_40ac84
#define public_40acab _public_40acab

PROC_DECLARE(0x40abe0, internal_40abe0, public_40abe0);
extern "C" NAKED register_t __cdecl internal_40abe0()
{
    __asm
    {
        mov eax, 0x2C00
        call public_419460
        mov al, byte ptr ds : [public_42621c]
        push ebx
        push edi
        mov byte ptr ss : [esp+8], al
        xor eax, eax
        mov ecx, 0xFF
        lea edi, ss:[esp+9]
        rep stosd
        stosw 
/*FIXUP push offset public_425570 @0x40ac04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425570
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        stosb 
        call public_418912
        lea edx, ss:[esp+8]
/*FIXUP push offset public_42547c @0x40ac1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42547c
        push edx
        call dword ptr ds : [public_41b978]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_40acab
        mov ax, word ptr ds : [public_425f48]
        mov word ptr ss : [esp+0x408], ax
        xor eax, eax
        mov ecx, 0x9FF
        lea edi, ss:[esp+0x40A]
        rep stosd
        stosw 
        mov eax, dword ptr ds : [public_4277f0]
        test eax, eax
        jne public_40ac61
        mov eax, dword ptr ds : [public_41b8c8]
        public_40ac61 : nop
        push esi
        push eax
        lea ecx, ss:[esp+0x410]
        push ecx
        call dword ptr ds : [public_41b988]
        mov esi, dword ptr ds : [public_4277f0]
        add esp, 8
        test esi, esi
        jne public_40ac84
        mov esi, dword ptr ds : [public_41b8c8]
        public_40ac84 : nop
        lea edx, ss:[esp+0x40C]
        push ebx
        push edx
        call dword ptr ds : [public_41b8f4]
        add esp, 4
        push eax
        push 2
        push esi
        call dword ptr ds : [public_41b97c]
        push ebx
        call dword ptr ds : [public_41b970]
        add esp, 0x14
        pop esi
        public_40acab : nop
        pop edi
        pop ebx
        add esp, 0x2C00
        ret 
        UNREACHABLE_TRAP(0x40abe0)
    }
}

#undef public_40ac61
#undef public_40ac84
#undef public_40acab
