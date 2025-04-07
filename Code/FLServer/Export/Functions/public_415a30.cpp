#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_409800);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_413b70);
CLANG_FORWARD_PROC_SYMBOL(public_41891e);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_41898a);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_JUMP_SYMBOL(public_41aa56);

#define public_415ac9 _public_415ac9
#define public_415b0f _public_415b0f
#define public_415b1b _public_415b1b

PROC_DECLARE(0x415a30, internal_415a30, public_415a30);
extern "C" NAKED register_t __cdecl internal_415a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41aa56 @0x415a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41aa56
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x874
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x80]
        push 0x800
        lea eax, ss:[esp+0x84]
        push eax
        push ecx
        call public_409800
        call public_40cdc0
        mov dl, byte ptr ss : [esp+0x1B]
        xor ebx, ebx
        lea eax, ss:[esp+0x8C]
        push eax
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_41b8f4]
        add esp, 0x10
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x18]
        call public_4044b0
        test al, al
        je public_415ac9
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        lea ecx, ss:[esp+0x84]
        push ecx
        push edx
        call public_4031c0
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], esi
        add esp, 0xC
        mov word ptr ds : [eax+esi*2], bx
        public_415ac9 : nop
        mov edx, dword ptr ds : [edi+0xA0]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        add edx, 4
        push edx
        mov dword ptr ss : [esp+0x890], ebx
        call public_41891e
        mov eax, dword ptr ss : [esp+0x14]
        or esi, 0xFFFFFFFF
        cmp eax, ebx
        mov dword ptr ss : [esp+0x888], esi
        je public_415b1b
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_415b0f
        cmp cl, 0xFF
        je public_415b0f
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_415b1b
        public_415b0f : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_415b1b : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        call public_40ce70
        push ebx
        lea ecx, ss:[esp+0x24]
        call public_413b70
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x888], 1
        call public_41899c
        mov ecx, edi
        call public_41898a
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x888], esi
        call public_418a98
        mov ecx, dword ptr ss : [esp+0x880]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x880
        ret 
        UNREACHABLE_TRAP(0x415a30)
    }
}

#undef public_415ac9
#undef public_415b0f
#undef public_415b1b
