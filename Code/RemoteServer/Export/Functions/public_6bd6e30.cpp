#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd6e47 _public_6bd6e47
#define public_6bd6e70 _public_6bd6e70
#define public_6bd6e82 _public_6bd6e82

PROC_DECLARE(0x6bd6e30, internal_6bd6e30, public_6bd6e30);
extern "C" NAKED register_t __cdecl internal_6bd6e30()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        lea eax, ds:[ebp*4]
        test eax, eax
        push edi
        mov esi, ecx
        jge public_6bd6e47
        xor eax, eax
        public_6bd6e47 : nop
        push eax
        call public_6c09d26
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, ebp
        shr eax, 2
        lea ebx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 4
        add esp, 4
        cmp ecx, eax
        mov edx, ebx
        je public_6bd6e82
        lea esp, ss:[esp]
        public_6bd6e70 : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6bd6e70
        mov ebp, dword ptr ss : [esp+0x14]
        public_6bd6e82 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push ecx
        call public_6c09aaa
        add esp, 4
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        mov dword ptr ds : [esi+0x28], ebp
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bd6e30)
    }
}

#undef public_6bd6e47
#undef public_6bd6e70
#undef public_6bd6e82
