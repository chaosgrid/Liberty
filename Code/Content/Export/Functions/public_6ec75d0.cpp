#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f16fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaf0b);

#define public_6ec7604 _public_6ec7604
#define public_6ec7610 _public_6ec7610
#define public_6ec7613 _public_6ec7613
#define public_6ec7633 _public_6ec7633
#define public_6ec7637 _public_6ec7637
#define public_6ec763c _public_6ec763c
#define public_6ec7655 _public_6ec7655
#define public_6ec778f _public_6ec778f
#define public_6ec77c0 _public_6ec77c0
#define public_6ec77f1 _public_6ec77f1
#define public_6ec77fc _public_6ec77fc
#define public_6ec7804 _public_6ec7804

PROC_DECLARE(0x6ec75d0, internal_6ec75d0, public_6ec75d0);
extern "C" NAKED register_t __cdecl internal_6ec75d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faaf0b @0x6ec75d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaf0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10C
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+0xD4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6ec7804
        public_6ec7604 : nop
        lea esi, ss:[ebp+0xC]
        test esi, esi
        jne public_6ec7610
        mov eax, dword ptr ds : [ebx+0xC]
        jmp public_6ec763c
        public_6ec7610 : nop
        lea eax, ds:[ebx+0x10]
        public_6ec7613 : nop
        mov cl, byte ptr ds : [eax]
        mov dl, cl
        cmp cl, byte ptr ds : [esi]
        jne public_6ec7637
        test dl, dl
        je public_6ec7633
        mov cl, byte ptr ds : [eax+1]
        mov dl, cl
        cmp cl, byte ptr ds : [esi+1]
        jne public_6ec7637
        add eax, 2
        add esi, 2
        test dl, dl
        jne public_6ec7613
        public_6ec7633 : nop
        xor eax, eax
        jmp public_6ec763c
        public_6ec7637 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec763c : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec7655
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edi+0xD4]
        jne public_6ec7604
        jmp public_6ec7804
        public_6ec7655 : nop
        mov al, byte ptr ds : [ebx+0x70]
        add ebp, 8
        test al, al
        je public_6ec77fc
        mov edx, dword ptr ss : [ebp+0x34]
        mov eax, dword ptr ss : [ebp+0x38]
        mov ecx, 0xD
        mov esi, ebp
        lea edi, ss:[esp+0x20]
        rep movsd
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], eax
        lea esi, ss:[ebp+0x3C]
        mov ecx, 0x1A
        lea edi, ss:[esp+0x5C]
        rep movsd
        lea esi, ss:[ebp+0xA4]
        mov ecx, 0xD
        lea edi, ss:[esp+0xC4]
        rep movsd
        lea ecx, ss:[ebp+0xD8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x100], ecx
        mov cl, byte ptr ss : [ebp+0xEC]
        mov dword ptr ss : [esp+0xF8], edx
        mov dl, byte ptr ss : [ebp+0xE4]
        mov dword ptr ss : [esp+0xFC], eax
        mov eax, dword ptr ss : [ebp+0xE8]
        push 0
        mov byte ptr ss : [esp+0x110], cl
        push 0
        lea ecx, ss:[esp+0x114]
        mov byte ptr ss : [esp+0x10C], dl
        mov dword ptr ss : [esp+0x110], eax
        call public_6f93790
        mov esi, dword ptr ss : [ebp+0xF0]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x110], eax
        mov dword ptr ss : [esp+0x114], 0
        mov edi, dword ptr ds : [esi]
        push edx
        lea ecx, ss:[esp+0x110]
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        push esi
        push edi
        push eax
        lea ecx, ss:[esp+0x118]
        call public_6ed0230
        mov cx, word ptr ss : [ebp+0xF8]
        mov dl, byte ptr ss : [ebp+0xFA]
        mov word ptr ss : [esp+0x118], cx
        mov byte ptr ss : [esp+0x11A], dl
        lea eax, ds:[ebx+0x64]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x80], eax
        mov al, byte ptr ds : [ebx+0x71]
        test al, al
        mov dword ptr ss : [esp+0x124], 0
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        je public_6ec778f
        lea esi, ds:[ebx+0x40]
        mov ecx, 9
        lea edi, ss:[esp+0x84]
        rep movsd
        public_6ec778f : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        call public_6f16fa0
        mov eax, dword ptr ss : [esp+0x110]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x124], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ec77f1
        lea ebx, ds:[ebx]
        public_6ec77c0 : nop
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x114]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6ec77c0
        mov eax, dword ptr ss : [esp+0x110]
        public_6ec77f1 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        jmp public_6ec7804
        public_6ec77fc : nop
        push ebp
        mov ecx, edi
        call public_6f16fa0
        public_6ec7804 : nop
        mov ecx, dword ptr ss : [esp+0x11C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x118
        ret 
        UNREACHABLE_TRAP(0x6ec75d0)
    }
}

#undef public_6ec7604
#undef public_6ec7610
#undef public_6ec7613
#undef public_6ec7633
#undef public_6ec7637
#undef public_6ec763c
#undef public_6ec7655
#undef public_6ec778f
#undef public_6ec77c0
#undef public_6ec77f1
#undef public_6ec77fc
#undef public_6ec7804
