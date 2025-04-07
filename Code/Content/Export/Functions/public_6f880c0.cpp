#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f880c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0cbf);

#define public_6f88123 _public_6f88123
#define public_6f8814c _public_6f8814c
#define public_6f88178 _public_6f88178
#define public_6f88181 _public_6f88181
#define public_6f881f1 _public_6f881f1
#define public_6f8821c _public_6f8821c

PROC_DECLARE(0x6f880c0, internal_6f880c0, public_6f880c0);
extern "C" NAKED register_t __cdecl internal_6f880c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0cbf @0x6f880c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0cbf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0x18], edi
        mov al, byte ptr ss : [esp+0x40]
        mov esi, ecx
        push edi
        push edi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ss : [esp+0x28], al
        call public_6f93790
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x1C], offset public_6fbc7cc
        cmp dword ptr ss : [esp+0x40], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 1
        je public_6f88181
        mov ecx, dword ptr ds : [esi+0x28]
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ecx
        je public_6f88181
        public_6f88123 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x40]
        cmp edx, dword ptr ds : [ecx+0x64]
        jne public_6f88178
        lea esi, ds:[eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, dword ptr ds : [esi]
        push 0xC
        mov ebp, eax
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebp
        jne public_6f8814c
        mov edi, eax
        public_6f8814c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x24]
        public_6f88178 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [esi+0x28]
        jne public_6f88123
        xor edi, edi
        public_6f88181 : nop
        mov ebp, dword ptr ss : [esp+0x3C]
        mov dl, byte ptr ss : [esp+0x20]
        lea esi, ss:[ebp+4]
        push 0xC
        mov byte ptr ds : [esi], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ds : [esi+8], edi
        mov edi, dword ptr ds : [eax]
        mov ecx, esi
        call public_6f1df30
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax]
        push edx
        push edi
        push eax
        mov ecx, esi
        call public_6ed0230
        mov dword ptr ss : [ebp], offset public_6fbc7cc
        mov dword ptr ss : [esp+0x18], 1
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], offset public_6fbc7cc
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x34], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x40], ecx
        je public_6f8821c
        public_6f881f1 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x40], esi
        jne public_6f881f1
        mov eax, dword ptr ss : [esp+0x24]
        public_6f8821c : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6f880c0)
    }
}

#undef public_6f88123
#undef public_6f8814c
#undef public_6f88178
#undef public_6f88181
#undef public_6f881f1
#undef public_6f8821c
