#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435dd0);
CLANG_FORWARD_PROC_SYMBOL(public_442200);
CLANG_FORWARD_PROC_SYMBOL(public_442810);
CLANG_FORWARD_PROC_SYMBOL(public_445d30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);
CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);

#define public_445c75 _public_445c75
#define public_445ce1 _public_445ce1
#define public_445cff _public_445cff
#define public_445d12 _public_445d12
#define public_445d21 _public_445d21

PROC_DECLARE(0x445c10, internal_445c10, public_445c10);
extern "C" NAKED register_t __cdecl internal_445c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59e6a0
        test al, al
        jne public_445d21
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        mov edi, dword ptr ds : [esi+0x164]
        cmp edi, 0xFFFFFFFF
        je public_445c75
        push 0
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        mov byte ptr ss : [esp+0x20], 0
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x20]
        add esp, 0x10
        test al, 1
        jne public_445c75
        mov cl, al
        or cl, 0x41
        mov byte ptr ss : [esp+0x10], cl
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        push ecx
        push edi
        call public_4c4e00
        add esp, 0xC
        public_445c75 : nop
        mov edx, dword ptr ds : [esi+0x300]
        push edx
        push esi
        call public_442810
        add esp, 8
        test al, al
        pop edi
        jne public_445d21
        mov eax, dword ptr ds : [esi+0x36C]
        test eax, eax
        jne public_445d21
        mov eax, dword ptr ds : [esi+0x1B0]
        cmp eax, 0xFFFFFFFF
        je public_445ce1
        mov ecx, dword ptr ds : [esi+8]
        push esi
/*FIXUP push offset _public_445d30 @0x445cab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_445d30
        push eax
        mov eax, dword ptr ds : [esi+0x1B8]
        push eax
        push ecx
        push esi
        call public_435dd0
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x18
        push eax
        mov eax, dword ptr ds : [esi+0x154]
        push eax
        call dword ptr ds : [edx+0xA4]
        pop esi
        ret 8
        public_445ce1 : nop
        mov esi, dword ptr ds : [esi+0x300]
        cmp esi, 1
        je public_445d21
        cmp esi, 2
        jne public_445cff
        push 5
        call public_442200
        add esp, 4
        pop esi
        ret 8
        public_445cff : nop
        cmp esi, 3
        jne public_445d12
        push 7
        call public_442200
        add esp, 4
        pop esi
        ret 8
        public_445d12 : nop
        cmp esi, 4
        jne public_445d21
        push 8
        call public_442200
        add esp, 4
        public_445d21 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x445c10)
    }
}

#undef public_445c75
#undef public_445ce1
#undef public_445cff
#undef public_445d12
#undef public_445d21
