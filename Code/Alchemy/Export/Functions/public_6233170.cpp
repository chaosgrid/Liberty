#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201c70);
CLANG_FORWARD_PROC_SYMBOL(public_6217ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6217ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6233170);
CLANG_FORWARD_PROC_SYMBOL(public_6233330);
CLANG_FORWARD_PROC_SYMBOL(public_6234000);
CLANG_FORWARD_PROC_SYMBOL(public_6234020);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);
CLANG_FORWARD_JUMP_SYMBOL(public_6249bb0);

#define public_62331eb _public_62331eb
#define public_62332de _public_62332de
#define public_6233316 _public_6233316

PROC_DECLARE(0x6233170, internal_6233170, public_6233170);
extern "C" NAKED register_t __cdecl internal_6233170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249bb0 @0x6233172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249bb0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push esi
        mov esi, dword ptr ss : [esp+0x80]
        push edi
        lea eax, ss:[esp+0x10]
        lea edi, ds:[esi+0xD8]
        push eax
        mov ecx, edi
        call public_6234000
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x7C], 0
        push ecx
        mov ecx, edi
        call public_6234020
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        cmp edx, eax
        mov byte ptr ss : [esp+0x7C], 1
        je public_6233316
        mov al, byte ptr ds : [public_6257919]
        test al, al
        mov eax, dword ptr ds : [esi+0xAC]
        je public_62331eb
        push eax
        push 2
        call public_6201c70
        add esp, 8
        jmp public_6233316
        public_62331eb : nop
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0x84], 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xD0]
        mov eax, dword ptr ds : [esi+0xAC]
        lea edx, ss:[esp+0x84]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xD4]
        mov eax, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 4
        mov ecx, offset public_6257aec
        call public_6240f50
        test al, al
        je public_6233316
        mov ecx, esi
        call public_6233330
        mov ecx, offset public_6257aec
        call public_6241070
        test eax, eax
        je public_6233316
        mov eax, dword ptr ds : [public_62578e8]
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        mov ecx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov ecx, dword ptr ds : [ecx+0x68]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x13
        push eax
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov ecx, dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x14
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov ecx, dword ptr ds : [esi+0xBC]
        push ecx
        push 0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x40]
        push 0
        lea ecx, ss:[esp+0x18]
        mov edi, eax
        call public_6217ad0
        mov eax, dword ptr ds : [public_6257b38]
        test eax, eax
        jne public_62332de
        call public_623e830
        mov dword ptr ds : [public_6257b38], eax
        public_62332de : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x4C
        push esi
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[esp+0x44]
        push eax
        call public_6217ab0
        mov eax, dword ptr ds : [public_6257bc0]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x7C]
        mov ecx, offset public_6257aec
        call public_6241180
        public_6233316 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x6233170)
    }
}

#undef public_62331eb
#undef public_62332de
#undef public_6233316
