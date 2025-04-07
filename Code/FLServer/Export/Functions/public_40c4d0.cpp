#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402380);
CLANG_FORWARD_PROC_SYMBOL(public_4023a0);
CLANG_FORWARD_PROC_SYMBOL(public_40c4d0);
CLANG_FORWARD_PROC_SYMBOL(public_4186b4);
CLANG_FORWARD_PROC_SYMBOL(public_4186d8);
CLANG_FORWARD_PROC_SYMBOL(public_4186de);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_JUMP_SYMBOL(public_41a05b);

#define public_40c510 _public_40c510
#define public_40c559 _public_40c559
#define public_40c5a2 _public_40c5a2
#define public_40c5d8 _public_40c5d8
#define public_40c5e7 _public_40c5e7
#define public_40c674 _public_40c674
#define public_40c695 _public_40c695
#define public_40c697 _public_40c697

PROC_DECLARE(0x40c4d0, internal_40c4d0, public_40c4d0);
extern "C" NAKED register_t __cdecl internal_40c4d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a05b @0x40c4d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a05b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x81C
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x6F4]
        test al, al
        jne public_40c510
        mov al, 1
        pop ebp
        mov ecx, dword ptr ss : [esp+0x81C]
        mov dword ptr fs : [0], ecx
        add esp, 0x828
        ret 
        public_40c510 : nop
        mov eax, dword ptr ds : [public_4277d8]
        push ebx
        push esi
        push edi
        push 0xFFFFFFFF
        push eax
        mov byte ptr ss : [esp+0x1B], 1
        call dword ptr ds : [public_41b1b4]
        mov eax, dword ptr ss : [ebp+0xC8]
        xor edi, edi
        cmp eax, edi
        je public_40c695
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, edi
        lea esi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], eax
        je public_40c695
        mov ecx, dword ptr ss : [ebp+0x81C]
        cmp ecx, edi
        jne public_40c559
        mov ecx, dword ptr ds : [public_41b8c8]
        public_40c559 : nop
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        cmp eax, edi
        jne public_40c695
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x838], edi
        call public_4186b4
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp edi, eax
        je public_40c5d8
        mov ebx, dword ptr ds : [public_41b984]
        public_40c5a2 : nop
        mov edx, dword ptr ds : [edi]
        push edx
/*FIXUP push offset public_4257e0 @0x40c5a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4257e0
        push esi
        call dword ptr ds : [public_41b994]
        lea esi, ds:[esi+eax*2]
        mov eax, dword ptr ss : [esp+0x2C]
        add edi, 4
        add esp, 0xC
        cmp edi, eax
        je public_40c5d8
/*FIXUP push offset public_4257dc @0x40c5c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4257dc
        push esi
        call ebx
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        add esi, 2
        cmp edi, eax
        jne public_40c5a2
        public_40c5d8 : nop
        mov eax, dword ptr ss : [ebp+0x6E8]
        test eax, eax
        jne public_40c5e7
        mov eax, dword ptr ds : [public_41b8c8]
        public_40c5e7 : nop
        mov ecx, dword ptr ds : [public_41bb70]
        mov dword ptr ss : [esp+0x14], eax
        lea edi, ss:[ebp+0xCC]
        call public_4186de
        mov ecx, dword ptr ds : [public_41bb70]
        push eax
        call public_4186d8
        push eax
        mov ecx, edi
        call public_402380
        xor ecx, ecx
        mov cl, al
        push ecx
        mov ecx, edi
        call public_4023a0
        xor edx, edx
        mov dl, al
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [public_41b8f4]
        add esp, 4
        xor ecx, ecx
        cmp ecx, eax
        mov eax, dword ptr ss : [ebp+0xA6C]
        sbb edx, edx
        neg edx
        push edx
        push eax
/*FIXUP push offset public_4257b4 @0x40c63f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4257b4
        push esi
        call dword ptr ds : [public_41b994]
        mov esi, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        add esp, 0x20
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_4257a8 @0x40c659*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4257a8
        push 0
        push esi
        call dword ptr ds : [ecx+0x24]
        mov ebp, dword ptr ss : [ebp+0x82C]
        test ebp, ebp
        jne public_40c674
        mov ebp, dword ptr ds : [public_41b8c8]
        public_40c674 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
/*FIXUP push offset public_42579c @0x40c677*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42579c
        push 0
        push esi
        call dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_418978
        mov bl, byte ptr ss : [esp+0x17]
        add esp, 4
        jmp public_40c697
        public_40c695 : nop
        xor bl, bl
        public_40c697 : nop
        mov edx, dword ptr ds : [public_4277d8]
        push edx
        call dword ptr ds : [public_41b1a4]
        mov ecx, dword ptr ss : [esp+0x82C]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x828
        ret 
        UNREACHABLE_TRAP(0x40c4d0)
    }
}

#undef public_40c510
#undef public_40c559
#undef public_40c5a2
#undef public_40c5d8
#undef public_40c5e7
#undef public_40c674
#undef public_40c695
#undef public_40c697
