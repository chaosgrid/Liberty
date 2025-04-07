#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530a20);
CLANG_FORWARD_PROC_SYMBOL(public_530d20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c069f);

#define public_530d87 _public_530d87
#define public_530dab _public_530dab
#define public_530dc0 _public_530dc0
#define public_530de1 _public_530de1
#define public_530e57 _public_530e57
#define public_530e68 _public_530e68
#define public_530e7d _public_530e7d
#define public_530ea2 _public_530ea2
#define public_530ec7 _public_530ec7
#define public_530ed0 _public_530ed0
#define public_530f28 _public_530f28
#define public_530f33 _public_530f33
#define public_530f42 _public_530f42
#define public_530f58 _public_530f58
#define public_530f77 _public_530f77
#define public_530f80 _public_530f80

PROC_DECLARE(0x530d20, internal_530d20, public_530d20);
extern "C" NAKED register_t __cdecl internal_530d20()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c069f @0x530d28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c069f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_675504]
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c605c]
        mov esi, dword ptr ss : [esp+0x158C]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_530dc0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_530de1
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP public_530d87 : nop
        push offset public_5de0dc @0x530d87*/
  FIXUP public_530d87 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de0dc
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_530dab
        mov eax, dword ptr ss : [esp+0x1590]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_530a20
        add esp, 8
        public_530dab : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_530d87
        jmp public_530de1
        nop 
        lea esp, ss:[esp]
        public_530dc0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x147
/*FIXUP push offset public_5de01c @0x530dcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de01c
        mov eax, 0x100002
/*FIXUP push offset public_5de0a4 @0x530dd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de0a4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_530de1 : nop
        mov ebp, dword ptr ds : [public_675504]
        sub ebp, edi
        lea eax, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0x1584], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_530e7d
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_530e68
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_530e57
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_530e57 : nop
        mov eax, dword ptr ss : [esp+0x1450]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1450], ebx
        public_530e68 : nop
        mov ecx, dword ptr ss : [esp+0x144C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_530e7d : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_530ea2
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_530ea2 : nop
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x145C], ebx
        je public_530ed0
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_530ec7
        cmp cl, 0xFF
        je public_530ec7
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_530ed0
        public_530ec7 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_530ed0 : nop
        mov dword ptr ss : [esp+0x1440], ebx
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_530f42
        cmp dword ptr ss : [esp+0x28], ebx
        je public_530f33
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_530f28
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_530f28 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x28], ebx
        public_530f33 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        public_530f42 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_530f58
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_530f58 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_530f80
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_530f77
        cmp cl, 0xFF
        je public_530f77
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_530f80
        public_530f77 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_530f80 : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x530d20)
    }
}

#undef public_530d87
#undef public_530dab
#undef public_530dc0
#undef public_530de1
#undef public_530e57
#undef public_530e68
#undef public_530e7d
#undef public_530ea2
#undef public_530ec7
#undef public_530ed0
#undef public_530f28
#undef public_530f33
#undef public_530f42
#undef public_530f58
#undef public_530f77
#undef public_530f80
