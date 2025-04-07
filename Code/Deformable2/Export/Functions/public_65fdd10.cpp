#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1660);
CLANG_FORWARD_PROC_SYMBOL(public_65f3e70);
CLANG_FORWARD_PROC_SYMBOL(public_65fdf80);
CLANG_FORWARD_PROC_SYMBOL(public_65fdfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bee);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65fdd80 _public_65fdd80
#define public_65fddd2 _public_65fddd2
#define public_65fddf8 _public_65fddf8
#define public_65fde21 _public_65fde21
#define public_65fde25 _public_65fde25
#define public_65fde55 _public_65fde55
#define public_65fdf6f _public_65fdf6f

PROC_DECLARE(0x65fdd10, internal_65fdd10, public_65fdd10);
extern "C" NAKED register_t __cdecl internal_65fdd10()
{
    __asm
    {
        sub esp, 0x90
        mov eax, dword ptr ss : [esp+0x98]
        push ebx
        mov ebx, dword ptr ss : [esp+0x98]
        push ebp
        push edi
        mov edi, dword ptr ds : [eax]
        mov ebp, ecx
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x40]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [public_6603130]
        push 7
        mov dword ptr ss : [esp+0x18], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_65fdf6f
        mov eax, dword ptr ds : [public_6602a60]
        test eax, eax
        push esi
        je public_65fde55
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jle public_65fde55
        mov ebx, 1
        mov dword ptr ss : [esp+0x10], 0
        public_65fdd80 : nop
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [public_66033ac]
        add esi, ecx
        test al, 1
        jne public_65fddd2
        mov dl, al
        or dl, 1
        mov ecx, offset public_66033b0
        mov byte ptr ds : [public_66033ac], dl
        call public_65f1660
/*FIXUP push offset _public_65fdfa0 @0x65fdda7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65fdfa0
        mov dword ptr ds : [public_66033dc], 0
        mov dword ptr ds : [public_66033d8], 0
        mov dword ptr ds : [public_66033d4], 0
        call public_6600bee
        add esp, 4
        public_65fddd2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_65fde21
        push 0
        lea ecx, ss:[esp+0x44]
        call public_65f3e70
        mov eax, dword ptr ds : [public_66033e0]
        test eax, eax
        jne public_65fddf8
        call public_6600de0
        mov dword ptr ds : [public_66033e0], eax
        public_65fddf8 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [eax]
        add esi, 0x40
        push esi
        push ecx
        lea ecx, ss:[esp+0x48]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x74]
        call public_65fdf80
        lea edx, ss:[esp+0x70]
        push edx
        jmp public_65fde25
        public_65fde21 : nop
        add esi, 0x40
        push esi
        public_65fde25 : nop
        mov eax, dword ptr ds : [public_6603130]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x130]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+8]
        add edx, 0x70
        inc ebx
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ds:[ebx-1]
        cmp edx, eax
        jl public_65fdd80
        mov ebx, dword ptr ss : [esp+0xA4]
        public_65fde55 : nop
        mov eax, dword ptr ds : [public_6603130]
        mov esi, dword ptr ds : [public_6602a60]
        lea edx, ss:[esp+0x2C]
        push edx
        push 0x99
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], 0x99
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6603130]
        mov esi, dword ptr ds : [public_6602a60]
        lea edx, ss:[esp+0x38]
        push edx
        push 0xA7
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0xA7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov esi, dword ptr ds : [public_6602a60]
        mov eax, dword ptr ds : [public_6603130]
        lea edx, ss:[esp+0x20]
        push edx
        neg esi
        push 0x97
        sbb esi, esi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 0x97
        mov ecx, dword ptr ds : [eax]
        push eax
        and esi, 3
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0
        push edx
        push ebx
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop esi
        public_65fdf6f : nop
        pop edi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x90
        ret 8
        UNREACHABLE_TRAP(0x65fdd10)
    }
}

#undef public_65fdd80
#undef public_65fddd2
#undef public_65fddf8
#undef public_65fde21
#undef public_65fde25
#undef public_65fde55
#undef public_65fdf6f
