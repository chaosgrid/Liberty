#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52580);

#define public_6f52595 _public_6f52595
#define public_6f525b4 _public_6f525b4

PROC_DECLARE(0x6f52580, internal_6f52580, public_6f52580);
extern "C" NAKED register_t __cdecl internal_6f52580()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0xC]
        test byte ptr ds : [eax+0xC], 0x10
        je public_6f52595
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6f52595 : nop
        push eax
        push 0x100
        lea esi, ds:[edi+0x14]
        push 1
        push esi
        call dword ptr ds : [public_6f5a0e4]
        add esp, 0x10
        test eax, eax
        jne public_6f525b4
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        public_6f525b4 : nop
        dec eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], esi
        xor eax, eax
        mov al, byte ptr ds : [esi]
        inc esi
        mov dword ptr ds : [edi+4], esi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52580)
    }
}

#undef public_6f52595
#undef public_6f525b4
