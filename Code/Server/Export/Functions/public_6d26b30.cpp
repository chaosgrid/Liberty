#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d26b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d26b50 _public_6d26b50
#define public_6d26b67 _public_6d26b67
#define public_6d26b82 _public_6d26b82
#define public_6d26ba4 _public_6d26ba4
#define public_6d26bb5 _public_6d26bb5
#define public_6d26bcc _public_6d26bcc
#define public_6d26be7 _public_6d26be7
#define public_6d26c09 _public_6d26c09

PROC_DECLARE(0x6d26b30, internal_6d26b30, public_6d26b30);
extern "C" NAKED register_t __cdecl internal_6d26b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test ah, ah
        mov eax, dword ptr ds : [esi]
        jns public_6d26ba4
        test eax, eax
        je public_6d26b50
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0xC
        cmp eax, ecx
        jbe public_6d26b82
        public_6d26b50 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], 0xC
        jae public_6d26b67
        lea eax, ss:[esp+0xC]
        public_6d26b67 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d26b82 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d26c09
        mov dword ptr ds : [eax], offset public_6d6933c
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d26ba4 : nop
        test eax, eax
        je public_6d26bb5
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0xC
        cmp edx, eax
        jbe public_6d26be7
        public_6d26bb5 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xC
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0xC], 0xC
        jae public_6d26bcc
        lea eax, ss:[esp+0xC]
        public_6d26bcc : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d26be7 : nop
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[ecx+esi+8]
        add ecx, 0xC
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        je public_6d26c09
        mov dword ptr ds : [eax], offset public_6d69314
        mov dword ptr ds : [eax+4], 0
        pop esi
        ret 
        public_6d26c09 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d26b30)
    }
}

#undef public_6d26b50
#undef public_6d26b67
#undef public_6d26b82
#undef public_6d26ba4
#undef public_6d26bb5
#undef public_6d26bcc
#undef public_6d26be7
#undef public_6d26c09
