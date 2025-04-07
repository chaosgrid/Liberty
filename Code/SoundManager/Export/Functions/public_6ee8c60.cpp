#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8c60);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d7a);

#define public_6ee8ca0 _public_6ee8ca0
#define public_6ee8cc4 _public_6ee8cc4
#define public_6ee8cc8 _public_6ee8cc8
#define public_6ee8ccd _public_6ee8ccd
#define public_6ee8ce1 _public_6ee8ce1

PROC_DECLARE(0x6ee8c60, internal_6ee8c60, public_6ee8c60);
extern "C" NAKED register_t __cdecl internal_6ee8c60()
{
    __asm
    {
        sub esp, 0x398
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x3A8]
        test edi, edi
        je public_6ee8ce1
        cmp dword ptr ds : [edi], 0
        je public_6ee8ce1
        mov ebp, dword ptr ss : [esp+0x3A4]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x14], 0x398
        call public_6ee8d7a
        test eax, eax
        jne public_6ee8ce1
        mov eax, dword ptr ds : [edi]
        push ebx
        push esi
        lea esi, ss:[esp+0x58]
        public_6ee8ca0 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ee8cc8
        test cl, cl
        je public_6ee8cc4
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ee8cc8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ee8ca0
        public_6ee8cc4 : nop
        xor eax, eax
        jmp public_6ee8ccd
        public_6ee8cc8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ee8ccd : nop
        test eax, eax
        pop esi
        pop ebx
        jne public_6ee8ce1
        mov dword ptr ds : [edi+4], ebp
        pop edi
        pop ebp
        add esp, 0x398
        ret 0xC
        public_6ee8ce1 : nop
        pop edi
        mov eax, 1
        pop ebp
        add esp, 0x398
        ret 0xC
        UNREACHABLE_TRAP(0x6ee8c60)
    }
}

#undef public_6ee8ca0
#undef public_6ee8cc4
#undef public_6ee8cc8
#undef public_6ee8ccd
#undef public_6ee8ce1
