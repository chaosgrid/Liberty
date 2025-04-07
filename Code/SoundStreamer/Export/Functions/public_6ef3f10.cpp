#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3f10);
CLANG_FORWARD_PROC_SYMBOL(public_6ef402a);

#define public_6ef3f50 _public_6ef3f50
#define public_6ef3f74 _public_6ef3f74
#define public_6ef3f78 _public_6ef3f78
#define public_6ef3f7d _public_6ef3f7d
#define public_6ef3f91 _public_6ef3f91

PROC_DECLARE(0x6ef3f10, internal_6ef3f10, public_6ef3f10);
extern "C" NAKED register_t __cdecl internal_6ef3f10()
{
    __asm
    {
        sub esp, 0x398
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x3A8]
        test edi, edi
        je public_6ef3f91
        cmp dword ptr ds : [edi], 0
        je public_6ef3f91
        mov ebp, dword ptr ss : [esp+0x3A4]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x14], 0x398
        call public_6ef402a
        test eax, eax
        jne public_6ef3f91
        mov eax, dword ptr ds : [edi]
        push ebx
        push esi
        lea esi, ss:[esp+0x58]
        public_6ef3f50 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ef3f78
        test cl, cl
        je public_6ef3f74
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ef3f78
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ef3f50
        public_6ef3f74 : nop
        xor eax, eax
        jmp public_6ef3f7d
        public_6ef3f78 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ef3f7d : nop
        test eax, eax
        pop esi
        pop ebx
        jne public_6ef3f91
        mov dword ptr ds : [edi+4], ebp
        pop edi
        pop ebp
        add esp, 0x398
        ret 0xC
        public_6ef3f91 : nop
        pop edi
        mov eax, 1
        pop ebp
        add esp, 0x398
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3f10)
    }
}

#undef public_6ef3f50
#undef public_6ef3f74
#undef public_6ef3f78
#undef public_6ef3f7d
#undef public_6ef3f91
