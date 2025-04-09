#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);
CLANG_FORWARD_PROC_SYMBOL(public_482f10);
CLANG_FORWARD_PROC_SYMBOL(public_483230);
CLANG_FORWARD_PROC_SYMBOL(public_483580);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc048);

#define public_4835bf _public_4835bf
#define public_4835f0 _public_4835f0
#define public_48363b _public_48363b
#define public_483645 _public_483645
#define public_483650 _public_483650
#define public_48368e _public_48368e
#define public_48369d _public_48369d
#define public_4836a1 _public_4836a1
#define public_4836a7 _public_4836a7
#define public_4836b7 _public_4836b7
#define public_4836d2 _public_4836d2
#define public_4836db _public_4836db
#define public_4836f0 _public_4836f0
#define public_483706 _public_483706
#define public_483731 _public_483731
#define public_48374f _public_48374f
#define public_483761 _public_483761
#define public_48377c _public_48377c

PROC_DECLARE(0x483580, internal_483580, public_483580);
extern "C" NAKED register_t __cdecl internal_483580()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc048 @0x483588*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc048
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        push edi
        je public_4836db
        mov eax, dword ptr ds : [esi+0x978]
        cmp eax, 1
        je public_4835bf
        cmp eax, 3
        jne public_4836db
        public_4835bf : nop
        mov eax, dword ptr ds : [public_668740]
        test eax, eax
        je public_4836db
        mov eax, dword ptr ds : [public_66873c]
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x978]
        xor edi, edi
        cmp eax, 3
        jne public_4835f0
        mov edi, 1
        public_4835f0 : nop
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        xor ebp, ebp
        mov byte ptr ss : [esp+0x28], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x2C], eax
        xor eax, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x40], eax
        call public_437f70
        cmp dword ptr ds : [esi+0x978], 3
        mov ecx, esi
        jne public_48363b
        lea edx, ss:[esp+0x24]
        push edx
        call public_483230
        jmp public_483645
        public_48363b : nop
        lea eax, ss:[esp+0x24]
        push eax
        call public_482f10
        public_483645 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_4836a7
        nop 
        public_483650 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jle public_4836a1
        cmp dword ptr ds : [esi+0x978], 3
        jne public_48368e
        mov eax, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [public_5c6360]
        push eax
        call public_47e460
        mov ecx, dword ptr ds : [esi+0x32C]
        add esp, 8
        cmp ecx, eax
        jne public_48369d
        cmp ebp, dword ptr ds : [esi+0x3A4]
        mov eax, dword ptr ss : [esp+0x28]
        je public_4836f0
        inc ebp
        jmp public_4836a1
        public_48368e : nop
        cmp ebp, dword ptr ds : [esi+0x3A4]
        je public_48374f
        inc ebp
        jmp public_4836a1
        public_48369d : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_4836a1 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_483650
        public_4836a7 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov edi, eax
        je public_4836d2
        public_4836b7 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_516f70
        cmp esi, edi
        jne public_4836b7
        mov eax, dword ptr ss : [esp+0x28]
        public_4836d2 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4836db : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        public_4836f0 : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_483731
        public_483706 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_516f70
        cmp dword ptr ss : [esp+0x14], esi
        jne public_483706
        mov eax, dword ptr ss : [esp+0x28]
        public_483731 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        public_48374f : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov ebx, eax
        je public_48377c
        public_483761 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_516f70
        cmp esi, ebx
        jne public_483761
        mov eax, dword ptr ss : [esp+0x28]
        public_48377c : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x483580)
    }
}

#undef public_4835bf
#undef public_4835f0
#undef public_48363b
#undef public_483645
#undef public_483650
#undef public_48368e
#undef public_48369d
#undef public_4836a1
#undef public_4836a7
#undef public_4836b7
#undef public_4836d2
#undef public_4836db
#undef public_4836f0
#undef public_483706
#undef public_483731
#undef public_48374f
#undef public_483761
#undef public_48377c
