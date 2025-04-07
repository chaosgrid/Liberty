#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280240);
CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62f0cc0 _public_62f0cc0
#define public_62f0ce7 _public_62f0ce7
#define public_62f0d09 _public_62f0d09
#define public_62f0d10 _public_62f0d10
#define public_62f0d30 _public_62f0d30

PROC_DECLARE(0x62f0c90, internal_62f0c90, public_62f0c90);
extern "C" NAKED register_t __cdecl internal_62f0c90()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        lea esi, ds:[ecx+0x48]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_62f0d09
        mov ecx, eax
        cmp eax, ecx
        jne public_62f0d09
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62f0ce7
        lea esp, ss:[esp]
        public_62f0cc0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fc380
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6280240
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62f0cc0
        public_62f0ce7 : nop
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
        public_62f0d09 : nop
        cmp eax, edi
        je public_62f0d30
        lea ecx, ds:[ecx]
        public_62f0d10 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6319b80
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_62fbfa0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_62f0d10
        public_62f0d30 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f0c90)
    }
}

#undef public_62f0cc0
#undef public_62f0ce7
#undef public_62f0d09
#undef public_62f0d10
#undef public_62f0d30
