#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00200);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6facadb);

#define public_6f00250 _public_6f00250
#define public_6f00269 _public_6f00269

PROC_DECLARE(0x6f00200, internal_6f00200, public_6f00200);
extern "C" NAKED register_t __cdecl internal_6f00200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facadb @0x6f00202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facadb
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
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        lea esi, ds:[edi+0x60]
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 2
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        je public_6f00269
        lea ebx, ds:[ebx]
        public_6f00250 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f00250
        public_6f00269 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 1
        call public_6fa8370
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x54]
        push eax
        call public_6fa8fe0
        add esp, 8
        mov ecx, edi
        mov dword ptr ds : [edi+0x54], ebx
        mov dword ptr ds : [edi+0x58], ebx
        mov dword ptr ds : [edi+0x5C], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6f28e10
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f00200)
    }
}

#undef public_6f00250
#undef public_6f00269
