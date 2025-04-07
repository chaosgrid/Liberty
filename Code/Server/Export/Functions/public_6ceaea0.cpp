#include "Server-PCH.h"


#define public_6ceaec5 _public_6ceaec5
#define public_6ceaec7 _public_6ceaec7
#define public_6ceaef3 _public_6ceaef3
#define public_6ceaf2a _public_6ceaf2a
#define public_6ceaf41 _public_6ceaf41
#define public_6ceaf60 _public_6ceaf60
#define public_6ceaf9d _public_6ceaf9d
#define public_6ceafb0 _public_6ceafb0

PROC_DECLARE(0x6ceaea0, internal_6ceaea0, public_6ceaea0);
extern "C" NAKED register_t __cdecl internal_6ceaea0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        push esi
        push edi
        je public_6ceaec5
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6ceaec5
        mov ebp, eax
        jmp public_6ceaec7
        public_6ceaec5 : nop
        xor ebp, ebp
        public_6ceaec7 : nop
        push 0x1FE3
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [public_6d64204]
        lea edx, ss:[esp+0x1C]
        lea edi, ss:[ebp+0xE4]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d6428c]
        mov esi, eax
        test esi, esi
        je public_6ceaf41
        public_6ceaef3 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x64]
        mov ecx, dword ptr ss : [esp+0x30]
        push eax
        call dword ptr ds : [public_6d642c0]
        test al, al
        je public_6ceaf2a
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 1
        je public_6ceaf2a
        cmp eax, 2
        je public_6ceaf2a
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ebx]
        push eax
        push 1
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x224]
        public_6ceaf2a : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d6428c]
        mov esi, eax
        test esi, esi
        jne public_6ceaef3
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ceaf41 : nop
        lea edx, ss:[esp+0x14]
        lea edi, ss:[ebp+0x144]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 1
        call dword ptr ds : [public_6d64284]
        mov esi, eax
        test esi, esi
        je public_6ceafb0
        nop 
        public_6ceaf60 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+4]
        mov dx, word ptr ds : [ecx+4]
        cmp dx, word ptr ds : [eax+4]
        je public_6ceaf9d
        mov ecx, esi
        call dword ptr ds : [public_6d642bc]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6d642c0]
        test al, al
        je public_6ceaf9d
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ebx]
        push 0
        push ecx
        push 1
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+0x220]
        public_6ceaf9d : nop
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d64284]
        mov esi, eax
        test esi, esi
        jne public_6ceaf60
        public_6ceafb0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6ceaea0)
    }
}

#undef public_6ceaec5
#undef public_6ceaec7
#undef public_6ceaef3
#undef public_6ceaf2a
#undef public_6ceaf41
#undef public_6ceaf60
#undef public_6ceaf9d
#undef public_6ceafb0
