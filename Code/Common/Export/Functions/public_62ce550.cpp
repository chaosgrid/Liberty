#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ce59a _public_62ce59a
#define public_62ce5b1 _public_62ce5b1
#define public_62ce5e6 _public_62ce5e6
#define public_62ce5e8 _public_62ce5e8
#define public_62ce618 _public_62ce618
#define public_62ce61a _public_62ce61a
#define public_62ce64d _public_62ce64d
#define public_62ce651 _public_62ce651

PROC_DECLARE(0x62ce550, internal_62ce550, public_62ce550);
extern "C" NAKED register_t __cdecl internal_62ce550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        mov ecx, esi
        call public_62d2090
        test al, al
        mov byte ptr ss : [esp+0x14], al
        je public_62ce59a
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x2C]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x2C]
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0xA4]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0xA4]
        push eax
        call dword ptr ds : [edx]
        public_62ce59a : nop
        mov eax, dword ptr ds : [esi+0x174]
        test eax, eax
        lea ecx, ds:[esi+0x174]
        je public_62ce5b1
        push 0
        call public_6341610
        public_62ce5b1 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov byte ptr ds : [esi+0x17C], 0
        mov byte ptr ds : [esi+0x164], 0
        mov dword ptr ds : [esi+0x168], 0
        mov cx, word ptr ds : [public_63a4aa4]
        add eax, 8
        mov word ptr ss : [esp+0x10], cx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ce5e6
        lea ecx, ds:[eax-8]
        jmp public_62ce5e8
        public_62ce5e6 : nop
        xor ecx, ecx
        public_62ce5e8 : nop
        mov edx, dword ptr ds : [ecx]
        push 0x100000
        push 1
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x114]
        test eax, eax
        jne public_62ce64d
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 8
        mov byte ptr ds : [esi+0x164], 1
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ce618
        lea ecx, ds:[eax-8]
        jmp public_62ce61a
        public_62ce618 : nop
        xor ecx, ecx
        public_62ce61a : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push 5
        lea eax, ss:[esp+0x18]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x11C]
        test eax, eax
        mov al, byte ptr ss : [esp+0x14]
        jne public_62ce651
        fld dword ptr ss : [esp+0xC]
        pop edi
        fmul qword ptr ds : [public_639fe28]
        fstp dword ptr ds : [esi+0x168]
        pop esi
        ret 0xC
        public_62ce64d : nop
        mov al, byte ptr ss : [esp+0x14]
        public_62ce651 : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62ce550)
    }
}

#undef public_62ce59a
#undef public_62ce5b1
#undef public_62ce5e6
#undef public_62ce5e8
#undef public_62ce618
#undef public_62ce61a
#undef public_62ce64d
#undef public_62ce651
