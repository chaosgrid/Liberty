#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d238e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d26520);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62a92);

#define public_6d2655c _public_6d2655c
#define public_6d26573 _public_6d26573
#define public_6d2658a _public_6d2658a
#define public_6d265f3 _public_6d265f3
#define public_6d26613 _public_6d26613
#define public_6d26624 _public_6d26624
#define public_6d2663b _public_6d2663b
#define public_6d26652 _public_6d26652
#define public_6d266b2 _public_6d266b2
#define public_6d266d2 _public_6d266d2

PROC_DECLARE(0x6d26520, internal_6d26520, public_6d26520);
extern "C" NAKED register_t __cdecl internal_6d26520()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62a92 @0x6d26528*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62a92
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        xor edi, edi
        test ah, ah
        mov eax, dword ptr ds : [esi]
        jns public_6d26613
        cmp eax, edi
        je public_6d2655c
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x10
        cmp eax, ecx
        jbe public_6d2658a
        public_6d2655c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x10
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x18], 0x10
        jae public_6d26573
        lea eax, ss:[esp+0x18]
        public_6d26573 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d2658a : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], 2
        je public_6d266d2
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], offset public_6d69134
        mov cl, byte ptr ds : [public_6d904f4]
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x10], 3
        jne public_6d265f3
/*FIXUP push offset public_6d68a74 @0x6d265c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a74
        mov dl, cl
        push 0x107
        or dl, al
        push edi
        mov ecx, offset public_6d90500
        mov byte ptr ds : [public_6d904f4], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238e0 @0x6d265e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238e0
        call public_6d6013e
        add esp, 4
        public_6d265f3 : nop
        mov dword ptr ds : [esi], offset public_6d69184
        mov dword ptr ds : [esi+0xC], offset public_6d90500
        mov eax, esi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        add esp, 0xC
        ret 
        public_6d26613 : nop
        cmp eax, edi
        je public_6d26624
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+4]
        add edx, 0x10
        cmp edx, eax
        jbe public_6d26652
        public_6d26624 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x10
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x18], 0x10
        jae public_6d2663b
        lea eax, ss:[esp+0x18]
        public_6d2663b : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d26652 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x10
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], edi
        je public_6d266d2
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], offset public_6d69134
        mov cl, byte ptr ds : [public_6d904f4]
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x10], al
        jne public_6d266b2
/*FIXUP push offset public_6d68a74 @0x6d26686*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a74
        mov dl, cl
        push 0x107
        or dl, al
        push edi
        mov ecx, offset public_6d90500
        mov byte ptr ds : [public_6d904f4], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238e0 @0x6d266a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238e0
        call public_6d6013e
        add esp, 4
        public_6d266b2 : nop
        mov dword ptr ds : [esi], offset public_6d6915c
        mov dword ptr ds : [esi+0xC], offset public_6d90500
        mov eax, esi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        add esp, 0xC
        ret 
        public_6d266d2 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d26520)
    }
}

#undef public_6d2655c
#undef public_6d26573
#undef public_6d2658a
#undef public_6d265f3
#undef public_6d26613
#undef public_6d26624
#undef public_6d2663b
#undef public_6d26652
#undef public_6d266b2
#undef public_6d266d2
