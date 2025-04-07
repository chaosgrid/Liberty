#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07690);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_JUMP_SYMBOL(public_6d616b9);

#define public_6d076fa _public_6d076fa
#define public_6d077e4 _public_6d077e4
#define public_6d077e8 _public_6d077e8
#define public_6d077f8 _public_6d077f8
#define public_6d078b5 _public_6d078b5
#define public_6d078dd _public_6d078dd
#define public_6d078f0 _public_6d078f0
#define public_6d07932 _public_6d07932

PROC_DECLARE(0x6d07690, internal_6d07690, public_6d07690);
extern "C" NAKED register_t __cdecl internal_6d07690()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d616b9 @0x6d07698*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d616b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64684]
        mov edi, dword ptr ss : [esp+0x5C]
        mov ecx, esi
        mov byte ptr ds : [edi+0xDC], al
        call dword ptr ds : [public_6d6419c]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        lea eax, ds:[esi+0x2C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x4C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [public_6d8da08]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6d076fa
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d076fa : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ds:[esi+8]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+0x58]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0xB8]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0xC4]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [edi+4], ecx
        lea eax, ds:[edi+0x70]
        mov dword ptr ds : [edi+0x6C], ebx
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xAC]
        lea ecx, ds:[edi+0x80]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d64680]
        mov edx, dword ptr ds : [esi+0x29C]
        mov dword ptr ds : [edi+0xD0], edx
        mov eax, dword ptr ds : [esi+0x104]
        mov dword ptr ds : [edi+0x10], eax
        mov edx, dword ptr ds : [esi+0x108]
        lea ecx, ds:[esi+0x108]
        lea eax, ds:[edi+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        xor ebp, ebp
        cmp edx, ebx
        mov dword ptr ds : [eax+0x30], edx
        jle public_6d077f8
        sub ecx, eax
        lea edx, ds:[eax+0x10]
        mov dword ptr ss : [esp+0x64], ecx
        jmp public_6d077e8
        public_6d077e4 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        public_6d077e8 : nop
        mov ecx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        inc ebp
        add edx, 4
        cmp ebp, ecx
        jl public_6d077e4
        public_6d077f8 : nop
        mov edx, dword ptr ds : [esi+0x13C]
        mov dword ptr ds : [edi+0x48], edx
        mov eax, dword ptr ds : [esi+0x21C]
        mov dword ptr ds : [edi+0xB0], eax
        mov eax, dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [edi+0xAC], eax
        mov eax, dword ptr ds : [esi+0x160]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x1B4]
        mov dword ptr ds : [edi+0xD8], ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641f4]
        call public_6d60150
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [edi+0x68], eax
        push edx
        lea eax, ds:[esi+0x104]
        push eax
        call dword ptr ds : [public_6d643a0]
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ss : [esp+0x6C]
        push 0x14
        mov dword ptr ds : [edi+0xB4], eax
        mov byte ptr ss : [esp+0x40], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x40], bl
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        push 0x100
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x5C], ebx
        call dword ptr ds : [public_6d64204]
        mov ebp, dword ptr ds : [public_6d6428c]
        lea edx, ss:[esp+0x24]
        add esi, 0xE4
        push edx
        mov ecx, esi
        call ebp
        cmp eax, ebx
        je public_6d078dd
        public_6d078b5 : nop
        mov edx, dword ptr ds : [eax]
        mov di, word ptr ds : [eax+8]
        push ebx
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6d641ec]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6d078b5
        public_6d078dd : nop
        mov edi, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        pop ebp
        je public_6d07932
        public_6d078f0 : nop
        push ebx
        lea ecx, ss:[esp+0x60]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x68], eax
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x38], ecx
        jne public_6d078f0
        mov edi, dword ptr ss : [esp+0x34]
        public_6d07932 : nop
        push edi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x50]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x6d07690)
    }
}

#undef public_6d076fa
#undef public_6d077e4
#undef public_6d077e8
#undef public_6d077f8
#undef public_6d078b5
#undef public_6d078dd
#undef public_6d078f0
#undef public_6d07932
