#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62fbe10);
CLANG_FORWARD_PROC_SYMBOL(public_62fce30);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fbe38 _public_62fbe38
#define public_62fbe57 _public_62fbe57
#define public_62fbe79 _public_62fbe79
#define public_62fbe80 _public_62fbe80
#define public_62fbea0 _public_62fbea0

PROC_DECLARE(0x62fbe10, internal_62fbe10, public_62fbe10);
extern "C" NAKED register_t __cdecl internal_62fbe10()
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
        je public_62fbe79
        mov ecx, eax
        cmp eax, ecx
        jne public_62fbe79
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62fbe57
        public_62fbe38 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fce30
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62fbe38
        public_62fbe57 : nop
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
        public_62fbe79 : nop
        cmp eax, edi
        je public_62fbea0
        lea ecx, ds:[ecx]
        public_62fbe80 : nop
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
        jne public_62fbe80
        public_62fbea0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62fbe10)
    }
}

#undef public_62fbe38
#undef public_62fbe57
#undef public_62fbe79
#undef public_62fbe80
#undef public_62fbea0
