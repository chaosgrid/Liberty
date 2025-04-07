#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f79540);
CLANG_FORWARD_PROC_SYMBOL(public_6f79600);
CLANG_FORWARD_PROC_SYMBOL(public_6f796c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e550);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0293);

#define public_6f75d83 _public_6f75d83
#define public_6f75d95 _public_6f75d95
#define public_6f75e92 _public_6f75e92
#define public_6f75ea1 _public_6f75ea1

PROC_DECLARE(0x6f75d10, internal_6f75d10, public_6f75d10);
extern "C" NAKED register_t __cdecl internal_6f75d10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0293 @0x6f75d12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0293
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fb93c4
        mov eax, dword ptr ds : [esi+0x110]
        push eax
        mov dword ptr ss : [esp+0x24], 9
        call public_6fa8fe0
        xor ebx, ebx
        add esp, 4
        lea ecx, ds:[esi+0xF8]
        mov dword ptr ds : [esi+0x110], ebx
        mov dword ptr ds : [esi+0x114], ebx
        mov dword ptr ds : [esi+0x118], ebx
        call public_6f796c0
        mov ebp, dword ptr ds : [esi+0xF0]
        mov edi, dword ptr ds : [esi+0xEC]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], 8
        je public_6f75d95
        public_6f75d83 : nop
        push ebx
        mov ecx, edi
        call public_6f7e550
        add edi, 0x98
        cmp edi, ebp
        jne public_6f75d83
        public_6f75d95 : nop
        mov eax, dword ptr ds : [esi+0xEC]
        push eax
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        mov eax, dword ptr ds : [esi+0xE0]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0xDC]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 7
        call public_6fa8370
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0xC8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x20], 6
        call public_6f79600
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x20], 5
        call public_6eec8d0
        mov eax, dword ptr ds : [esi+0xAC]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov eax, dword ptr ds : [esi+0x9C]
        push eax
        call public_6fa8fe0
        lea edi, ds:[esi+0x88]
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        add esp, 8
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 2
        call public_6f7a9c0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0x70]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x20], 1
        call public_6f79540
        mov ebp, dword ptr ds : [esi+0x68]
        mov edi, dword ptr ds : [esi+0x64]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x20], bl
        je public_6f75ea1
        public_6f75e92 : nop
        push ebx
        mov ecx, edi
        call public_6f7e570
        add edi, 0x5C
        cmp edi, ebp
        jne public_6f75e92
        public_6f75ea1 : nop
        mov eax, dword ptr ds : [esi+0x64]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[esi+0x50]
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6f2f8d0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f75d10)
    }
}

#undef public_6f75d83
#undef public_6f75d95
#undef public_6f75e92
#undef public_6f75ea1
