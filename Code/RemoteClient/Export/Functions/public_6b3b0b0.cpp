#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b730);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b740);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bae0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3bef0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a783);

#define public_6b3b0f0 _public_6b3b0f0
#define public_6b3b111 _public_6b3b111
#define public_6b3b11a _public_6b3b11a
#define public_6b3b130 _public_6b3b130
#define public_6b3b147 _public_6b3b147
#define public_6b3b194 _public_6b3b194
#define public_6b3b198 _public_6b3b198
#define public_6b3b1bc _public_6b3b1bc

PROC_DECLARE(0x6b3b0b0, internal_6b3b0b0, public_6b3b0b0);
extern "C" NAKED register_t __cdecl internal_6b3b0b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a783 @0x6b3b0b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a783
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp], offset public_6b6bf70
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6b3b147
        public_6b3b0f0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, ebx
        je public_6b3b130
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6b3b11a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6b3b111
        cmp cl, 0xFF
        je public_6b3b111
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6b3b11a
        public_6b3b111 : nop
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3b11a : nop
        push esi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        public_6b3b130 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [eax+0x10], ebx
        call public_6b3bef0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6b3b0f0
        public_6b3b147 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x14], eax
        je public_6b3b194
        mov ecx, eax
        cmp eax, ecx
        jne public_6b3b194
        cmp edi, edi
        jne public_6b3b194
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6b3beb0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6b3b730
        jmp public_6b3b1bc
        public_6b3b194 : nop
        cmp eax, edi
        je public_6b3b1bc
        public_6b3b198 : nop
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6b3b6a0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6b3bae0
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6b3b198
        public_6b3b1bc : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x3C], bl
        call public_6b3b740
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6b6a092
        add esp, 8
        mov ecx, ebp
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6b39e50
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6b3b0b0)
    }
}

#undef public_6b3b0f0
#undef public_6b3b111
#undef public_6b3b11a
#undef public_6b3b130
#undef public_6b3b147
#undef public_6b3b194
#undef public_6b3b198
#undef public_6b3b1bc
