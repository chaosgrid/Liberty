#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e45b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be839);

#define public_4e4624 _public_4e4624
#define public_4e4671 _public_4e4671
#define public_4e467a _public_4e467a

PROC_DECLARE(0x4e45b0, internal_4e45b0, public_4e45b0);
extern "C" NAKED register_t __cdecl internal_4e45b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be839 @0x4e45b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be839
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        or ecx, 0xFFFFFFFF
        xor ebx, ebx
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4e4624
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ebp
        mov byte ptr ds : [eax+ebp], bl
        public_4e4624 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx+0x584]
        lea edx, ss:[esp+0x10]
        push edx
        add ecx, 0x57C
        push 1
        push eax
        mov dword ptr ss : [esp+0x34], ebx
        call public_4e5ab0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_4e467a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_4e4671
        cmp cl, 0xFF
        je public_4e4671
        pop edi
        pop esi
        dec cl
        pop ebp
        mov byte ptr ds : [eax], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_4e4671 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4e467a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4e45b0)
    }
}

#undef public_4e4624
#undef public_4e4671
#undef public_4e467a
