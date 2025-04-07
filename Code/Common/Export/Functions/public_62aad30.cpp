#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_62aad30);

#define public_62aad42 _public_62aad42
#define public_62aad64 _public_62aad64
#define public_62aad71 _public_62aad71
#define public_62aad85 _public_62aad85
#define public_62aadab _public_62aadab

PROC_DECLARE(0x62aad30, internal_62aad30, public_62aad30);
extern "C" NAKED register_t __cdecl internal_62aad30()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x184]
        cmp esi, dword ptr ds : [edi+0x188]
        je public_62aad71
        public_62aad42 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_62aad64
        push eax
        call public_627dc80
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        public_62aad64 : nop
        mov eax, dword ptr ds : [edi+0x188]
        add esi, 0x10
        cmp esi, eax
        jne public_62aad42
        public_62aad71 : nop
        mov edx, dword ptr ds : [edi+0x188]
        mov ecx, dword ptr ds : [edi+0x184]
        mov eax, edx
        cmp eax, edx
        je public_62aadab
        push ebx
        push ebp
        public_62aad85 : nop
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        add ecx, 0x10
        cmp eax, edx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_62aad85
        pop ebp
        pop ebx
        public_62aadab : nop
        mov dword ptr ds : [edi+0x188], ecx
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62aad30)
    }
}

#undef public_62aad42
#undef public_62aad64
#undef public_62aad71
#undef public_62aad85
#undef public_62aadab
