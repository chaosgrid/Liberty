#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb06c0);

#define public_6f7fcc7 _public_6f7fcc7
#define public_6f7fcd0 _public_6f7fcd0
#define public_6f7fd48 _public_6f7fd48
#define public_6f7fd9c _public_6f7fd9c
#define public_6f7fdbd _public_6f7fdbd
#define public_6f7fdc6 _public_6f7fdc6
#define public_6f7fe09 _public_6f7fe09
#define public_6f7fe42 _public_6f7fe42
#define public_6f7fe8a _public_6f7fe8a

PROC_DECLARE(0x6f7fc80, internal_6f7fc80, public_6f7fc80);
extern "C" NAKED register_t __cdecl internal_6f7fc80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+8]
        push 0xFFFFFFFF
/*FIXUP push public_6fb06c0 @0x6f7fc8c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb06c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        push ebp
        mov ebp, dword ptr ss : [esp+0x90]
        cmp ebp, ecx
        je public_6f7fe8a
        lea eax, ss:[ebp+0x38]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_6f7fe8a
        push ebx
        push esi
        lea ebx, ds:[eax-0x20]
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_6f7fcd0
        public_6f7fcc7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        nop 
        lea esp, ss:[esp]
        public_6f7fcd0 : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        call public_6eb35b0
        mov eax, dword ptr ds : [ebx+0x50]
        lea esi, ds:[ebx+0x38]
        mov ecx, 6
        lea edi, ss:[esp+0x34]
        rep movsd
        mov cl, byte ptr ds : [ebx+0x54]
        mov dword ptr ss : [esp+0x4C], eax
        mov byte ptr ss : [esp+0x50], cl
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp+4]
        xor esi, esi
        cmp edx, eax
        mov dword ptr ss : [esp+0x94], esi
        jb public_6f7fdbd
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x58]
        call public_6f7f760
        mov ebp, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        cmp edx, dword ptr ds : [ebx-0x14]
        lea ecx, ds:[ebx-0x18]
        mov byte ptr ss : [esp+0x94], 1
        mov dword ptr ss : [esp+0x14], ecx
        jae public_6f7fd9c
        public_6f7fd48 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [ebx-0x14]
        lea eax, ds:[ebx-0x10]
        push eax
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [ebp+4], edx
        call public_6f971e0
        mov eax, dword ptr ss : [esp+0x14]
        lea edi, ss:[ebp+0x18]
        mov esi, ebx
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp+0x30], ecx
        mov dl, byte ptr ds : [ebx+0x1C]
        mov byte ptr ss : [ebp+0x34], dl
        mov ecx, dword ptr ds : [ebx-0x4C]
        mov ebp, eax
        sub eax, 0x38
        sub ebx, 0x38
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x58]
        cmp eax, ecx
        jb public_6f7fd48
        mov ebx, dword ptr ss : [esp+0x18]
        xor esi, esi
        public_6f7fd9c : nop
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, ebp
        call public_6f7e0c0
        lea ecx, ss:[esp+0x5C]
        call public_6eec8d0
        mov ebp, dword ptr ss : [esp+0x9C]
        jmp public_6f7fe42
        public_6f7fdbd : nop
        cmp ebp, dword ptr ss : [esp+0x10]
        je public_6f7fe09
        lea ebp, ds:[ebx+0x60]
        public_6f7fdc6 : nop
        mov edx, dword ptr ss : [ebp-0x78]
        sub ebp, 0x38
        lea ecx, ss:[ebp-0x38]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [ebp-4], eax
        call public_6eb6560
        lea esi, ss:[ebp-0x28]
        lea edi, ss:[ebp+0x10]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp+0x28], edx
        mov al, byte ptr ss : [ebp-0xC]
        mov byte ptr ss : [ebp+0x2C], al
        mov eax, dword ptr ss : [esp+0x9C]
        lea ecx, ss:[ebp-0x40]
        cmp ecx, eax
        jne public_6f7fdc6
        mov ebp, eax
        public_6f7fe09 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp], edx
        lea edx, ss:[esp+0x24]
        lea ecx, ss:[ebp+8]
        push edx
        mov dword ptr ss : [ebp+4], eax
        call public_6eb6560
        mov eax, dword ptr ss : [esp+0x4C]
        lea edi, ss:[ebp+0x18]
        mov ecx, 6
        lea esi, ss:[esp+0x34]
        rep movsd
        mov cl, byte ptr ss : [esp+0x50]
        mov dword ptr ss : [ebp+0x30], eax
        mov byte ptr ss : [ebp+0x34], cl
        xor esi, esi
        public_6f7fe42 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xA4]
        add eax, 0x38
        add ebx, 0x38
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6f7fcc7
        pop edi
        pop esi
        pop ebx
        public_6f7fe8a : nop
        mov ecx, dword ptr ss : [esp+0x80]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x6f7fc80)
    }
}

#undef public_6f7fcc7
#undef public_6f7fcd0
#undef public_6f7fd48
#undef public_6f7fd9c
#undef public_6f7fdbd
#undef public_6f7fdc6
#undef public_6f7fe09
#undef public_6f7fe42
#undef public_6f7fe8a
