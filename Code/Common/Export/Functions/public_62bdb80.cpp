#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62bea50);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bdb95 _public_62bdb95
#define public_62bdba2 _public_62bdba2
#define public_62bdbb3 _public_62bdbb3
#define public_62bdbd6 _public_62bdbd6
#define public_62bdbf5 _public_62bdbf5
#define public_62bdc17 _public_62bdc17
#define public_62bdc20 _public_62bdc20
#define public_62bdc40 _public_62bdc40

PROC_DECLARE(0x62bdb80, internal_62bdb80, public_62bdb80);
extern "C" NAKED register_t __cdecl internal_62bdb80()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_62bdbb3
        public_62bdb95 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_62bdba2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_62bdba2 : nop
        lea ecx, ss:[esp+0xC]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, esi
        jne public_62bdb95
        public_62bdbb3 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        test ecx, ecx
        lea esi, ds:[edi+0x10]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62bdc17
        mov ecx, eax
        cmp eax, ecx
        jne public_62bdc17
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62bdbf5
        public_62bdbd6 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_62bea50
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62bdbd6
        public_62bdbf5 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_62bdc17 : nop
        cmp eax, edi
        je public_62bdc40
        nop 
        lea esp, ss:[esp]
        public_62bdc20 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62bdc20
        public_62bdc40 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62bdb80)
    }
}

#undef public_62bdb95
#undef public_62bdba2
#undef public_62bdbb3
#undef public_62bdbd6
#undef public_62bdbf5
#undef public_62bdc17
#undef public_62bdc20
#undef public_62bdc40
