#include "Common-PCH.h"


#define public_630cdd4 _public_630cdd4
#define public_630ce33 _public_630ce33

PROC_DECLARE(0x630cdc0, internal_630cdc0, public_630cdc0);
extern "C" NAKED register_t __cdecl internal_630cdc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_630ce33
        cmp byte ptr ds : [eax], 0
        je public_630ce33
        mov edx, esi
        sub edx, eax
        public_630cdd4 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_630cdd4
/*FIXUP push offset public_63a3568 @0x630cdde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3568
        push esi
        call dword ptr ds : [public_6399288]
        add esp, 8
        test eax, eax
        mov dword ptr ds : [esi+0x80], eax
        je public_630ce33
        push edi
        mov edi, dword ptr ds : [public_6399248]
        push 2
        push 0
        push eax
        call edi
        mov eax, dword ptr ds : [esi+0x80]
        push eax
        call dword ptr ds : [public_639924c]
        mov ecx, dword ptr ds : [esi+0x80]
        push 0
        push 0
        push ecx
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x84], 0
        call edi
        add esp, 0x1C
        pop edi
        public_630ce33 : nop
        mov ecx, dword ptr ds : [esi+0x80]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630cdc0)
    }
}

#undef public_630cdd4
#undef public_630ce33
