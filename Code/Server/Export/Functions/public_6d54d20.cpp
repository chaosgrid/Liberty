#include "Server-PCH.h"


#define public_6d54d77 _public_6d54d77
#define public_6d54da1 _public_6d54da1
#define public_6d54da8 _public_6d54da8
#define public_6d54dab _public_6d54dab

PROC_DECLARE(0x6d54d20, internal_6d54d20, public_6d54d20);
extern "C" NAKED register_t __cdecl internal_6d54d20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov eax, 0xFFFFFFFE
        jbe public_6d54dab
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d54dab
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        je public_6d54dab
        imul ecx, 0x418
        lea ecx, ds:[ecx+esi-0x1A0]
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d54da8
        mov edi, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [public_6d644bc]
        public_6d54d77 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        jne public_6d54da1
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call ebp
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0xA]
        add esp, 4
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        public_6d54da1 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d54d77
        pop ebp
        public_6d54da8 : nop
        xor eax, eax
        pop ebx
        public_6d54dab : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d54d20)
    }
}

#undef public_6d54d77
#undef public_6d54da1
#undef public_6d54da8
#undef public_6d54dab
