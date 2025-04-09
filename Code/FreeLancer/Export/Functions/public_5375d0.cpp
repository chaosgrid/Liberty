#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5375d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c09d8);

#define public_537622 _public_537622
#define public_53762c _public_53762c
#define public_537647 _public_537647
#define public_53764a _public_53764a
#define public_537661 _public_537661

PROC_DECLARE(0x5375d0, internal_5375d0, public_5375d0);
extern "C" NAKED register_t __cdecl internal_5375d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c09d8 @0x5375d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c09d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ds : [edi], offset public_5de69c
        mov esi, dword ptr ds : [edi+0xDC]
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_537661
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        push ebp
        mov ebp, dword ptr ds : [edi+0xD4]
        je public_537622
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        je public_537622
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x48], ecx
        jmp public_53762c
        public_537622 : nop
        push 0xC
        call public_5b7e84
        add esp, 4
        public_53762c : nop
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        pop ebp
        je public_537647
        mov dword ptr ds : [ecx], eax
        jmp public_53764a
        public_537647 : nop
        mov dword ptr ds : [esi+0x3C], eax
        public_53764a : nop
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [edi+0xD4], 0
        mov dword ptr ds : [edi+0xDC], 0
        public_537661 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_410ab0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5375d0)
    }
}

#undef public_537622
#undef public_53762c
#undef public_537647
#undef public_53764a
#undef public_537661
