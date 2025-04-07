#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502b00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf7fb);

#define public_502b7f _public_502b7f
#define public_502b81 _public_502b81
#define public_502b89 _public_502b89

PROC_DECLARE(0x502b00, internal_502b00, public_502b00);
extern "C" NAKED register_t __cdecl internal_502b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf7fb @0x502b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf7fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_674fd0]
        test eax, eax
        jne public_502b89
        push esi
/*FIXUP push offset public_5da954 @0x502b20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da954
        push 0xD5
/*FIXUP push offset public_5da80c @0x502b2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x502b34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        push 0x14
        call public_5b7e84
        mov esi, eax
        add esp, 0x18
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_502b7f
        push edi
        mov edi, dword ptr ds : [public_5c6030]
        mov ecx, esi
        call edi
        lea ecx, ds:[esi+4]
        call edi
        lea ecx, ds:[esi+8]
        call edi
        lea ecx, ds:[esi+0xC]
        call edi
        lea ecx, ds:[esi+0x10]
        call edi
        pop edi
        jmp public_502b81
        public_502b7f : nop
        xor esi, esi
        public_502b81 : nop
        mov eax, esi
        mov dword ptr ds : [public_674fd0], eax
        pop esi
        public_502b89 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x502b00)
    }
}

#undef public_502b7f
#undef public_502b81
#undef public_502b89
