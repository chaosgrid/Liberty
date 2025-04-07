#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62fbcd0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcdb0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fbcf8 _public_62fbcf8
#define public_62fbd17 _public_62fbd17
#define public_62fbd39 _public_62fbd39
#define public_62fbd40 _public_62fbd40
#define public_62fbd60 _public_62fbd60

PROC_DECLARE(0x62fbcd0, internal_62fbcd0, public_62fbcd0);
extern "C" NAKED register_t __cdecl internal_62fbcd0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_62fbd39
        mov ecx, eax
        cmp eax, ecx
        jne public_62fbd39
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62fbd17
        public_62fbcf8 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fcdb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62fbcf8
        public_62fbd17 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_62fbd39 : nop
        cmp eax, edi
        je public_62fbd60
        lea ecx, ds:[ecx]
        public_62fbd40 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_62fbd40
        public_62fbd60 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62fbcd0)
    }
}

#undef public_62fbcf8
#undef public_62fbd17
#undef public_62fbd39
#undef public_62fbd40
#undef public_62fbd60
