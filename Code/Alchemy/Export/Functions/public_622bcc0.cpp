#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62494cb);

#define public_622bd23 _public_622bd23
#define public_622bd25 _public_622bd25
#define public_622bd45 _public_622bd45
#define public_622bd52 _public_622bd52

PROC_DECLARE(0x622bcc0, internal_622bcc0, public_622bcc0);
extern "C" NAKED register_t __cdecl internal_622bcc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62494cb @0x622bcc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62494cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x94
        mov edi, ecx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_622bd23
        push ebx
        lea ebx, ds:[esi+4]
        mov ecx, ebx
        mov dword ptr ds : [esi], offset public_624ba48
        call public_622b3e0
        mov dword ptr ds : [ebx], offset public_624e418
        mov dword ptr ds : [esi], offset public_624e3b8
        mov dword ptr ds : [esi+0x90], 1
        pop ebx
        jmp public_622bd25
        public_622bd23 : nop
        xor esi, esi
        public_622bd25 : nop
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        cmp eax, esi
        je public_622bd52
        test eax, eax
        je public_622bd45
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], 0
        public_622bd45 : nop
        test esi, esi
        mov dword ptr ds : [edi+0x7C], esi
        je public_622bd52
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_622bd52 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [edi+0xF0], esi
        mov dword ptr ds : [edi+0xA8], eax
        mov dword ptr ds : [edi+0x80], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x622bcc0)
    }
}

#undef public_622bd23
#undef public_622bd25
#undef public_622bd45
#undef public_622bd52
