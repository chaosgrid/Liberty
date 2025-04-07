#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_6295440);
CLANG_FORWARD_PROC_SYMBOL(public_629b210);
CLANG_FORWARD_PROC_SYMBOL(public_62a9820);
CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_JUMP_SYMBOL(public_6393fbb);

#define public_62a988b _public_62a988b
#define public_62a988d _public_62a988d
#define public_62a98d0 _public_62a98d0

PROC_DECLARE(0x62a9820, internal_62a9820, public_62a9820);
extern "C" NAKED register_t __cdecl internal_62a9820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393fbb @0x62a9822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393fbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+4]
        push edi
        push eax
        mov ebx, ecx
        call public_62f93f0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_62a98d0
        push 0x2C
        call public_62fd560
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        je public_62a988b
        mov cl, byte ptr ds : [esi+0x18]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov byte ptr ss : [esp+0x20], cl
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push edi
        mov ecx, eax
        push edx
        push ebx
        call public_6295440
        mov edi, eax
        jmp public_62a988d
        public_62a988b : nop
        xor edi, edi
        public_62a988d : nop
        mov ecx, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [edi]
        lea eax, ds:[esi+8]
        push eax
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [edx+0x5C]
        push edi
        lea ecx, ds:[ebx+0xE4]
        call public_629b210
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        lea ecx, ds:[ecx]
        public_62a98d0 : nop
        mov esi, dword ptr ds : [esi+4]
        push esi
        mov ecx, ebx
        mov edi, 0x100002
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x158
/*FIXUP push offset public_639e254 @0x62a98f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e254
/*FIXUP push offset public_639e1a8 @0x62a98fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e1a8
        push edi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0x18
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62a9820)
    }
}

#undef public_62a988b
#undef public_62a988d
#undef public_62a98d0
