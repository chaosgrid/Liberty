#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280240);
CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62f0b13 _public_62f0b13
#define public_62f0b2a _public_62f0b2a
#define public_62f0b50 _public_62f0b50
#define public_62f0b77 _public_62f0b77
#define public_62f0b94 _public_62f0b94
#define public_62f0b98 _public_62f0b98
#define public_62f0bb8 _public_62f0bb8
#define public_62f0bd1 _public_62f0bd1

PROC_DECLARE(0x62f0af0, internal_62f0af0, public_62f0af0);
extern "C" NAKED register_t __cdecl internal_62f0af0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x44]
        cmp ecx, 0xFFFFFFFF
        je public_62f0b13
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ss : [ebp+0x44], 0xFFFFFFFF
        public_62f0b13 : nop
        mov eax, dword ptr ss : [ebp+0x40]
        cmp eax, 0xFFFFFFFF
        je public_62f0b2a
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        public_62f0b2a : nop
        mov ecx, dword ptr ss : [ebp+0x58]
        test ecx, ecx
        push ebx
        push esi
        lea esi, ss:[ebp+0x48]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62f0b94
        mov ecx, eax
        cmp eax, ecx
        jne public_62f0b94
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62f0b77
        public_62f0b50 : nop
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
        jne public_62f0b50
        public_62f0b77 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        jmp public_62f0bb8
        public_62f0b94 : nop
        cmp eax, edi
        je public_62f0bb8
        public_62f0b98 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6319b80
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62fbfa0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62f0b98
        public_62f0bb8 : nop
        pop edi
        mov dword ptr ss : [ebp+0x40], 0xFFFFFFFF
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        pop esi
        pop ebx
        je public_62f0bd1
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        public_62f0bd1 : nop
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f0af0)
    }
}

#undef public_62f0b13
#undef public_62f0b2a
#undef public_62f0b50
#undef public_62f0b77
#undef public_62f0b94
#undef public_62f0b98
#undef public_62f0bb8
#undef public_62f0bd1
