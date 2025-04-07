#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f39e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f45400);
CLANG_FORWARD_PROC_SYMBOL(public_6f457d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f467d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f39e80 _public_6f39e80
#define public_6f39eb0 _public_6f39eb0
#define public_6f39ecf _public_6f39ecf
#define public_6f39ef4 _public_6f39ef4
#define public_6f39ef8 _public_6f39ef8
#define public_6f39f18 _public_6f39f18

PROC_DECLARE(0x6f39e70, internal_6f39e70, public_6f39e70);
extern "C" NAKED register_t __cdecl internal_6f39e70()
{
    __asm
    {
        mov ecx, offset public_6fd0974
        jmp public_6f39e80
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f39e80 : nop
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
        je public_6f39ef4
        mov ecx, eax
        cmp eax, ecx
        jne public_6f39ef4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f39ecf
        nop 
        lea esp, ss:[esp]
        public_6f39eb0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f457d0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f39eb0
        public_6f39ecf : nop
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
        jmp public_6f39f18
        public_6f39ef4 : nop
        cmp eax, edi
        je public_6f39f18
        public_6f39ef8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f467d0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f45400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f39ef8
        public_6f39f18 : nop
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
        UNREACHABLE_TRAP(0x6f39e70)
    }
}

#undef public_6f39e80
#undef public_6f39eb0
#undef public_6f39ecf
#undef public_6f39ef4
#undef public_6f39ef8
#undef public_6f39f18
