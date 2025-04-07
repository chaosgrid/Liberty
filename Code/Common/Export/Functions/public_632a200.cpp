#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627b110);
CLANG_FORWARD_PROC_SYMBOL(public_632a200);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632cc90);
CLANG_FORWARD_PROC_SYMBOL(public_632d070);
CLANG_FORWARD_PROC_SYMBOL(public_632d710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632a21e _public_632a21e
#define public_632a220 _public_632a220
#define public_632a250 _public_632a250
#define public_632a278 _public_632a278
#define public_632a29d _public_632a29d
#define public_632a2a1 _public_632a2a1
#define public_632a2c1 _public_632a2c1

PROC_DECLARE(0x632a200, internal_632a200, public_632a200);
extern "C" NAKED register_t __cdecl internal_632a200()
{
    __asm
    {
        mov cl, byte ptr ds : [public_640194d]
        mov al, 1
        test al, cl
        jne public_632a21e
        or cl, al
        mov byte ptr ds : [public_640194d], cl
        mov ecx, offset public_6401950
        jmp public_632a220
        public_632a21e : nop
        ret 
        nop 
        public_632a220 : nop
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
        je public_632a29d
        mov ecx, eax
        cmp eax, ecx
        jne public_632a29d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_632a278
        nop 
        lea esp, ss:[esp]
        public_632a250 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_632d070
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_632d710
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_632a250
        public_632a278 : nop
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
        call public_632c410
        jmp public_632a2c1
        public_632a29d : nop
        cmp eax, edi
        je public_632a2c1
        public_632a2a1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_627b110
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_632cc90
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_632a2a1
        public_632a2c1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x632a200)
    }
}

#undef public_632a21e
#undef public_632a220
#undef public_632a250
#undef public_632a278
#undef public_632a29d
#undef public_632a2a1
#undef public_632a2c1
