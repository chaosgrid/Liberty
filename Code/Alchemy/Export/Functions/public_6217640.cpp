#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201c70);
CLANG_FORWARD_PROC_SYMBOL(public_6216550);
CLANG_FORWARD_PROC_SYMBOL(public_6216f20);
CLANG_FORWARD_PROC_SYMBOL(public_6217640);
CLANG_FORWARD_PROC_SYMBOL(public_6217ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6217bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);
CLANG_FORWARD_JUMP_SYMBOL(public_6248330);

#define public_62176b8 _public_62176b8
#define public_621772e _public_621772e
#define public_6217733 _public_6217733
#define public_6217815 _public_6217815

PROC_DECLARE(0x6217640, internal_6217640, public_6217640);
extern "C" NAKED register_t __cdecl internal_6217640()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248330 @0x6217642*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248330
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        push edi
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0xD8]
        push eax
        mov ecx, edi
        call public_6217ba0
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x4C], 0
        push ecx
        mov ecx, edi
        call public_6217bc0
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        cmp edx, eax
        mov byte ptr ss : [esp+0x4C], 1
        je public_6217815
        mov al, byte ptr ds : [public_6257919]
        test al, al
        mov eax, dword ptr ds : [esi+0xAC]
        je public_62176b8
        push eax
        push 0
        call public_6201c70
        add esp, 8
        jmp public_6217815
        public_62176b8 : nop
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x54], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xD0]
        mov eax, dword ptr ds : [esi+0xAC]
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xD4]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 4
        mov ecx, offset public_62579dc
        call public_6240f50
        test al, al
        je public_6217815
        mov edi, dword ptr ds : [public_62578f0]
        mov ecx, esi
        inc edi
        mov dword ptr ds : [public_62578f0], edi
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 2
        cmp al, 2
        jne public_621772e
        call public_6216550
        jmp public_6217733
        public_621772e : nop
        call public_6216f20
        public_6217733 : nop
        mov ecx, offset public_62579dc
        call public_6241070
        test eax, eax
        je public_6217815
        mov eax, dword ptr ds : [public_62578e8]
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x68]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [esi+0xBC]
        push edx
        push 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [public_6257bc0]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, offset public_62579dc
        call public_6241180
        public_6217815 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x6217640)
    }
}

#undef public_62176b8
#undef public_621772e
#undef public_6217733
#undef public_6217815
