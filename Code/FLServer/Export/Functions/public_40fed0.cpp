#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410750);
CLANG_FORWARD_PROC_SYMBOL(public_4113d0);
CLANG_FORWARD_PROC_SYMBOL(public_4113f0);
CLANG_FORWARD_PROC_SYMBOL(public_411a10);

#define public_40ff00 _public_40ff00
#define public_40ff10 _public_40ff10
#define public_40ff13 _public_40ff13
#define public_40ff17 _public_40ff17
#define public_40ff2d _public_40ff2d
#define public_40ff84 _public_40ff84
#define public_40ff8d _public_40ff8d
#define public_40ffa7 _public_40ffa7
#define public_40ffd5 _public_40ffd5

PROC_DECLARE(0x40fed0, internal_40fed0, public_40fed0);
extern "C" NAKED register_t __cdecl internal_40fed0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ds : [ecx+0x68]
        mov edx, dword ptr ss : [esp+0x2C]
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+0x64]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], 0
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        mov ebp, eax
        mov al, 1
        je public_40ff17
        lea ebx, ds:[ebx]
        public_40ff00 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_40ff10
        mov esi, dword ptr ds : [esi]
        jmp public_40ff13
        public_40ff10 : nop
        mov esi, dword ptr ds : [esi+8]
        public_40ff13 : nop
        cmp esi, ecx
        jne public_40ff00
        public_40ff17 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_40ff2d
        mov byte ptr ss : [esp+0x38], 1
        lea eax, ss:[esp+0x38]
        lea edx, ss:[esp+0x14]
        jmp public_40ffa7
        public_40ff2d : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_40ff8d
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_410750
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_40ff84
        lea edx, ss:[esp+0xD]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x21], 1
        call public_4113f0
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_4113d0
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x10], edx
        pop ebp
        add esp, 0x28
        ret 8
        public_40ff84 : nop
        lea ecx, ss:[esp+0x10]
        call public_411a10
        public_40ff8d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [esp+0x2C]
        jae public_40ffd5
        mov byte ptr ss : [esp+0xE], 1
        lea eax, ss:[esp+0xE]
        lea edx, ss:[esp+0x20]
        public_40ffa7 : nop
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        push ebp
        push esi
        push edx
        mov ecx, edi
        call public_4113f0
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_4113d0
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x10], eax
        pop ebp
        add esp, 0x28
        ret 8
        public_40ffd5 : nop
        lea edx, ss:[esp+0xF]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x17], 0
        call public_4113d0
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x10], ecx
        pop ebp
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x40fed0)
    }
}

#undef public_40ff00
#undef public_40ff10
#undef public_40ff13
#undef public_40ff17
#undef public_40ff2d
#undef public_40ff84
#undef public_40ff8d
#undef public_40ffa7
#undef public_40ffd5
