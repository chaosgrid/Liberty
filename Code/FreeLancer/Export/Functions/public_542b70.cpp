#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_542b70);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0d75);

#define public_542bef _public_542bef
#define public_542bf1 _public_542bf1
#define public_542c1e _public_542c1e
#define public_542cf5 _public_542cf5

PROC_DECLARE(0x542b70, internal_542b70, public_542b70);
extern "C" NAKED register_t __cdecl internal_542b70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0d75 @0x542b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0d75
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [public_5c69b4]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], eax
        lea esi, ds:[edi+8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_5c6ab4]
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x30], 1
        mov dword ptr ds : [edi], offset public_5dfc98
        mov dword ptr ds : [esi], offset public_5dfc78
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x18], eax
        je public_542cf5
        add eax, 0xC
        cmp eax, ebx
        push ebp
        je public_542bef
        mov ebp, dword ptr ds : [eax+4]
        cmp ebp, ebx
        je public_542bef
        mov ecx, dword ptr ss : [ebp+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_542bf1
        public_542bef : nop
        xor ebp, ebp
        public_542bf1 : nop
        push ebp
        push esi
        call dword ptr ds : [public_5c6ab0]
        add esp, 8
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c65c4]
        push 7
        mov ecx, ebp
        call dword ptr ds : [public_5c6648]
        test al, al
        mov esi, dword ptr ds : [public_5c6a54]
        je public_542c1e
        push ebx
        mov ecx, ebp
        call esi
        public_542c1e : nop
        push 7
        mov ecx, ebp
        call esi
        mov ebx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ebx+0x164]
        push 0
        lea esi, ds:[edi+0x2C]
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, ebx
        mov dword ptr ds : [edi+0x1C], edx
        call dword ptr ds : [public_5c6aac]
        fld dword ptr ds : [esi]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fchs 
        fld dword ptr ss : [esp+0x18]
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fxch 
        fstp dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x18], ecx
        fstp dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x1C]
        fchs 
        fld dword ptr ss : [esp+0x18]
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        fxch 
        fstp dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x20], edx
        lea edx, ss:[esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [ebx+0x88]
        mov cl, byte ptr ds : [eax+0x81]
        fstp st(0)
        test cl, cl
        fstp st(0)
        fstp st(0)
        sete cl
        mov byte ptr ds : [edi+0x28], cl
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6a3c]
        pop ebp
        public_542cf5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x542b70)
    }
}

#undef public_542bef
#undef public_542bf1
#undef public_542c1e
#undef public_542cf5
