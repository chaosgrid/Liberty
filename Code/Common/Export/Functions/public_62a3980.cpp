#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a39c0 _public_62a39c0
#define public_62a39d2 _public_62a39d2
#define public_62a39d8 _public_62a39d8
#define public_62a3a07 _public_62a3a07
#define public_62a3a10 _public_62a3a10
#define public_62a3a25 _public_62a3a25
#define public_62a3a3c _public_62a3a3c
#define public_62a3a51 _public_62a3a51
#define public_62a3a55 _public_62a3a55

PROC_DECLARE(0x62a3980, internal_62a3980, public_62a3980);
extern "C" NAKED register_t __cdecl internal_62a3980()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        push ebp
        mov dword ptr ds : [ecx+4], edx
        lea edx, ds:[eax+8]
        lea ebp, ds:[ecx+8]
        cmp ebp, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_62a3a55
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edx
        je public_62a39d2
        lea esp, ss:[esp]
        public_62a39c0 : nop
        cmp ebx, edx
        je public_62a39d2
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_62a39c0
        public_62a39d2 : nop
        cmp eax, esi
        mov edi, eax
        je public_62a3a07
        public_62a39d8 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_62a39d8
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        public_62a3a07 : nop
        cmp ebx, edx
        je public_62a3a51
        nop 
        lea esp, ss:[esp]
        public_62a3a10 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62a3a25
        mov edi, eax
        public_62a3a25 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62a3a3c
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_62a3a3c : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62a3a10
        mov ecx, dword ptr ss : [esp+0x14]
        public_62a3a51 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_62a3a55 : nop
        mov eax, dword ptr ds : [eax+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+0x14], eax
        mov eax, ecx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62a3980)
    }
}

#undef public_62a39c0
#undef public_62a39d2
#undef public_62a39d8
#undef public_62a3a07
#undef public_62a3a10
#undef public_62a3a25
#undef public_62a3a3c
#undef public_62a3a51
#undef public_62a3a55
