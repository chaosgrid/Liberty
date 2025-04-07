#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6bdcb60);
CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6be2a40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a398);

#define public_6bd74b0 _public_6bd74b0
#define public_6bd74db _public_6bd74db
#define public_6bd74dd _public_6bd74dd
#define public_6bd7530 _public_6bd7530
#define public_6bd753a _public_6bd753a
#define public_6bd7555 _public_6bd7555
#define public_6bd7585 _public_6bd7585

PROC_DECLARE(0x6bd7450, internal_6bd7450, public_6bd7450);
extern "C" NAKED register_t __cdecl internal_6bd7450()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a398 @0x6bd7452*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a398
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 0x17
        push 3
        mov dword ptr ss : [esp+0x18], edi
        call public_6be1750
        test eax, eax
        jne public_6bd7585
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+0xC], ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], eax
        je public_6bd7555
        push ebp
        lea ebx, ds:[ebx]
        public_6bd74b0 : nop
        push 0x18
        call public_6c09d26
        add esp, 4
        cmp eax, ebx
        je public_6bd74db
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov word ptr ds : [eax+0xC], bx
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
        mov word ptr ds : [eax+0x10], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov ebp, eax
        jmp public_6bd74dd
        public_6bd74db : nop
        xor ebp, ebp
        public_6bd74dd : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [ebp+8], edx
        mov ax, word ptr ds : [esi+0xA]
        mov word ptr ss : [ebp+0xC], ax
        mov al, byte ptr ds : [esi+0x14]
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [ebp+0xE], al
        call dword ptr ds : [public_6c0b020]
        test al, al
        jne public_6bd753a
        mov edi, dword ptr ds : [esi+0x10]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        mov eax, ecx
        mov word ptr ss : [ebp+0x10], ax
        movzx eax, ax
        push eax
        call public_6c09d26
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        mov edx, eax
        public_6bd7530 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        cmp al, bl
        jne public_6bd7530
        public_6bd753a : nop
        push ebp
        lea ecx, ss:[esp+0x14]
        call public_6bdcb60
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x2C]
        jne public_6bd74b0
        mov edi, dword ptr ss : [esp+0x18]
        pop ebp
        public_6bd7555 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6be2a40
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x170]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6bdc790
        pop esi
        pop ebx
        public_6bd7585 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6bd7450)
    }
}

#undef public_6bd74b0
#undef public_6bd74db
#undef public_6bd74dd
#undef public_6bd7530
#undef public_6bd753a
#undef public_6bd7555
#undef public_6bd7585
