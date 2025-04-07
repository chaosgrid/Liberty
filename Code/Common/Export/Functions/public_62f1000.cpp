#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_62f0dc0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1000);
CLANG_FORWARD_PROC_SYMBOL(public_630bd60);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_639553e);

#define public_62f1070 _public_62f1070
#define public_62f1093 _public_62f1093
#define public_62f10b3 _public_62f10b3
#define public_62f10c0 _public_62f10c0
#define public_62f1108 _public_62f1108
#define public_62f1111 _public_62f1111
#define public_62f1173 _public_62f1173
#define public_62f117e _public_62f117e
#define public_62f1189 _public_62f1189
#define public_62f11a3 _public_62f11a3

PROC_DECLARE(0x62f1000, internal_62f1000, public_62f1000);
extern "C" NAKED register_t __cdecl internal_62f1000()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639553e @0x62f1008*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639553e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_63fcaf8]
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xC], eax
        call public_630f660
        mov ecx, dword ptr ss : [esp+0x158C]
        xor ebx, ebx
        push ebx
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], ebx
        call public_630f9b0
        test al, al
        je public_62f10c0
        lea ecx, ss:[esp+0x14]
        call public_6310070
        test al, al
        je public_62f10c0
        mov edi, dword ptr ss : [esp+0x1594]
        mov esi, dword ptr ss : [esp+0x1590]
        mov edi, edi
/*FIXUP public_62f1070 : nop
        push offset public_63a1524 @0x62f1070*/
  FIXUP public_62f1070 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1524
        lea ecx, ss:[esp+0x18]
        call public_63103c0
        test al, al
        je public_62f1093
        push edi
        lea edx, ss:[esp+0x18]
        push esi
        push edx
        call public_62f0dc0
        add esp, 0xC
        jmp public_62f10b3
/*FIXUP public_62f1093 : nop
        push offset public_63a152c @0x62f1093*/
  FIXUP public_62f1093 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a152c
        lea ecx, ss:[esp+0x18]
        call public_63103c0
        test al, al
        je public_62f10b3
        lea eax, ss:[esp+0x14]
        push esi
        push eax
        call public_630bd60
        add esp, 8
        public_62f10b3 : nop
        lea ecx, ss:[esp+0x14]
        call public_6310070
        test al, al
        jne public_62f1070
        public_62f10c0 : nop
        lea ecx, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0x1584], 1
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x143C]
        mov byte ptr ss : [esp+0x1584], 2
        call public_6262630
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, ebx
        je public_62f1111
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62f1108
        cmp cl, 0xFF
        je public_62f1108
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62f1111
        public_62f1108 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62f1111 : nop
        mov dword ptr ss : [esp+0x1440], ebx
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_6399198]
        mov eax, dword ptr ss : [esp+0x24]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_62f1189
        cmp dword ptr ss : [esp+0x28], ebx
        mov esi, dword ptr ds : [public_639913c]
        je public_62f117e
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_62f1173
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_62f1173 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x28], ebx
        public_62f117e : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24], edi
        public_62f1189 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_62f11a3
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        public_62f11a3 : nop
        push 1
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x1588], edi
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_63fcaf8]
        pop edi
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1578]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 
        UNREACHABLE_TRAP(0x62f1000)
    }
}

#undef public_62f1070
#undef public_62f1093
#undef public_62f10b3
#undef public_62f10c0
#undef public_62f1108
#undef public_62f1111
#undef public_62f1173
#undef public_62f117e
#undef public_62f1189
#undef public_62f11a3
