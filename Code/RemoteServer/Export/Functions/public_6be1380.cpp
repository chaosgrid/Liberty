#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1380);
CLANG_FORWARD_PROC_SYMBOL(public_6be1970);
CLANG_FORWARD_PROC_SYMBOL(public_6be1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6be1a10);
CLANG_FORWARD_PROC_SYMBOL(public_6be1db0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2180);
CLANG_FORWARD_PROC_SYMBOL(public_6be21c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a673);

#define public_6be13c0 _public_6be13c0
#define public_6be13e1 _public_6be13e1
#define public_6be13ea _public_6be13ea
#define public_6be1400 _public_6be1400
#define public_6be1417 _public_6be1417
#define public_6be1464 _public_6be1464
#define public_6be1468 _public_6be1468
#define public_6be148c _public_6be148c

PROC_DECLARE(0x6be1380, internal_6be1380, public_6be1380);
extern "C" NAKED register_t __cdecl internal_6be1380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a673 @0x6be1382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a673
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
        mov dword ptr ss : [ebp], offset public_6c0bc4c
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6be1417
        public_6be13c0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, ebx
        je public_6be1400
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6be13ea
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6be13e1
        cmp cl, 0xFF
        je public_6be13e1
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6be13ea
        public_6be13e1 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be13ea : nop
        push esi
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6c09aaa
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        public_6be1400 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [eax+0x10], ebx
        call public_6be21c0
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        jne public_6be13c0
        public_6be1417 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+8]
        mov dword ptr ss : [esp+0x14], eax
        je public_6be1464
        mov ecx, eax
        cmp eax, ecx
        jne public_6be1464
        cmp edi, edi
        jne public_6be1464
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call public_6be2180
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
        call public_6be1a00
        jmp public_6be148c
        public_6be1464 : nop
        cmp eax, edi
        je public_6be148c
        public_6be1468 : nop
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6be1970
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6be1db0
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6be1468
        public_6be148c : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x3C], bl
        call public_6be1a10
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c09aaa
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6c09aaa
        add esp, 8
        mov ecx, ebp
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6bda1b0
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6be1380)
    }
}

#undef public_6be13c0
#undef public_6be13e1
#undef public_6be13ea
#undef public_6be1400
#undef public_6be1417
#undef public_6be1464
#undef public_6be1468
#undef public_6be148c
