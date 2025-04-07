#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1bd20);
CLANG_FORWARD_PROC_SYMBOL(public_6d228d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d26f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d31da0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62ad1);

#define public_6d26f5e _public_6d26f5e
#define public_6d26f67 _public_6d26f67
#define public_6d26fc7 _public_6d26fc7
#define public_6d26fd8 _public_6d26fd8
#define public_6d26fe1 _public_6d26fe1
#define public_6d27022 _public_6d27022
#define public_6d27035 _public_6d27035
#define public_6d2703e _public_6d2703e
#define public_6d2707f _public_6d2707f
#define public_6d27092 _public_6d27092
#define public_6d2709b _public_6d2709b
#define public_6d27100 _public_6d27100

PROC_DECLARE(0x6d26f10, internal_6d26f10, public_6d26f10);
extern "C" NAKED register_t __cdecl internal_6d26f10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62ad1 @0x6d26f18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62ad1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        and eax, 0x8001
        cmp eax, 0x8000
        push edi
        ja public_6d2707f
        je public_6d27022
        sub eax, 0
        mov eax, dword ptr ds : [esi]
        je public_6d26fc7
        test eax, eax
        je public_6d26f5e
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x10
        cmp eax, ecx
        jbe public_6d26f67
        public_6d26f5e : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26f67 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d27100
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        call dword ptr ds : [public_6d64ba0]
        add esp, 4
        mov ecx, esi
        mov ebx, eax
        call public_6d228d0
        push edi
        mov word ptr ds : [esi+8], bx
        mov dword ptr ds : [esi], offset public_6d694ac
        call dword ptr ds : [public_6d64bac]
        mov dword ptr ds : [esi], offset public_6d69484
        mov word ptr ds : [esi+0xE], ax
        add esp, 4
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6d26fc7 : nop
        test eax, eax
        je public_6d26fd8
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add ecx, 0x10
        cmp ecx, eax
        jbe public_6d26fe1
        public_6d26fd8 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d26fe1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d27100
        mov ecx, esi
        call public_6d228d0
        mov dx, word ptr ss : [esp+0x1C]
        mov word ptr ds : [esi+8], dx
        mov dword ptr ds : [esi], offset public_6d69458
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6d27022 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d27035
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x10
        cmp eax, ecx
        jbe public_6d2703e
        public_6d27035 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d2703e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        test esi, esi
        mov dword ptr ds : [eax+4], ecx
        je public_6d27100
        mov ecx, esi
        call public_6d228d0
        mov cx, word ptr ss : [esp+0x1C]
        mov word ptr ds : [esi+8], cx
        mov dword ptr ds : [esi], offset public_6d6942c
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6d2707f : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d27092
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0x10
        cmp edx, eax
        jbe public_6d2709b
        public_6d27092 : nop
        push 0x10
        mov ecx, esi
        call public_6d1bd20
        public_6d2709b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x20], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6d27100
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        call dword ptr ds : [public_6d64ba0]
        add esp, 4
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6d31da0
        push edi
        call dword ptr ds : [public_6d64bac]
        mov dword ptr ds : [esi], offset public_6d69404
        mov word ptr ds : [esi+0xE], ax
        add esp, 4
        mov eax, esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        public_6d27100 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d26f10)
    }
}

#undef public_6d26f5e
#undef public_6d26f67
#undef public_6d26fc7
#undef public_6d26fd8
#undef public_6d26fe1
#undef public_6d27022
#undef public_6d27035
#undef public_6d2703e
#undef public_6d2707f
#undef public_6d27092
#undef public_6d2709b
#undef public_6d27100
