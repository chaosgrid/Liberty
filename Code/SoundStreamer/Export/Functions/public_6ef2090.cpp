#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1040);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2020);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2090);

#define public_6ef20ea _public_6ef20ea
#define public_6ef20ff _public_6ef20ff
#define public_6ef2117 _public_6ef2117
#define public_6ef2137 _public_6ef2137
#define public_6ef217e _public_6ef217e
#define public_6ef2188 _public_6ef2188

PROC_DECLARE(0x6ef2090, internal_6ef2090, public_6ef2090);
extern "C" NAKED register_t __cdecl internal_6ef2090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+0xA4]
        mov ecx, dword ptr ds : [esi+0xA0]
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0xA4], edx
        jb public_6ef2188
        mov al, byte ptr ds : [esi+0x85]
        test al, al
        je public_6ef2117
        mov ecx, esi
        call public_6ef2020
        mov eax, dword ptr ds : [esi+0xA8]
        test eax, eax
        je public_6ef20ea
        mov eax, dword ptr ds : [esi+0xB4]
        mov ecx, dword ptr ds : [esi+0xB0]
        cmp ecx, eax
        sbb al, al
        inc al
        test al, al
        je public_6ef2188
        public_6ef20ea : nop
        mov ecx, dword ptr ds : [esi+0xD0]
        mov eax, 0xFFFFFFFF
        cmp ecx, eax
        je public_6ef20ff
        mov dword ptr ds : [esi+0xD0], eax
        public_6ef20ff : nop
        mov dword ptr ds : [esi+0xA4], 0
        mov dword ptr ds : [esi+0xC8], 0
        pop esi
        ret 4
        public_6ef2117 : nop
        mov eax, dword ptr ds : [esi+0xA8]
        test eax, eax
        je public_6ef2137
        mov eax, dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [esi+0xB0]
        cmp edx, eax
        sbb al, al
        inc al
        test al, al
        je public_6ef217e
        public_6ef2137 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x80], 6
        call public_6ef1040
        mov ecx, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [esi+0xF4], eax
        mov eax, dword ptr ds : [esi+0xF0]
        shr eax, 2
        mov dword ptr ds : [esi+0xF8], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0xFC], eax
        call public_6ef1ee0
        mov dword ptr ds : [esi+0xD0], 0xFFFFFFFF
        pop esi
        ret 4
        public_6ef217e : nop
        mov dword ptr ds : [esi+0xF8], 0xFFFFFFFF
        public_6ef2188 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef2090)
    }
}

#undef public_6ef20ea
#undef public_6ef20ff
#undef public_6ef2117
#undef public_6ef2137
#undef public_6ef217e
#undef public_6ef2188
