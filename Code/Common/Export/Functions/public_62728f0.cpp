#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b520);
CLANG_FORWARD_PROC_SYMBOL(public_62728f0);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6272918 _public_6272918
#define public_6272937 _public_6272937
#define public_6272959 _public_6272959
#define public_6272960 _public_6272960
#define public_6272980 _public_6272980

PROC_DECLARE(0x62728f0, internal_62728f0, public_62728f0);
extern "C" NAKED register_t __cdecl internal_62728f0()
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
        je public_6272959
        mov ecx, eax
        cmp eax, ecx
        jne public_6272959
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6272937
        public_6272918 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_626b520
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6272918
        public_6272937 : nop
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
        public_6272959 : nop
        cmp eax, edi
        je public_6272980
        lea ecx, ds:[ecx]
        public_6272960 : nop
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
        jne public_6272960
        public_6272980 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62728f0)
    }
}

#undef public_6272918
#undef public_6272937
#undef public_6272959
#undef public_6272960
#undef public_6272980
