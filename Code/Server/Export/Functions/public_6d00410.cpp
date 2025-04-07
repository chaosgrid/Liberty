#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00410);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e68);

#define public_6d00440 _public_6d00440
#define public_6d0044b _public_6d0044b
#define public_6d0045d _public_6d0045d
#define public_6d004a9 _public_6d004a9
#define public_6d004ab _public_6d004ab
#define public_6d004bb _public_6d004bb

PROC_DECLARE(0x6d00410, internal_6d00410, public_6d00410);
extern "C" NAKED register_t __cdecl internal_6d00410()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ds : [public_6d8d8d8]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e68 @0x6d0041e*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e68
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [ecx]
        sub esp, 0x34
        cmp eax, ecx
        push edi
        je public_6d0044b
        mov edi, dword ptr ss : [esp+0x48]
        lea esp, ss:[esp]
        public_6d00440 : nop
        cmp edi, dword ptr ds : [eax+0x3C]
        je public_6d0045d
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d00440
        public_6d0044b : nop
        xor al, al
        pop edi
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        public_6d0045d : nop
        push ebx
        push esi
        mov dword ptr ss : [esp+0x50], eax
        xor esi, esi
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x58]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov edx, dword ptr ds : [public_6d8d8dc]
        mov eax, dword ptr ds : [public_6d8d8ec]
        add esp, 4
        dec edx
        cmp eax, esi
        mov dword ptr ds : [public_6d8d8dc], edx
        je public_6d004a9
        add eax, 0xFFFFFFF8
        jmp public_6d004ab
        public_6d004a9 : nop
        xor eax, eax
        public_6d004ab : nop
        cmp eax, edi
        jne public_6d004bb
        push esi
        mov ecx, offset public_6d8d8ec
        call dword ptr ds : [public_6d64594]
        public_6d004bb : nop
        mov al, byte ptr ss : [esp+0x50]
        mov bl, 1
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x30], al
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x48], esi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 0x39
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x24], esi
        call public_6d43650
        mov edx, dword ptr ds : [edi+0xC]
        add esp, 8
        lea ecx, ds:[edi+0xC]
        push 1
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 4
        pop esi
        mov al, bl
        pop ebx
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6d00410)
    }
}

#undef public_6d00440
#undef public_6d0044b
#undef public_6d0045d
#undef public_6d004a9
#undef public_6d004ab
#undef public_6d004bb
