#include "Content-PCH.h"


#define public_6f99ec0 _public_6f99ec0
#define public_6f99ed7 _public_6f99ed7

PROC_DECLARE(0x6f99ea0, internal_6f99ea0, public_6f99ea0);
extern "C" NAKED register_t __cdecl internal_6f99ea0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        sub esp, 0x400
        push edi
        xor edi, edi
        cmp eax, ecx
        je public_6f99ed7
        push esi
        lea esi, ss:[esp+8]
        mov edi, ecx
        sub esi, eax
        sub edi, eax
        mov edi, edi
        public_6f99ec0 : nop
        cmp byte ptr ds : [eax], 0
        sete dl
        dec dl
        and dl, 0xE
        add dl, 0x46
        mov byte ptr ds : [esi+eax], dl
        inc eax
        cmp eax, ecx
        jne public_6f99ec0
        pop esi
        public_6f99ed7 : nop
        mov ecx, dword ptr ss : [esp+0x408]
        lea eax, ss:[esp+4]
        push eax
/*FIXUP push offset public_6fbcf50 @0x6f99ee3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf50
        push ecx
        mov byte ptr ss : [esp+edi+0x10], 0
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        pop edi
        add esp, 0x400
        ret 4
        UNREACHABLE_TRAP(0x6f99ea0)
    }
}

#undef public_6f99ec0
#undef public_6f99ed7
