#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f29560);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e250);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f580);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f29590 _public_6f29590
#define public_6f295b8 _public_6f295b8
#define public_6f295dd _public_6f295dd
#define public_6f295e1 _public_6f295e1
#define public_6f29601 _public_6f29601

PROC_DECLARE(0x6f29560, internal_6f29560, public_6f29560);
extern "C" NAKED register_t __cdecl internal_6f29560()
{
    __asm
    {
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
        je public_6f295dd
        mov ecx, eax
        cmp eax, ecx
        jne public_6f295dd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f295b8
        nop 
        lea esp, ss:[esp]
        public_6f29590 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2e250
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f2f580
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f29590
        public_6f295b8 : nop
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
        jmp public_6f29601
        public_6f295dd : nop
        cmp eax, edi
        je public_6f29601
        public_6f295e1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f69d00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eed7f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f295e1
        public_6f29601 : nop
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
        UNREACHABLE_TRAP(0x6f29560)
    }
}

#undef public_6f29590
#undef public_6f295b8
#undef public_6f295dd
#undef public_6f295e1
#undef public_6f29601
