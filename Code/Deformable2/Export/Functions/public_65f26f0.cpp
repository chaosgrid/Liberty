#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f26f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f28b0);
CLANG_FORWARD_PROC_SYMBOL(public_65f28e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f28f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f2a40);
CLANG_FORWARD_PROC_SYMBOL(public_65f2ab0);
CLANG_FORWARD_PROC_SYMBOL(public_65f89e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f8b00);
CLANG_FORWARD_PROC_SYMBOL(public_65fdcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);
CLANG_FORWARD_PROC_SYMBOL(public_6600c00);

#define public_65f274c _public_65f274c
#define public_65f276d _public_65f276d
#define public_65f276f _public_65f276f
#define public_65f279b _public_65f279b
#define public_65f27fe _public_65f27fe
#define public_65f281c _public_65f281c
#define public_65f281e _public_65f281e
#define public_65f2820 _public_65f2820
#define public_65f282e _public_65f282e
#define public_65f286c _public_65f286c

PROC_DECLARE(0x65f26f0, internal_65f26f0, public_65f26f0);
extern "C" NAKED register_t __cdecl internal_65f26f0()
{
    __asm
    {
        mov eax, 0x2018
        call public_6600c00
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x202C]
        push esi
        xor ebx, ebx
        call dword ptr ds : [public_660100c]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_6603158
        call public_65f2a40
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [public_660315c]
        je public_65f274c
        mov esi, dword ptr ds : [eax+0x10]
        mov ecx, esi
        call public_65f28e0
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x2018
        ret 
        public_65f274c : nop
        push edi
        push 1
        push 0x84
        call dword ptr ds : [public_6601040]
        add esp, 8
        test eax, eax
        je public_65f276d
        push esi
        mov ecx, eax
        call public_65f8b00
        mov edi, eax
        jmp public_65f276f
        public_65f276d : nop
        xor edi, edi
        public_65f276f : nop
        mov edx, dword ptr ss : [esp+0x202C]
        mov eax, dword ptr ss : [esp+0x2028]
        push edx
        push eax
        mov ecx, edi
        call public_65f89e0
        test al, al
        je public_65f279b
        mov cl, byte ptr ss : [esp+0x2034]
        mov ebx, edi
        mov byte ptr ds : [edi+0x70], cl
        jmp public_65f282e
        public_65f279b : nop
        mov ecx, edi
        call public_65f28f0
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_660100c]
        mov ecx, dword ptr ss : [esp+0x2030]
        add esp, 4
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov edi, eax
        mov eax, dword ptr ds : [public_6603134]
/*FIXUP push offset public_6602558 @0x65f27d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602558
        push edi
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x48]
        test eax, eax
        jge public_65f27fe
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x3C]
        jmp public_65f2820
        public_65f27fe : nop
        push 0x14
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f281c
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        push edi
        push esi
        mov ecx, eax
        call public_65fdcc0
        jmp public_65f281e
        public_65f281c : nop
        xor eax, eax
        public_65f281e : nop
        mov ebx, eax
        public_65f2820 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        je public_65f282e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65f282e : nop
        test ebx, ebx
        pop edi
        jne public_65f286c
        push esi
        lea eax, ss:[esp+0x24]
/*FIXUP push offset public_6602534 @0x65f2838*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602534
        push eax
        call public_65f28b0
        push eax
        push 0x39
/*FIXUP push offset public_66024e8 @0x65f2846*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024e8
        mov ecx, 0x100002
/*FIXUP push offset public_66024c8 @0x65f2850*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66024c8
        push ecx
        mov ecx, dword ptr ds : [public_6601008]
        call dword ptr ds : [ecx]
        add esp, 0x20
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x2018
        ret 
        public_65f286c : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6603158
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], 0
        call public_65f2ab0
        mov edx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr ds : [edx+0x10], ebx
        mov eax, ebx
        pop ebx
        add esp, 0x2018
        ret 
        UNREACHABLE_TRAP(0x65f26f0)
    }
}

#undef public_65f274c
#undef public_65f276d
#undef public_65f276f
#undef public_65f279b
#undef public_65f27fe
#undef public_65f281c
#undef public_65f281e
#undef public_65f2820
#undef public_65f282e
#undef public_65f286c
