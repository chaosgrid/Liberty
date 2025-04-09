#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532170);
CLANG_FORWARD_PROC_SYMBOL(public_533780);
CLANG_FORWARD_PROC_SYMBOL(public_533880);
CLANG_FORWARD_PROC_SYMBOL(public_533930);
CLANG_FORWARD_PROC_SYMBOL(public_539980);

#define public_5337a8 _public_5337a8
#define public_5337aa _public_5337aa
#define public_533827 _public_533827
#define public_53384f _public_53384f

PROC_DECLARE(0x533780, internal_533780, public_533780);
extern "C" NAKED register_t __cdecl internal_533780()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je public_5337a8
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_5337a8
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5337a8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5337aa
        public_5337a8 : nop
        xor eax, eax
        public_5337aa : nop
        fld dword ptr ds : [eax+0x140]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_533827
        fsubr qword ptr ds : [public_5c89b8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0xE0], 1
        fstp dword ptr ss : [esp+8]
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push eax
        call public_533880
        lea eax, ds:[esi+0xC]
        add esp, 8
        test eax, eax
        je public_53384f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53384f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_53384f
        mov eax, dword ptr ds : [eax+0x88]
        test eax, eax
        je public_53384f
        mov cl, byte ptr ds : [eax+0x80]
        test cl, cl
        jne public_53384f
        lea eax, ss:[esp+0x20]
        push eax
        push 3
        call public_533930
        add esp, 8
        jmp public_53384f
        public_533827 : nop
        mov al, byte ptr ds : [esi+0xE0]
        fstp st(0)
        test al, al
        je public_53384f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0xE0], 0
        call dword ptr ds : [edx+0x1C]
        cmp eax, 0xFFFFFFFF
        je public_53384f
        push eax
        call public_532170
        add esp, 4
        public_53384f : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_539980
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x533780)
    }
}

#undef public_5337a8
#undef public_5337aa
#undef public_533827
#undef public_53384f
