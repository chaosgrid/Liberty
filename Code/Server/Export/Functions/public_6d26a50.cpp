#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d26a50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d26a70 _public_6d26a70
#define public_6d26a87 _public_6d26a87
#define public_6d26aa2 _public_6d26aa2
#define public_6d26ac4 _public_6d26ac4
#define public_6d26ad5 _public_6d26ad5
#define public_6d26aec _public_6d26aec
#define public_6d26b07 _public_6d26b07
#define public_6d26b29 _public_6d26b29

PROC_DECLARE(0x6d26a50, internal_6d26a50, public_6d26a50);
extern "C" NAKED register_t __cdecl internal_6d26a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test ah, ah
        mov eax, dword ptr ds : [esi]
        jns public_6d26ac4
        test eax, eax
        je public_6d26a70
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d26aa2
        public_6d26a70 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], 0xC
        jae public_6d26a87
        lea eax, ss:[esp+0xC]
        public_6d26a87 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d26aa2 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d26b29
        mov dword ptr ds : [eax], offset public_6d692ec
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d26ac4 : nop
        test eax, eax
        je public_6d26ad5
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0xC
        cmp edx, eax
        jbe public_6d26b07
        public_6d26ad5 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], 0xC
        jae public_6d26aec
        lea eax, ss:[esp+0xC]
        public_6d26aec : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d26b07 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d26b29
        mov dword ptr ds : [eax], offset public_6d692c4
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d26b29 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d26a50)
    }
}

#undef public_6d26a70
#undef public_6d26a87
#undef public_6d26aa2
#undef public_6d26ac4
#undef public_6d26ad5
#undef public_6d26aec
#undef public_6d26b07
#undef public_6d26b29
