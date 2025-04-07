#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2a30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3830);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa058);

#define public_6eb2aa1 _public_6eb2aa1
#define public_6eb2aa5 _public_6eb2aa5
#define public_6eb2ac9 _public_6eb2ac9

PROC_DECLARE(0x6eb2a30, internal_6eb2a30, public_6eb2a30);
extern "C" NAKED register_t __cdecl internal_6eb2a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa058 @0x6eb2a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa058
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+8]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6eb2aa1
        mov ecx, eax
        cmp eax, ecx
        jne public_6eb2aa1
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6eb3830
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6eb2ac9
        public_6eb2aa1 : nop
        cmp eax, edi
        je public_6eb2ac9
        public_6eb2aa5 : nop
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f4d6b0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_6f30b60
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6eb2aa5
        public_6eb2ac9 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        mov dword ptr ss : [ebp], offset public_6fb385c
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6eb2a30)
    }
}

#undef public_6eb2aa1
#undef public_6eb2aa5
#undef public_6eb2ac9
