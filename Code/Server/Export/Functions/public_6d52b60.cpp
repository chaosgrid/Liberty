#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);
CLANG_FORWARD_PROC_SYMBOL(public_6d52b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d571f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6389b);

#define public_6d52b92 _public_6d52b92
#define public_6d52c82 _public_6d52c82
#define public_6d52c84 _public_6d52c84
#define public_6d52c9f _public_6d52c9f
#define public_6d52ca8 _public_6d52ca8

PROC_DECLARE(0x6d52b60, internal_6d52b60, public_6d52b60);
extern "C" NAKED register_t __cdecl internal_6d52b60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d6389b @0x6d52b68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6389b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax+4]
        sub esp, 0x51C
        push ebx
        push ebp
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov ebp, ecx
        jne public_6d52b92
        mov eax, offset public_6d64efc
        public_6d52b92 : nop
        push edi
        push eax
        mov byte ptr ss : [esp+0x130], bl
        call dword ptr ds : [public_6d64c98]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64ca0]
        push esi
        call dword ptr ds : [public_6d64c80]
        mov ecx, dword ptr ds : [public_6d90144]
        mov edi, eax
        add esp, 0xC
        lea edx, ds:[edi+edi]
        push edx
        mov dword ptr ds : [public_6d90150], ecx
        push esi
        mov ecx, offset public_6d8fd38
        call public_6d46850
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push edi
        lea eax, ss:[esp+0x30]
/*FIXUP push offset public_6d6aec0 @0x6d52be1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push eax
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
/*FIXUP push offset public_6d6aea4 @0x6d52bf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x148]
        push edx
        lea eax, ss:[esp+0x14C]
        push ebx
        push eax
        call dword ptr ds : [public_6d64bc0]
        lea ecx, ss:[esp+0x50]
        push ecx
        call dword ptr ds : [public_6d64ca8]
        mov dl, byte ptr ss : [esp+0x3F]
        or ecx, 0xFFFFFFFF
        add esp, 0x2C
        xor eax, eax
        lea edi, ss:[esp+0x12C]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x130]
        push eax
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6d59a60
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[ebp+0x30]
        mov dword ptr ss : [esp+0x53C], ebx
        call public_6d571f0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [ebp+0x34]
        pop edi
        je public_6d52c82
        mov esi, dword ptr ds : [eax+0x1C]
        jmp public_6d52c84
        public_6d52c82 : nop
        xor esi, esi
        public_6d52c84 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_6d52ca8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d52c9f
        cmp cl, 0xFF
        je public_6d52c9f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d52ca8
        public_6d52c9f : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d52ca8 : nop
        mov ecx, dword ptr ss : [esp+0x528]
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x528
        ret 4
        UNREACHABLE_TRAP(0x6d52b60)
    }
}

#undef public_6d52b92
#undef public_6d52c82
#undef public_6d52c84
#undef public_6d52c9f
#undef public_6d52ca8
