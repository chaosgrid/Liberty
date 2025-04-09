#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285c0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_42cc30);
CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_4a4110);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcbcf);

#define public_4a4172 _public_4a4172
#define public_4a419b _public_4a419b

PROC_DECLARE(0x4a4110, internal_4a4110, public_4a4110);
extern "C" NAKED register_t __cdecl internal_4a4110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcbcf @0x4a4112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcbcf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi], offset public_5d3fdc
        mov dword ptr ds : [esi+0x7C], offset public_5d3fd0
        mov dword ptr ds : [esi+0x32C], offset public_5d3fc8
        mov al, byte ptr ds : [esi+0x66C]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr ss : [esp+0x20], 2
        je public_4a4172
        lea eax, ds:[esi+0x668]
        push eax
        call public_42ae40
        push eax
        call public_4285c0
        add esp, 8
        public_4a4172 : nop
        mov eax, dword ptr ds : [esi+0x584]
        cmp eax, ebx
        je public_4a419b
        mov ecx, dword ptr ds : [public_5c6148]
        mov edx, dword ptr ds : [eax-4]
        lea edi, ds:[eax-4]
        push ecx
        push edx
        push 0x60
        push eax
        call public_5b7ec6
        push edi
        call public_5b7e1d
        add esp, 4
        public_4a419b : nop
        mov eax, dword ptr ds : [esi+0x58C]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0x344]
        push eax
        call dword ptr ds : [public_5c71d8]
        mov eax, dword ptr ds : [esi+0x348]
        push eax
        call public_5b7e1d
        lea ebp, ds:[esi+0x560]
        push ebp
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov dword ptr ds : [esi+0x34C], ebx
        call dword ptr ds : [public_5c60c8]
        lea edi, ds:[esi+0x564]
        add esp, 0x10
        mov ecx, edi
        call public_42cc50
        mov ecx, edi
        mov dword ptr ss : [ebp], ebx
        call public_42cc30
        mov ecx, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x55C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        or ebp, 0xFFFFFFFF
        mov ecx, edi
        mov dword ptr ds : [esi+0x55C], ebp
        mov byte ptr ss : [esp+0x20], 1
        call public_42cc50
        lea ecx, ds:[esi+0x32C]
        mov byte ptr ss : [esp+0x20], bl
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], ebp
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4a4110)
    }
}

#undef public_4a4172
#undef public_4a419b
