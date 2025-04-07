#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ae60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d620c4);

#define public_6d1aeb0 _public_6d1aeb0
#define public_6d1aed4 _public_6d1aed4
#define public_6d1aeff _public_6d1aeff
#define public_6d1af15 _public_6d1af15
#define public_6d1af39 _public_6d1af39
#define public_6d1af65 _public_6d1af65
#define public_6d1af71 _public_6d1af71
#define public_6d1af94 _public_6d1af94
#define public_6d1afa0 _public_6d1afa0

PROC_DECLARE(0x6d1ae60, internal_6d1ae60, public_6d1ae60);
extern "C" NAKED register_t __cdecl internal_6d1ae60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d620c4 @0x6d1ae62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d620c4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_6d68a20
        mov dword ptr ss : [esp+0x28], 5
        call public_6d1c1a0
        mov ebp, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ss : [ebp]
        lea edi, ds:[esi+0x5C]
        xor ebx, ebx
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 4
        mov dword ptr ss : [esp+0x10], eax
        je public_6d1aed4
        lea ecx, ds:[ecx]
        public_6d1aeb0 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6d0f620
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6d1aeb0
        public_6d1aed4 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ds : [esi+0x54]
        add esp, 4
        cmp al, bl
        mov byte ptr ss : [esp+0x28], 3
        je public_6d1aeff
        mov ecx, dword ptr ds : [esi+0x58]
        cmp ecx, ebx
        je public_6d1aeff
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d1aeff : nop
        mov ebp, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        lea edi, ds:[esi+0x48]
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6d1af39
        public_6d1af15 : nop
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6d0f620
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_6d1af15
        public_6d1af39 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x3C]
        add esp, 4
        cmp eax, ebx
        je public_6d1af71
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d1af65
        cmp cl, 0xFF
        je public_6d1af65
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1af71
        public_6d1af65 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1af71 : nop
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebx
        je public_6d1afa0
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d1af94
        cmp cl, 0xFF
        je public_6d1af94
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1afa0
        public_6d1af94 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1afa0 : nop
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6d1b6f0
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d1ae60)
    }
}

#undef public_6d1aeb0
#undef public_6d1aed4
#undef public_6d1aeff
#undef public_6d1af15
#undef public_6d1af39
#undef public_6d1af65
#undef public_6d1af71
#undef public_6d1af94
#undef public_6d1afa0
