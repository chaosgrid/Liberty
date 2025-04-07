#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f08800);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f77bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad078);

#define public_6f088a0 _public_6f088a0
#define public_6f088bc _public_6f088bc
#define public_6f088be _public_6f088be
#define public_6f088c9 _public_6f088c9
#define public_6f088f7 _public_6f088f7

PROC_DECLARE(0x6f08800, internal_6f08800, public_6f08800);
extern "C" NAKED register_t __cdecl internal_6f08800()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad078 @0x6f08808*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad078
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        cmp eax, 7
        push edi
        mov ebp, ecx
        jne public_6f088c9
        mov eax, dword ptr ss : [ebp+0x184]
        mov eax, dword ptr ds : [eax]
        lea esi, ds:[eax+8]
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        cmp dword ptr ss : [esp+0x20], ebx
        jne public_6f088f7
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eea860
        cmp eax, ebx
        je public_6f088f7
        mov cl, byte ptr ss : [esp+0x54]
        mov byte ptr ss : [esp+0x10], cl
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], ebx
        call public_6f77bd0
        test al, al
        mov ebp, dword ptr ss : [esp+0x14]
        je public_6f088be
        mov edx, dword ptr ss : [esp+0x18]
        cmp ebp, edx
        mov eax, ebp
        je public_6f088be
        mov edi, dword ptr ss : [esp+0x40]
        mov esi, dword ptr ss : [esp+0x3C]
        public_6f088a0 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, esi
        je public_6f088bc
        cmp ecx, edi
        je public_6f088bc
        add eax, 0x44
        cmp eax, edx
        jne public_6f088a0
        push ebp
        call public_6fa8fe0
        add esp, 4
        jmp public_6f088f7
        public_6f088bc : nop
        mov bl, 1
        public_6f088be : nop
        push ebp
        call public_6fa8fe0
        add esp, 4
        jmp public_6f088f7
        public_6f088c9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ecx+0x154]
        call public_6eea860
        cmp eax, ebx
        je public_6f088f7
        mov edx, dword ptr ss : [ebp+0x168]
        push edx
        mov ecx, eax
        call public_6f73930
        cmp eax, ebx
        je public_6f088f7
        cmp dword ptr ds : [eax+0x154], esi
        jne public_6f088f7
        mov bl, 1
        public_6f088f7 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6f08800)
    }
}

#undef public_6f088a0
#undef public_6f088bc
#undef public_6f088be
#undef public_6f088c9
#undef public_6f088f7
