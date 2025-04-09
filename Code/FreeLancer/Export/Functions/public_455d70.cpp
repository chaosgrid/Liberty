#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455d70);
CLANG_FORWARD_PROC_SYMBOL(public_456bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba018);

#define public_455d9c _public_455d9c
#define public_455dfc _public_455dfc
#define public_455e18 _public_455e18
#define public_455e6e _public_455e6e
#define public_455e77 _public_455e77

PROC_DECLARE(0x455d70, internal_455d70, public_455d70);
extern "C" NAKED register_t __cdecl internal_455d70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba018 @0x455d78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba018
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        xor eax, eax
        cmp esi, eax
        push edi
        mov ebx, ecx
        jne public_455d9c
        mov esi, offset public_5c865c
        public_455d9c : nop
        mov cl, byte ptr ss : [esp+0x34]
        push ebp
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ss : [esp+0x34]
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], eax
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_455dfc
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebp
        mov byte ptr ds : [ecx+ebp], 0
        public_455dfc : nop
        mov esi, dword ptr ds : [ebx+0x128]
        mov edi, dword ptr ds : [esi+4]
        push 0x1C
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        pop ebp
        jne public_455e18
        mov edi, eax
        public_455e18 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_456bd0
        mov edx, dword ptr ds : [ebx+0x12C]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        pop edi
        inc edx
        test eax, eax
        pop esi
        mov dword ptr ds : [ebx+0x12C], edx
        pop ebx
        je public_455e77
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_455e6e
        cmp cl, 0xFF
        je public_455e6e
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        public_455e6e : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_455e77 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x455d70)
    }
}

#undef public_455d9c
#undef public_455dfc
#undef public_455e18
#undef public_455e6e
#undef public_455e77
