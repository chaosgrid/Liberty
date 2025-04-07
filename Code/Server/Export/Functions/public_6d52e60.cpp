#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d571f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d581c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d638bb);

#define public_6d52e91 _public_6d52e91
#define public_6d52f8b _public_6d52f8b
#define public_6d52fb4 _public_6d52fb4
#define public_6d52fbd _public_6d52fbd

PROC_DECLARE(0x6d52e60, internal_6d52e60, public_6d52e60);
extern "C" NAKED register_t __cdecl internal_6d52e60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d638bb @0x6d52e68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d638bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax+4]
        sub esp, 0x220
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push ebp
        mov ebp, ecx
        jne public_6d52e91
        mov eax, offset public_6d64efc
        public_6d52e91 : nop
        push esi
        push edi
        push eax
        mov byte ptr ss : [esp+0x2C], bl
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
        lea eax, ss:[esp+0x134]
/*FIXUP push offset public_6d6aec0 @0x6d52ee1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push eax
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
/*FIXUP push offset public_6d6aea4 @0x6d52ef4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x144]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x48]
        push ebx
        push eax
        call dword ptr ds : [public_6d64bc0]
        lea ecx, ss:[esp+0x154]
        push ecx
        call dword ptr ds : [public_6d64ca8]
        mov dl, byte ptr ss : [esp+0x3F]
        or ecx, 0xFFFFFFFF
        add esp, 0x2C
        xor eax, eax
        lea edi, ss:[esp+0x28]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], dl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6d59a60
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x28]
        lea esi, ss:[ebp+0x30]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x240], ebx
        call public_6d571f0
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ss : [ebp+0x34]
        je public_6d52f8b
        mov eax, dword ptr ds : [eax+0x1C]
        cmp eax, ebx
        je public_6d52f8b
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, eax
        call public_6d56bd0
        public_6d52f8b : nop
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6d581c0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        pop edi
        pop esi
        je public_6d52fbd
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d52fb4
        cmp cl, 0xFF
        je public_6d52fb4
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d52fbd
        public_6d52fb4 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d52fbd : nop
        mov ecx, dword ptr ss : [esp+0x228]
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x22C
        ret 4
        UNREACHABLE_TRAP(0x6d52e60)
    }
}

#undef public_6d52e91
#undef public_6d52f8b
#undef public_6d52fb4
#undef public_6d52fbd
