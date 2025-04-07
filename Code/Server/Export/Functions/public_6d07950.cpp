#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07950);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_JUMP_SYMBOL(public_6d616b9);

#define public_6d079ac _public_6d079ac
#define public_6d07a46 _public_6d07a46
#define public_6d07a50 _public_6d07a50
#define public_6d07a60 _public_6d07a60
#define public_6d07af5 _public_6d07af5
#define public_6d07b1d _public_6d07b1d
#define public_6d07b30 _public_6d07b30
#define public_6d07b72 _public_6d07b72

PROC_DECLARE(0x6d07950, internal_6d07950, public_6d07950);
extern "C" NAKED register_t __cdecl internal_6d07950()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d616b9 @0x6d07958*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d616b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d6419c]
        mov eax, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x58]
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
        jne public_6d079ac
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d079ac : nop
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ds:[esi+8]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+0x58]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [esi+0xB0]
        mov dword ptr ds : [edi+4], eax
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
        mov edx, dword ptr ds : [esi+0x104]
        mov dword ptr ds : [edi+0x10], edx
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
        jle public_6d07a60
        sub ecx, eax
        lea edx, ds:[eax+0x10]
        mov dword ptr ss : [esp+0x60], ecx
        jmp public_6d07a50
        public_6d07a46 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        lea ebx, ds:[ebx]
        public_6d07a50 : nop
        mov ecx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        inc ebp
        add edx, 4
        cmp ebp, ecx
        jl public_6d07a46
        public_6d07a60 : nop
        mov edx, dword ptr ds : [esi+0x13C]
        mov dword ptr ds : [edi+0x48], edx
        mov eax, dword ptr ds : [esi+0x160]
        mov dword ptr ds : [edi+0xC], eax
        mov al, byte ptr ds : [esi+0x1A8]
        mov byte ptr ds : [edi+0xAD], al
        mov al, byte ptr ds : [esi+0x1A9]
        mov ecx, esi
        mov byte ptr ds : [edi+0xAC], al
        call dword ptr ds : [public_6d641f4]
        call public_6d60150
        mov dword ptr ds : [edi+0x68], eax
        mov al, byte ptr ss : [esp+0x60]
        push 0x14
        mov byte ptr ss : [esp+0x34], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x3C], bl
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        push 0x100
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x58], ebx
        call dword ptr ds : [public_6d64204]
        mov ebp, dword ptr ds : [public_6d6428c]
        lea ecx, ss:[esp+0x20]
        add esi, 0xE4
        push ecx
        mov ecx, esi
        call ebp
        cmp eax, ebx
        je public_6d07b1d
        public_6d07af5 : nop
        mov edx, dword ptr ds : [eax]
        mov di, word ptr ds : [eax+8]
        push ebx
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_6d641ec]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6d07af5
        public_6d07b1d : nop
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        pop ebp
        je public_6d07b72
        public_6d07b30 : nop
        push ebx
        lea ecx, ss:[esp+0x5C]
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push ecx
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x64], eax
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
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x34], ecx
        jne public_6d07b30
        mov edi, dword ptr ss : [esp+0x30]
        public_6d07b72 : nop
        push edi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x6d07950)
    }
}

#undef public_6d079ac
#undef public_6d07a46
#undef public_6d07a50
#undef public_6d07a60
#undef public_6d07af5
#undef public_6d07b1d
#undef public_6d07b30
#undef public_6d07b72
