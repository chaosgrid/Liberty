#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392afe);

#define public_62779e0 _public_62779e0
#define public_6277a0a _public_6277a0a
#define public_6277a1a _public_6277a1a
#define public_6277a26 _public_6277a26
#define public_6277a97 _public_6277a97
#define public_6277aa8 _public_6277aa8
#define public_6277abd _public_6277abd
#define public_6277ae2 _public_6277ae2
#define public_6277b07 _public_6277b07
#define public_6277b10 _public_6277b10
#define public_6277b75 _public_6277b75
#define public_6277b86 _public_6277b86
#define public_6277b9b _public_6277b9b
#define public_6277bbb _public_6277bbb
#define public_6277be0 _public_6277be0
#define public_6277be9 _public_6277be9

PROC_DECLARE(0x6277960, internal_6277960, public_6277960);
extern "C" NAKED register_t __cdecl internal_6277960()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6392afe @0x6277968*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392afe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1670
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_639905c]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+0x10]
        push ebx
        push esi
        push edi
        push edx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6302df0
        add esp, 0xC
        lea ecx, ss:[esp+0x114]
        xor ebx, ebx
        xor esi, esi
        call public_630f660
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x168C], ebx
        call public_630f9b0
        test al, al
        je public_6277a26
        lea ecx, ss:[esp+0x114]
        call public_6310070
        test al, al
        je public_6277a1a
        mov edi, dword ptr ss : [esp+0x1690]
        nop 
/*FIXUP public_62779e0 : nop
        push offset public_639af18 @0x62779e0*/
  FIXUP public_62779e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639af18
        lea ecx, ss:[esp+0x118]
        call public_63103c0
        test al, al
        je public_6277a0a
        push edi
        lea eax, ss:[esp+0x118]
        push eax
        push esi
        call dword ptr ss : [esp+0x1698]
        add esp, 0xC
        inc esi
        public_6277a0a : nop
        lea ecx, ss:[esp+0x114]
        call public_6310070
        test al, al
        jne public_62779e0
        public_6277a1a : nop
        lea ecx, ss:[esp+0x114]
        call public_630f770
        public_6277a26 : nop
        push ebp
        lea ecx, ss:[esp+0x1540]
        mov dword ptr ss : [esp+0x1688], 1
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1548]
        mov byte ptr ss : [esp+0x1690], 2
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x1550], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6399138]
        mov esi, dword ptr ds : [public_639913c]
        je public_6277abd
        cmp dword ptr ss : [esp+0x1554], ebx
        je public_6277aa8
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, ebx
        je public_6277a97
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1558], ebx
        mov dword ptr ss : [esp+0x155C], ebx
        public_6277a97 : nop
        mov ecx, dword ptr ss : [esp+0x1554]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1554], ebx
        public_6277aa8 : nop
        mov edx, dword ptr ss : [esp+0x1550]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1550], 0xFFFFFFFF
        public_6277abd : nop
        mov eax, dword ptr ss : [esp+0x1558]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_639932c]
        je public_6277ae2
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1558], ebx
        mov dword ptr ss : [esp+0x155C], ebx
        public_6277ae2 : nop
        mov eax, dword ptr ss : [esp+0x1544]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1560], ebx
        je public_6277b10
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6277b07
        cmp cl, 0xFF
        je public_6277b07
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6277b10
        public_6277b07 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6277b10 : nop
        mov dword ptr ss : [esp+0x1544], ebx
        mov dword ptr ss : [esp+0x1548], ebx
        mov dword ptr ss : [esp+0x154C], ebx
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x120]
        mov dword ptr ss : [esp+0x1690], 3
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x128], 0xFFFFFFFF
        je public_6277b9b
        cmp dword ptr ss : [esp+0x12C], ebx
        je public_6277b86
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, ebx
        je public_6277b75
        push eax
        call ebp
        mov dword ptr ss : [esp+0x130], ebx
        mov dword ptr ss : [esp+0x134], ebx
        public_6277b75 : nop
        mov edx, dword ptr ss : [esp+0x12C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x12C], ebx
        public_6277b86 : nop
        mov eax, dword ptr ss : [esp+0x128]
        push eax
        call esi
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        public_6277b9b : nop
        mov eax, dword ptr ss : [esp+0x130]
        cmp eax, ebx
        pop ebp
        je public_6277bbb
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x12C], ebx
        mov dword ptr ss : [esp+0x130], ebx
        public_6277bbb : nop
        mov eax, dword ptr ss : [esp+0x118]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x134], ebx
        je public_6277be9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6277be0
        cmp cl, 0xFF
        je public_6277be0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6277be9
        public_6277be0 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6277be9 : nop
        mov ecx, dword ptr ss : [esp+0x167C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 8
        UNREACHABLE_TRAP(0x6277960)
    }
}

#undef public_62779e0
#undef public_6277a0a
#undef public_6277a1a
#undef public_6277a26
#undef public_6277a97
#undef public_6277aa8
#undef public_6277abd
#undef public_6277ae2
#undef public_6277b07
#undef public_6277b10
#undef public_6277b75
#undef public_6277b86
#undef public_6277b9b
#undef public_6277bbb
#undef public_6277be0
#undef public_6277be9
