#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d28b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d3d70);
CLANG_FORWARD_PROC_SYMBOL(public_62df540);

#define public_62d28d2 _public_62d28d2
#define public_62d28e1 _public_62d28e1
#define public_62d28e3 _public_62d28e3
#define public_62d28ff _public_62d28ff
#define public_62d290e _public_62d290e
#define public_62d2910 _public_62d2910
#define public_62d292e _public_62d292e
#define public_62d2972 _public_62d2972
#define public_62d2998 _public_62d2998

PROC_DECLARE(0x62d28b0, internal_62d28b0, public_62d28b0);
extern "C" NAKED register_t __cdecl internal_62d28b0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_62d28d2
        cmp dword ptr ds : [eax], edi
        jne public_62d28d2
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_62d2998
        public_62d28d2 : nop
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d28e1
        lea ecx, ds:[eax-8]
        jmp public_62d28e3
        public_62d28e1 : nop
        xor ecx, ecx
        public_62d28e3 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62d28ff
        mov al, byte ptr ds : [esi+0x1C8]
        xor edi, edi
        and al, 0xFE
        mov byte ptr ds : [esi+0x1C8], al
        public_62d28ff : nop
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        je public_62d290e
        lea ecx, ds:[eax-8]
        jmp public_62d2910
        public_62d290e : nop
        xor ecx, ecx
        public_62d2910 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x88]
        test dword ptr ss : [esp+0x1C], 0xFDFF
        je public_62d292e
        and byte ptr ds : [esi+0x1C8], 0xFE
        public_62d292e : nop
        push edi
        call public_62df540
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        je public_62d2998
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        jne public_62d2972
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a03b4 @0x62d294b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a03b4
        push 0xCE
/*FIXUP push offset public_63a0380 @0x62d2955*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a0380
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62d295f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        public_62d2972 : nop
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0
        call public_62d3d70
        public_62d2998 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62d28b0)
    }
}

#undef public_62d28d2
#undef public_62d28e1
#undef public_62d28e3
#undef public_62d28ff
#undef public_62d290e
#undef public_62d2910
#undef public_62d292e
#undef public_62d2972
#undef public_62d2998
