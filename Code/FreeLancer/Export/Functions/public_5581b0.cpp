#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1518);

#define public_5581e2 _public_5581e2
#define public_5581f8 _public_5581f8
#define public_558201 _public_558201
#define public_558208 _public_558208
#define public_558215 _public_558215
#define public_55823a _public_55823a
#define public_558250 _public_558250
#define public_558265 _public_558265

PROC_DECLARE(0x5581b0, internal_5581b0, public_5581b0);
extern "C" NAKED register_t __cdecl internal_5581b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1518 @0x5581b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1518
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], 0
        je public_558208
        public_5581e2 : nop
        mov ebx, dword ptr ds : [esi+8]
        test ebx, ebx
        je public_558201
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_5581f8
        push eax
        call public_5b7e1d
        add esp, 4
        public_5581f8 : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        public_558201 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_5581e2
        public_558208 : nop
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_55823a
        public_558215 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_516f70
        cmp dword ptr ss : [esp+0xC], esi
        jne public_558215
        public_55823a : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_558265
        nop 
        lea esp, ss:[esp]
        public_558250 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_516f70
        cmp esi, ebx
        jne public_558250
        public_558265 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5581b0)
    }
}

#undef public_5581e2
#undef public_5581f8
#undef public_558201
#undef public_558208
#undef public_558215
#undef public_55823a
#undef public_558250
#undef public_558265
