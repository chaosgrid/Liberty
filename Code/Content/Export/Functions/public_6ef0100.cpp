#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0100);
CLANG_FORWARD_PROC_SYMBOL(public_6f890f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6ef0130 _public_6ef0130
#define public_6ef0177 _public_6ef0177
#define public_6ef0182 _public_6ef0182
#define public_6ef0184 _public_6ef0184
#define public_6ef01a5 _public_6ef01a5
#define public_6ef01b0 _public_6ef01b0
#define public_6ef01c6 _public_6ef01c6

PROC_DECLARE(0x6ef0100, internal_6ef0100, public_6ef0100);
extern "C" NAKED register_t __cdecl internal_6ef0100()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x240]
        mov eax, dword ptr ds : [eax+0x80]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6ef01c6
        push esi
        push edi
        lea edi, ss:[ebp+0x1B0]
        lea esi, ss:[ebp+0x26C]
        nop 
        lea esp, ss:[esp]
        public_6ef0130 : nop
        mov eax, dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        push eax
        mov dword ptr ds : [eax+0xC], ebp
        call public_6f890f0
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        lea ecx, ds:[edx+0x10]
        call dword ptr ds : [public_6fb3130]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef0182
        mov edx, dword ptr ss : [esp+0x14]
        public_6ef0177 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef0184
        add eax, 4
        cmp eax, ecx
        jne public_6ef0177
        public_6ef0182 : nop
        mov eax, ecx
        public_6ef0184 : nop
        cmp eax, ecx
        jne public_6ef01b0
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6ef01b0
        mov edx, dword ptr ss : [esp+0x14]
        public_6ef01a5 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef01b0
        add eax, 4
        cmp eax, ecx
        jne public_6ef01a5
        public_6ef01b0 : nop
        mov eax, dword ptr ss : [ebp+0x240]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [eax+0x80]
        jne public_6ef0130
        pop edi
        pop esi
        public_6ef01c6 : nop
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ef0100)
    }
}

#undef public_6ef0130
#undef public_6ef0177
#undef public_6ef0182
#undef public_6ef0184
#undef public_6ef01a5
#undef public_6ef01b0
#undef public_6ef01c6
