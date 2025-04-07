#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44e030);
CLANG_FORWARD_PROC_SYMBOL(public_456d80);
CLANG_FORWARD_PROC_SYMBOL(public_456ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4572b0);
CLANG_FORWARD_PROC_SYMBOL(public_4572d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d2b);

#define public_44e092 _public_44e092
#define public_44e096 _public_44e096
#define public_44e0ea _public_44e0ea
#define public_44e14a _public_44e14a
#define public_44e152 _public_44e152
#define public_44e16a _public_44e16a

PROC_DECLARE(0x44e030, internal_44e030, public_44e030);
extern "C" NAKED register_t __cdecl internal_44e030()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d2b @0x44e032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [ebp+4]
        push edi
        xor edi, edi
        xor eax, eax
        and cl, 1
        mov dword ptr ss : [esp+0x10], esi
        mov byte ptr ss : [esp+0x2C], cl
        jne public_44e16a
        push 0xD8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], edi
        je public_44e092
        push ebp
        push esi
        push esi
        mov ecx, eax
        call public_456d80
        mov dword ptr ss : [esp+0xC], eax
        jmp public_44e096
        public_44e092 : nop
        mov dword ptr ss : [esp+0xC], edi
        public_44e096 : nop
        mov edx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [ebp+0x3C]
        shr edx, 1
        and dl, 1
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x14], dl
        mov edx, dword ptr ds : [public_611010]
        push ebx
        mov dword ptr ss : [esp+0x24], ecx
        xor eax, eax
        xor bl, bl
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        push esi
        mov byte ptr ss : [esp+0x3C], bl
        call dword ptr ds : [public_5c70e8]
        add esp, 0xC
        test eax, eax
        jne public_44e0ea
        mov edi, dword ptr ds : [public_611010]
        or ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        mov bl, 1
        dec ecx
        mov byte ptr ss : [esp+0x30], bl
        lea esi, ds:[esi+ecx+1]
        public_44e0ea : nop
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, esi
        call public_456ff0
        test bl, bl
        mov ebx, dword ptr ss : [esp+0x14]
        je public_44e152
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ebx+0x3C]
/*FIXUP push offset public_5cc46c @0x44e10a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc46c
        push ecx
        push edx
        call dword ptr ds : [public_5c625c]
        mov edi, eax
        add esp, 0xC
        test edi, edi
        jne public_44e14a
        mov ecx, dword ptr ds : [ebx+0xA4]
        mov edx, dword ptr ss : [ebp+0x3C]
        push ecx
        push edx
        push 0x21F
/*FIXUP push offset public_5cc32c @0x44e130*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc32c
        mov eax, 0x100001
/*FIXUP push offset public_5cc418 @0x44e13a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc418
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        public_44e14a : nop
        push edi
        mov ecx, esi
        call public_4572b0
        public_44e152 : nop
        mov cl, byte ptr ds : [ebx+0x60]
        mov edx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+0x84], cl
        push edx
        mov ecx, esi
        call public_4572d0
        mov eax, esi
        pop ebx
        public_44e16a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x44e030)
    }
}

#undef public_44e092
#undef public_44e096
#undef public_44e0ea
#undef public_44e14a
#undef public_44e152
#undef public_44e16a
