#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712ac0);

#define public_67129f1 _public_67129f1
#define public_6712a15 _public_6712a15
#define public_6712a2d _public_6712a2d
#define public_6712a49 _public_6712a49

PROC_DECLARE(0x6712990, internal_6712990, public_6712990);
extern "C" NAKED register_t __cdecl internal_6712990()
{
    __asm
    {
        mov al, byte ptr ds : [public_671b3f4]
        sub esp, 0xC
        push ebx
        xor bl, bl
        push esi
        push edi
        test al, al
        mov esi, ecx
        je public_67129f1
        lea ecx, ss:[esp+0x10]
        push 1
        push ecx
        lea edx, ss:[esp+0x16]
        push 2
        mov byte ptr ss : [esp+0x1A], al
        mov al, byte ptr ss : [esp+0x28]
        push edx
        push 0
        push 0
        mov byte ptr ss : [esp+0x27], al
        mov byte ptr ds : [public_671b3f4], bl
        call dword ptr ds : [public_6719368]
        push 0
        lea eax, ss:[esp+0x18]
        push 0
        push eax
        push 0x400
        call dword ptr ds : [public_67170b4]
        push eax
        push 0
        push 0x1300
        call dword ptr ds : [public_6719354]
        jmp public_6712a2d
        public_67129f1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [public_67170b0]
        test eax, eax
        je public_6712a15
        mov cl, byte ptr ss : [esp+0x1C]
        pop edi
        mov al, bl
        pop esi
        mov byte ptr ds : [public_671b3f4], cl
        pop ebx
        add esp, 0xC
        ret 4
        public_6712a15 : nop
        lea edx, ss:[esp+0x10]
        push 1
        push edx
        lea eax, ss:[esp+0x24]
        push 1
        push eax
        push 0
        push 0
        call dword ptr ds : [public_6719368]
        public_6712a2d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push eax
        mov edi, eax
        call dword ptr ds : [edx+0x14]
        mov bl, al
        test bl, bl
        je public_6712a49
        mov ecx, esi
        push edi
        call public_6712ac0
        public_6712a49 : nop
        pop edi
        mov al, bl
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6712990)
    }
}

#undef public_67129f1
#undef public_6712a15
#undef public_6712a2d
#undef public_6712a49
