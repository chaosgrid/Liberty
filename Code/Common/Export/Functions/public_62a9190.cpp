#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62858e0);
CLANG_FORWARD_PROC_SYMBOL(public_629b110);
CLANG_FORWARD_PROC_SYMBOL(public_629b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b970);
CLANG_FORWARD_PROC_SYMBOL(public_62a1230);
CLANG_FORWARD_PROC_SYMBOL(public_62a1680);
CLANG_FORWARD_PROC_SYMBOL(public_62a9190);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d2530);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393f82);

#define public_62a91f0 _public_62a91f0
#define public_62a9207 _public_62a9207
#define public_62a9227 _public_62a9227

PROC_DECLARE(0x62a9190, internal_62a9190, public_62a9190);
extern "C" NAKED register_t __cdecl internal_62a9190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393f82 @0x62a9192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393f82
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_639be5c
        xor ebx, ebx
        push ebx
        push esi
        mov dword ptr ss : [esp+0x34], 3
        call public_62858e0
        add esp, 8
        lea ecx, ss:[esp+0x14]
        call public_629b970
        lea eax, ss:[esp+0x14]
        lea edi, ds:[esi+0xE4]
        push eax
        mov ecx, edi
        call public_629b440
        cmp eax, ebx
        je public_62a9207
        nop 
        lea esp, ss:[esp]
        public_62a91f0 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_629b440
        cmp eax, ebx
        jne public_62a91f0
        public_62a9207 : nop
        mov ebp, dword ptr ds : [esi+0x194]
        cmp ebp, ebx
        je public_62a9227
        mov ecx, ebp
        call public_62d2530
        push ebp
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x194], ebx
        public_62a9227 : nop
        mov ecx, edi
        call public_629b2b0
        lea ebp, ds:[esi+0x144]
        mov ecx, ebp
        call public_62a1680
        mov eax, dword ptr ds : [esi+0x184]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [esi+0x184], ebx
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x18C], ebx
        mov byte ptr ss : [esp+0x2C], 1
        call public_62a1230
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], bl
        call public_629b110
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_62b5980
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62a9190)
    }
}

#undef public_62a91f0
#undef public_62a9207
#undef public_62a9227
