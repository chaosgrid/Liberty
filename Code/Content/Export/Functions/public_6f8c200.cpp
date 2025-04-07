#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f8b030);
CLANG_FORWARD_PROC_SYMBOL(public_6f8c200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1230);

#define public_6f8c25d _public_6f8c25d
#define public_6f8c280 _public_6f8c280
#define public_6f8c29b _public_6f8c29b
#define public_6f8c29e _public_6f8c29e
#define public_6f8c2ce _public_6f8c2ce
#define public_6f8c2e0 _public_6f8c2e0
#define public_6f8c30d _public_6f8c30d
#define public_6f8c30e _public_6f8c30e
#define public_6f8c316 _public_6f8c316

PROC_DECLARE(0x6f8c200, internal_6f8c200, public_6f8c200);
extern "C" NAKED register_t __cdecl internal_6f8c200()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov edx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1230 @0x6f8c20c*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1230
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x5C]
        lea ecx, ds:[eax+0x20]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0x60]
        cmp eax, 2
        jne public_6f8c29e
        mov ecx, dword ptr ds : [esi+0x5C]
        push eax
        push eax
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_6f87a50
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 0
        jne public_6f8c25d
        push 7
        mov ecx, esi
        call public_6f8b030
        public_6f8c25d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], offset public_6fbc7cc
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov edi, eax
        je public_6f8c29b
        lea esp, ss:[esp]
        public_6f8c280 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f8c280
        mov eax, dword ptr ss : [esp+0x20]
        public_6f8c29b : nop
        push eax
        jmp public_6f8c30e
        public_6f8c29e : nop
        cmp eax, 1
        jne public_6f8c316
        mov ecx, dword ptr ds : [esi+0x5C]
        push 2
        push 2
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        call public_6f87a50
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 1
        jne public_6f8c2ce
        push 6
        mov ecx, esi
        call public_6f8b030
        public_6f8c2ce : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], offset public_6fbc7cc
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f8c30d
        public_6f8c2e0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6f8c2e0
        mov edi, dword ptr ss : [esp+0x10]
        public_6f8c30d : nop
        push edi
        public_6f8c30e : nop
        call public_6fa8fe0
        add esp, 4
        public_6f8c316 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x6f8c200)
    }
}

#undef public_6f8c25d
#undef public_6f8c280
#undef public_6f8c29b
#undef public_6f8c29e
#undef public_6f8c2ce
#undef public_6f8c2e0
#undef public_6f8c30d
#undef public_6f8c30e
#undef public_6f8c316
