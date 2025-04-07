#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f322a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f32320);
CLANG_FORWARD_PROC_SYMBOL(public_6f32350);
CLANG_FORWARD_PROC_SYMBOL(public_6f323c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51370);
CLANG_FORWARD_PROC_SYMBOL(public_6f51ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f520d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f88940);

#define public_6f88961 _public_6f88961
#define public_6f88973 _public_6f88973
#define public_6f88987 _public_6f88987
#define public_6f8899a _public_6f8899a
#define public_6f889a3 _public_6f889a3
#define public_6f889af _public_6f889af
#define public_6f889c0 _public_6f889c0
#define public_6f889d4 _public_6f889d4
#define public_6f889e7 _public_6f889e7
#define public_6f889f0 _public_6f889f0
#define public_6f889fc _public_6f889fc
#define public_6f88a00 _public_6f88a00
#define public_6f88a0c _public_6f88a0c
#define public_6f88a61 _public_6f88a61
#define public_6f88a86 _public_6f88a86
#define public_6f88ac0 _public_6f88ac0

PROC_DECLARE(0x6f88940, internal_6f88940, public_6f88940);
extern "C" NAKED register_t __cdecl internal_6f88940()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1E4]
        xor esi, esi
        cmp eax, esi
        jne public_6f88961
        cmp dword ptr ds : [edi+0x1FC], esi
        je public_6f88ac0
        public_6f88961 : nop
        mov ecx, dword ptr ds : [edi+0x124]
        mov ebp, dword ptr ds : [edi+0x128]
        xor bl, bl
        mov byte ptr ss : [esp+0x13], bl
        public_6f88973 : nop
        cmp ecx, ebp
        je public_6f889af
        mov eax, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [ecx+0x8C]
        cmp eax, edx
        je public_6f889a3
        public_6f88987 : nop
        cmp dword ptr ds : [eax+0xD4], esi
        jne public_6f8899a
        add eax, 0xF0
        cmp eax, edx
        jne public_6f88987
        jmp public_6f889a3
        public_6f8899a : nop
        mov al, byte ptr ds : [ecx+1]
        mov bl, 1
        mov byte ptr ss : [esp+0x13], al
        public_6f889a3 : nop
        add ecx, 0x98
        test bl, bl
        je public_6f88973
        jmp public_6f88a00
        public_6f889af : nop
        test bl, bl
        jne public_6f88a00
        mov ecx, dword ptr ds : [edi+0x1C8]
        mov ebp, dword ptr ds : [edi+0x1CC]
        nop 
        public_6f889c0 : nop
        cmp ecx, ebp
        je public_6f889fc
        mov eax, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [ecx+0x8C]
        cmp eax, edx
        je public_6f889f0
        public_6f889d4 : nop
        cmp dword ptr ds : [eax+0xD4], esi
        jne public_6f889e7
        add eax, 0xF0
        cmp eax, edx
        jne public_6f889d4
        jmp public_6f889f0
        public_6f889e7 : nop
        mov dl, byte ptr ds : [ecx+1]
        mov bl, 1
        mov byte ptr ss : [esp+0x13], dl
        public_6f889f0 : nop
        add ecx, 0x98
        test bl, bl
        je public_6f889c0
        jmp public_6f88a00
        public_6f889fc : nop
        test bl, bl
        je public_6f88a0c
        public_6f88a00 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6f88ac0
        public_6f88a0c : nop
        lea eax, ds:[edi+0x214]
        push eax
        call public_6f51370
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        push edx
        lea esi, ds:[edi+0x1F8]
        add edi, 0x1E0
        push esi
        push edi
        mov ebp, eax
        call public_6f322a0
        mov eax, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        add esp, 0x14
        cmp eax, ebx
        je public_6f88a61
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        je public_6f88a61
        push 1
        push ecx
        push eax
        mov ecx, ebp
        call public_6f51ee0
        jmp public_6f88a86
        public_6f88a61 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x28], ebx
        call public_6f32320
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        cmp eax, ebx
        je public_6f88a86
        push 1
        push eax
        mov ecx, ebp
        call public_6f51fe0
        public_6f88a86 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x30], ebx
        call public_6f32350
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6f323c0
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 0x18
        push 1
        push eax
        push ecx
        mov ecx, ebp
        call public_6f520d0
        public_6f88ac0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f88940)
    }
}

#undef public_6f88961
#undef public_6f88973
#undef public_6f88987
#undef public_6f8899a
#undef public_6f889a3
#undef public_6f889af
#undef public_6f889c0
#undef public_6f889d4
#undef public_6f889e7
#undef public_6f889f0
#undef public_6f889fc
#undef public_6f88a00
#undef public_6f88a0c
#undef public_6f88a61
#undef public_6f88a86
#undef public_6f88ac0
