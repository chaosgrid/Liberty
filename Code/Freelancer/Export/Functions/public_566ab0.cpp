#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576190);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);

#define public_566af7 _public_566af7
#define public_566afd _public_566afd
#define public_566b20 _public_566b20
#define public_566b3e _public_566b3e
#define public_566b56 _public_566b56
#define public_566b73 _public_566b73
#define public_566b98 _public_566b98
#define public_566ba7 _public_566ba7
#define public_566bb8 _public_566bb8

PROC_DECLARE(0x566ab0, internal_566ab0, public_566ab0);
extern "C" NAKED register_t __cdecl internal_566ab0()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        push edi
        lea ecx, ds:[ebx+0x7C]
        call public_576190
        mov eax, dword ptr ds : [ebx+0x54C]
        xor edi, edi
        cmp eax, edi
        je public_566afd
        push eax
        call dword ptr ds : [public_5c6f08]
        test eax, eax
        jne public_566af7
        call dword ptr ds : [public_5c6f04]
        push eax
/*FIXUP push offset public_5e27a0 @0x566add*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e27a0
        push 2
        push 0x17ED
/*FIXUP push offset public_5e2724 @0x566ae9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        call dword ptr ds : [public_5c6bd0]
        add esp, 0x14
        public_566af7 : nop
        mov dword ptr ds : [ebx+0x54C], edi
        public_566afd : nop
        mov dword ptr ds : [ebx+0x550], edi
        mov cl, byte ptr ds : [ebx+0x6C]
        push ebp
        mov ebp, dword ptr ds : [ebx+0xC]
        and cl, 0xFC
        cmp ebp, edi
        mov byte ptr ds : [ebx+0x6C], cl
        je public_566ba7
        push esi
        lea esp, ss:[esp]
        public_566b20 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, edi
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x18], 0
        jne public_566b3e
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x18], 0
        jmp public_566b73
        public_566b3e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_566b56
        mov eax, 0x1F
        public_566b56 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x18], 0
        mov dword ptr ss : [esp+0x14], eax
        public_566b73 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edi, offset public_5cb118
        lea esi, ss:[esp+0x18]
        mov ecx, 0xE
        xor edx, edx
        repe cmpsb
        jne public_566b98
        mov eax, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        public_566b98 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        xor edi, edi
        test ebp, ebp
        jne public_566b20
        pop esi
        public_566ba7 : nop
        mov ecx, dword ptr ds : [ebx+0x548]
        cmp ecx, edi
        pop ebp
        je public_566bb8
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_566bb8 : nop
        push ebx
        mov dword ptr ds : [ebx+0x548], edi
        call public_59dc00
        add esp, 4
        pop edi
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x566ab0)
    }
}

#undef public_566af7
#undef public_566afd
#undef public_566b20
#undef public_566b3e
#undef public_566b56
#undef public_566b73
#undef public_566b98
#undef public_566ba7
#undef public_566bb8
