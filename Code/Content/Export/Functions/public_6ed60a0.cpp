#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed60a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed60be _public_6ed60be
#define public_6ed60c0 _public_6ed60c0
#define public_6ed60f0 _public_6ed60f0
#define public_6ed610f _public_6ed610f
#define public_6ed6134 _public_6ed6134
#define public_6ed6138 _public_6ed6138
#define public_6ed6158 _public_6ed6158

PROC_DECLARE(0x6ed60a0, internal_6ed60a0, public_6ed60a0);
extern "C" NAKED register_t __cdecl internal_6ed60a0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcf0f8]
        mov al, 2
        test al, cl
        jne public_6ed60be
        or cl, al
        mov byte ptr ds : [public_6fcf0f8], cl
        mov ecx, offset public_6fcf0e0
        jmp public_6ed60c0
        public_6ed60be : nop
        ret 
        nop 
        public_6ed60c0 : nop
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
        je public_6ed6134
        mov ecx, eax
        cmp eax, ecx
        jne public_6ed6134
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ed610f
        nop 
        lea esp, ss:[esp]
        public_6ed60f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eed2a0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ed60f0
        public_6ed610f : nop
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
        call public_6f1df30
        jmp public_6ed6158
        public_6ed6134 : nop
        cmp eax, edi
        je public_6ed6158
        public_6ed6138 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ed6138
        public_6ed6158 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ed60a0)
    }
}

#undef public_6ed60be
#undef public_6ed60c0
#undef public_6ed60f0
#undef public_6ed610f
#undef public_6ed6134
#undef public_6ed6138
#undef public_6ed6158
