#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712480);

#define public_671249b _public_671249b
#define public_67124a5 _public_67124a5
#define public_67124cd _public_67124cd

PROC_DECLARE(0x6712480, internal_6712480, public_6712480);
extern "C" NAKED register_t __cdecl internal_6712480()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        je public_67124cd
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [public_6717010]
        test eax, eax
        je public_671249b
        push eax
        call edi
        public_671249b : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_67124a5
        push eax
        call edi
        public_67124a5 : nop
        push 0
        call dword ptr ds : [public_6717020]
        mov dword ptr ds : [esi+4], eax
        lea eax, ds:[esi+0xC]
        push eax
        call dword ptr ds : [public_6717014]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov dword ptr ds : [esi+8], eax
        call dword ptr ds : [public_671701c]
        mov byte ptr ds : [esi+0x48], 0
        pop edi
        public_67124cd : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712480)
    }
}

#undef public_671249b
#undef public_67124a5
#undef public_67124cd
