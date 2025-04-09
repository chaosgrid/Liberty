#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4029a0);
CLANG_FORWARD_PROC_SYMBOL(public_418430);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_418460 _public_418460
#define public_418470 _public_418470
#define public_418473 _public_418473
#define public_418477 _public_418477
#define public_41849f _public_41849f
#define public_4184f2 _public_4184f2
#define public_4184ff _public_4184ff
#define public_418527 _public_418527
#define public_418535 _public_418535

PROC_DECLARE(0x418430, internal_418430, public_418430);
extern "C" NAKED register_t __cdecl internal_418430()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], 0
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ecx
        mov al, 1
        je public_418477
        lea esp, ss:[esp]
        public_418460 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov ebp, esi
        je public_418470
        mov esi, dword ptr ds : [esi]
        jmp public_418473
        public_418470 : nop
        mov esi, dword ptr ds : [esi+8]
        public_418473 : nop
        cmp esi, ecx
        jne public_418460
        public_418477 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_41849f
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_4029a0
        mov eax, dword ptr ds : [eax]
        pop edi
        pop esi
        add eax, 0x10
        pop ebp
        add esp, 0x28
        ret 4
        public_41849f : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_4184ff
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_4184f2
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 1
        call public_4029a0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_46d660
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        lea eax, ds:[edx+0x10]
        pop ebp
        add esp, 0x28
        ret 4
        public_4184f2 : nop
        lea ecx, ss:[esp+0x10]
        call public_43c010
        mov edx, dword ptr ss : [esp+0x24]
        public_4184ff : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], edx
        jge public_418527
        lea ecx, ss:[esp+0xE]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x22], 1
        call public_4029a0
        jmp public_418535
        public_418527 : nop
        lea edx, ss:[esp+0xF]
        mov byte ptr ss : [esp+0xF], 0
        push edx
        lea eax, ss:[esp+0x14]
        public_418535 : nop
        lea ecx, ss:[esp+0x30]
        push eax
        call public_46d660
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        lea eax, ds:[ecx+0x10]
        pop ebp
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x418430)
    }
}

#undef public_418460
#undef public_418470
#undef public_418473
#undef public_418477
#undef public_41849f
#undef public_4184f2
#undef public_4184ff
#undef public_418527
#undef public_418535
