#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4fe00);
CLANG_FORWARD_PROC_SYMBOL(public_6b50210);
CLANG_FORWARD_PROC_SYMBOL(public_6b50470);
CLANG_FORWARD_PROC_SYMBOL(public_6b508a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b50c70);
CLANG_FORWARD_PROC_SYMBOL(public_6b50e30);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4fe10 _public_6b4fe10
#define public_6b4fe40 _public_6b4fe40
#define public_6b4fe68 _public_6b4fe68
#define public_6b4fe8d _public_6b4fe8d
#define public_6b4fe91 _public_6b4fe91
#define public_6b4feb1 _public_6b4feb1

PROC_DECLARE(0x6b4fe00, internal_6b4fe00, public_6b4fe00);
extern "C" NAKED register_t __cdecl internal_6b4fe00()
{
    __asm
    {
        mov ecx, offset public_6b73f34
        jmp public_6b4fe10
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6b4fe10 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6b4fe8d
        mov ecx, eax
        cmp eax, ecx
        jne public_6b4fe8d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6b4fe68
        nop 
        lea esp, ss:[esp]
        public_6b4fe40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6b508a0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6b50e30
        push ebx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6b4fe40
        public_6b4fe68 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6b50210
        jmp public_6b4feb1
        public_6b4fe8d : nop
        cmp eax, edi
        je public_6b4feb1
        public_6b4fe91 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6b50c70
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6b50470
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6b4fe91
        public_6b4feb1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6b6a092
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6b4fe00)
    }
}

#undef public_6b4fe10
#undef public_6b4fe40
#undef public_6b4fe68
#undef public_6b4fe8d
#undef public_6b4fe91
#undef public_6b4feb1
