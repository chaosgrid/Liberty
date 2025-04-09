#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445620);
CLANG_FORWARD_PROC_SYMBOL(public_44fa50);

#define public_445631 _public_445631
#define public_445659 _public_445659
#define public_445666 _public_445666
#define public_445675 _public_445675
#define public_4456b8 _public_4456b8
#define public_4456cc _public_4456cc
#define public_4456ce _public_4456ce

PROC_DECLARE(0x445620, internal_445620, public_445620);
extern "C" NAKED register_t __cdecl internal_445620()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        or ebx, 0xFFFFFFFF
        xor edi, edi
        lea esi, ss:[ebp+0x324]
        public_445631 : nop
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_445659
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_445659
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_445659
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        jne public_4456ce
        public_445659 : nop
        test ebx, ebx
        jge public_445666
        mov al, byte ptr ds : [esi+8]
        test al, al
        jne public_445666
        mov ebx, edi
        public_445666 : nop
        inc edi
        add esi, 0xC
        cmp edi, 5
        jl public_445631
        test ebx, ebx
        jge public_445675
        xor ebx, ebx
        public_445675 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        push eax
        call public_44fa50
        mov edi, eax
        add esp, 8
        cmp edi, 0xFFFFFFFF
        je public_4456cc
        lea ecx, ds:[ebx+ebx*2+0xC9]
        mov eax, dword ptr ss : [ebp+ecx*4]
        test eax, eax
        lea esi, ss:[ebp+ecx*4]
        mov dword ptr ds : [esi+4], edi
        je public_4456b8
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_4456b8 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [public_5c7208]
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [esi+8], 1
        public_4456cc : nop
        mov eax, edi
        public_4456ce : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x445620)
    }
}

#undef public_445631
#undef public_445659
#undef public_445666
#undef public_445675
#undef public_4456b8
#undef public_4456cc
#undef public_4456ce
