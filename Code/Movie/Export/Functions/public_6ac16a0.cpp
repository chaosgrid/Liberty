#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac16a0);

#define public_6ac16f8 _public_6ac16f8

PROC_DECLARE(0x6ac16a0, internal_6ac16a0, public_6ac16a0);
extern "C" NAKED register_t __cdecl internal_6ac16a0()
{
    __asm
    {
        sub esp, 0x400
        push esi
        mov esi, dword ptr ss : [esp+0x408]
        test esi, esi
        jge public_6ac16f8
        mov eax, dword ptr ss : [esp+0x410]
        mov ecx, dword ptr ss : [esp+0x40C]
        push edi
        push eax
        push ecx
        push esi
        lea edx, ss:[esp+0x14]
/*FIXUP push offset public_6ada244 @0x6ac16c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada244
        push edx
        call dword ptr ds : [public_6ada1a8]
        lea edi, ss:[esp+0x1C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x14
        repne scasb
        mov ax, word ptr ds : [public_6ada240]
        lea ecx, ss:[esp+8]
        push ecx
        mov word ptr ds : [edi-1], ax
        call dword ptr ds : [public_6ada018]
        pop edi
        public_6ac16f8 : nop
        xor eax, eax
        test esi, esi
        setl al
        pop esi
        add esp, 0x400
        ret 
        UNREACHABLE_TRAP(0x6ac16a0)
    }
}

#undef public_6ac16f8
