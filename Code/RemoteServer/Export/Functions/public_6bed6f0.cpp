#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6bedf00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a8e9);

#define public_6bed77d _public_6bed77d
#define public_6bed78b _public_6bed78b
#define public_6bed7a8 _public_6bed7a8
#define public_6bed7b1 _public_6bed7b1
#define public_6bed7d9 _public_6bed7d9

PROC_DECLARE(0x6bed6f0, internal_6bed6f0, public_6bed6f0);
extern "C" NAKED register_t __cdecl internal_6bed6f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a8e9 @0x6bed6f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a8e9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        push ebx
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        xor ebx, ebx
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6c0b18c]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, offset public_6c13bbc
        mov dword ptr ss : [esp+0x30], ebx
        call public_6bedf00
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [public_6c13bc0]
        je public_6bed77d
        add eax, 0xC
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6c0b188]
        add esp, 8
        test al, al
        jne public_6bed77d
        lea eax, ss:[esp+0x30]
        jmp public_6bed78b
        public_6bed77d : nop
        mov ecx, dword ptr ds : [public_6c13bc0]
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6bed78b : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6bed7b1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6bed7a8
        cmp cl, 0xFF
        je public_6bed7a8
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6bed7b1
        public_6bed7a8 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bed7b1 : nop
        cmp esi, dword ptr ds : [public_6c13bc0]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6bed7d9
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        public_6bed7d9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6bed6f0)
    }
}

#undef public_6bed77d
#undef public_6bed78b
#undef public_6bed7a8
#undef public_6bed7b1
#undef public_6bed7d9
