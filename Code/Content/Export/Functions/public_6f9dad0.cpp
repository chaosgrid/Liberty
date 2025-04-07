#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaed40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f98dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dad0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9dcb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6f9f860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0350);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1aa8);

#define public_6f9db15 _public_6f9db15
#define public_6f9db2e _public_6f9db2e
#define public_6f9db3d _public_6f9db3d
#define public_6f9db53 _public_6f9db53
#define public_6f9db57 _public_6f9db57
#define public_6f9db83 _public_6f9db83
#define public_6f9db8b _public_6f9db8b
#define public_6f9dc0a _public_6f9dc0a
#define public_6f9dc14 _public_6f9dc14
#define public_6f9dc27 _public_6f9dc27
#define public_6f9dc34 _public_6f9dc34
#define public_6f9dc59 _public_6f9dc59
#define public_6f9dc9a _public_6f9dc9a

PROC_DECLARE(0x6f9dad0, internal_6f9dad0, public_6f9dad0);
extern "C" NAKED register_t __cdecl internal_6f9dad0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1aa8 @0x6f9dad2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1aa8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x50]
        push eax
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1C], ecx
        add ecx, 0x1C
        push edx
        call public_6f7b0f0
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0x4C]
        test eax, eax
        jne public_6f9db3d
        mov edi, dword ptr ss : [ebp+0x48]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f9db2e
        public_6f9db15 : nop
        lea eax, ss:[ebp+0xE0]
        push eax
        lea ecx, ds:[esi+8]
        call public_6f98dc0
        test al, al
        jne public_6f9db3d
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6f9db15
        public_6f9db2e : nop
        lea eax, ss:[ebp+0xE0]
        push eax
        lea ecx, ss:[ebp+0x44]
        call public_6f9f860
        public_6f9db3d : nop
        mov edi, dword ptr ss : [ebp+0x30]
        cmp edi, dword ptr ss : [ebp+0x34]
        mov dword ptr ss : [esp+0xC], edi
        je public_6f9dc9a
        push ebx
        add ebp, 0x44
        jmp public_6f9db57
        public_6f9db53 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6f9db57 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        lea eax, ss:[esp+0x18]
        lea esi, ds:[ecx+0x1C]
        push eax
        mov ecx, esi
        call public_6f2e220
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f9db83
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6f9db83
        lea eax, ss:[esp+0x14]
        jmp public_6f9db8b
        public_6f9db83 : nop
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        public_6f9db8b : nop
        mov ebx, dword ptr ds : [eax]
        mov al, byte ptr ss : [ebp]
        push 0
        push 0
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x40], al
        call public_6eaed40
        mov esi, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0
        call public_6f1df30
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x3C]
        mov edi, eax
        call public_6f1df30
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6fa0350
        mov dword ptr ss : [esp+0x34], offset public_6fbd50c
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0
        lea edi, ds:[ebx+0xE0]
        jne public_6f9dc0a
        push edi
        lea ecx, ss:[esp+0x38]
        call public_6f98d40
        mov eax, dword ptr ss : [esp+0x3C]
        jmp public_6f9dc27
        public_6f9dc0a : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f9dc27
        public_6f9dc14 : nop
        push edi
        lea ecx, ds:[esi+8]
        call public_6f9dcb0
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x3C]
        cmp esi, eax
        jne public_6f9dc14
        public_6f9dc27 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f9dc59
        lea esi, ds:[ebx+0x40]
        public_6f9dc34 : nop
        add ecx, 8
        push ecx
        mov ecx, esi
        call public_6f98d40
        push 0
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ss : [esp+0x3C]
        jne public_6f9dc34
        public_6f9dc59 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        call public_6f9dad0
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], offset public_6fbd50c
        call public_6f9f800
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx+0x34]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f9db53
        pop ebx
        public_6f9dc9a : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6f9dad0)
    }
}

#undef public_6f9db15
#undef public_6f9db2e
#undef public_6f9db3d
#undef public_6f9db53
#undef public_6f9db57
#undef public_6f9db83
#undef public_6f9db8b
#undef public_6f9dc0a
#undef public_6f9dc14
#undef public_6f9dc27
#undef public_6f9dc34
#undef public_6f9dc59
#undef public_6f9dc9a
