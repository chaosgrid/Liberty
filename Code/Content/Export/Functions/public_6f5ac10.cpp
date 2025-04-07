#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ac10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5b000);
CLANG_FORWARD_PROC_SYMBOL(public_6f5beb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf870);

#define public_6f5ac76 _public_6f5ac76
#define public_6f5acd1 _public_6f5acd1
#define public_6f5adf9 _public_6f5adf9
#define public_6f5ae79 _public_6f5ae79

PROC_DECLARE(0x6f5ac10, internal_6f5ac10, public_6f5ac10);
extern "C" NAKED register_t __cdecl internal_6f5ac10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf870 @0x6f5ac12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf870
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x78
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x48], al
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov edi, dword ptr ss : [esp+0xA0]
        mov esi, dword ptr ds : [public_6fd0e58]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], eax
        cmp esi, dword ptr ds : [public_6fd0e5c]
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x30], ecx
        je public_6f5acd1
        public_6f5ac76 : nop
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        call public_6eeaee0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6f5aeb0
        fmul dword ptr ss : [esp+0x24]
        add esp, 0x10
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6f5ae79
        mov eax, dword ptr ds : [public_6fd0e5c]
        add esi, 0x10
        cmp esi, eax
        jne public_6f5ac76
        public_6f5acd1 : nop
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x38], dl
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x28], cl
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x7C], edx
        mov dword ptr ss : [esp+0x80], eax
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x8C], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        push edi
        mov byte ptr ss : [esp+0xA8], 3
        mov dword ptr ss : [esp+0x90], 0x3F800000
        mov dword ptr ss : [esp+0x80], 0x3F800000
        mov dword ptr ss : [esp+0x70], 0x3F800000
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x74], 0
        call public_6f5b000
        mov ecx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        push eax
        push eax
        call public_6f6a640
        mov edx, dword ptr ss : [esp+0x54]
        add esp, 0x24
        mov esi, eax
        push edx
        push esi
        lea ecx, ss:[esp+0x30]
        call public_6ea1490
        cmp byte ptr ss : [esp+0x13], bl
        mov dword ptr ss : [esp+0x30], esi
        jne public_6f5adf9
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0xA0]
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        push edi
        mov ecx, ebp
        call public_6f5beb0
        public_6f5adf9 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x98], 1
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x98], bl
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        public_6f5ae79 : nop
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x88]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x84
        ret 0xC
        UNREACHABLE_TRAP(0x6f5ac10)
    }
}

#undef public_6f5ac76
#undef public_6f5acd1
#undef public_6f5adf9
#undef public_6f5ae79
