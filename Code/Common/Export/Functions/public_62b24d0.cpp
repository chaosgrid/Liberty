#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b24d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b54f0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63946d0);

#define public_62b2523 _public_62b2523
#define public_62b2541 _public_62b2541
#define public_62b256d _public_62b256d
#define public_62b25c1 _public_62b25c1
#define public_62b25e7 _public_62b25e7
#define public_62b25f5 _public_62b25f5
#define public_62b2615 _public_62b2615
#define public_62b2622 _public_62b2622

PROC_DECLARE(0x62b24d0, internal_62b24d0, public_62b24d0);
extern "C" NAKED register_t __cdecl internal_62b24d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63946d0 @0x62b24d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63946d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        test dword ptr ds : [esi+0xE0], 0x30000
        mov ebp, dword ptr ds : [esi+0xB0]
        push edi
        mov edi, ecx
        je public_62b2622
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_62b25e7
        mov ecx, dword ptr ds : [edi+0x208]
        mov edx, dword ptr ds : [edi+0x20C]
        cmp ecx, edx
        je public_62b2541
        public_62b2523 : nop
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_62b25c1
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62b25c1
        add ecx, 8
        cmp ecx, edx
        jne public_62b2523
        public_62b2541 : nop
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        lea eax, ds:[esi+0x9C]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_62b256d
        push eax
        lea ecx, ss:[esp+0x10]
        call public_6341610
        public_62b256d : nop
        mov eax, dword ptr ds : [edi+0x20C]
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[edi+0x204]
        push 1
        push eax
        mov dword ptr ss : [esp+0x28], 1
        call public_62b54f0
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_62b2622
        push 0
        lea ecx, ss:[esp+0x10]
        call public_6341610
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        public_62b25c1 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x9C]
        cmp eax, edx
        je public_62b2622
        push eax
        call public_6341610
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        public_62b25e7 : nop
        mov esi, dword ptr ds : [edi+0x208]
        cmp esi, dword ptr ds : [edi+0x20C]
        je public_62b2622
        public_62b25f5 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62b2615
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62b2615
        cmp dword ptr ds : [eax+0xB0], ebp
        jne public_62b2615
        push 0
        mov ecx, esi
        call public_6341610
        public_62b2615 : nop
        mov eax, dword ptr ds : [edi+0x20C]
        add esi, 8
        cmp esi, eax
        jne public_62b25f5
        public_62b2622 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x62b24d0)
    }
}

#undef public_62b2523
#undef public_62b2541
#undef public_62b256d
#undef public_62b25c1
#undef public_62b25e7
#undef public_62b25f5
#undef public_62b2615
#undef public_62b2622
