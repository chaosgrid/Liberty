#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54db50);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1351);

#define public_54db6e _public_54db6e
#define public_54db70 _public_54db70
#define public_54dba8 _public_54dba8
#define public_54dbb8 _public_54dbb8

PROC_DECLARE(0x54db50, internal_54db50, public_54db50);
extern "C" NAKED register_t __cdecl internal_54db50()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6797c8]
        mov al, 1
        test al, cl
        jne public_54db6e
        or cl, al
        mov byte ptr ds : [public_6797c8], cl
        mov ecx, offset public_6797d0
        jmp public_54db70
        public_54db6e : nop
        ret 
        nop 
        public_54db70 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5c1351 @0x54db72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1351
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0xC]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], 2
        je public_54dba8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], edi
        public_54dba8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_54dbb8
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], edi
        public_54dbb8 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x7C], edi
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x74], edi
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x54db50)
    }
}

#undef public_54db6e
#undef public_54db70
#undef public_54dba8
#undef public_54dbb8
