#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac2cb);

#define public_6ef4b00 _public_6ef4b00
#define public_6ef4b19 _public_6ef4b19
#define public_6ef4b40 _public_6ef4b40
#define public_6ef4b64 _public_6ef4b64

PROC_DECLARE(0x6ef4ab0, internal_6ef4ab0, public_6ef4ab0);
extern "C" NAKED register_t __cdecl internal_6ef4ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac2cb @0x6ef4ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac2cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x28], ebp
        lea esi, ds:[edi+0x60]
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        je public_6ef4b19
        nop 
        lea esp, ss:[esp]
        public_6ef4b00 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ef4b00
        public_6ef4b19 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6ef4b64
        mov edi, edi
        public_6ef4b40 : nop
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_6ef4b40
        public_6ef4b64 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x54]
        push eax
        call public_6fa8fe0
        add esp, 8
        mov ecx, edi
        mov dword ptr ds : [edi+0x54], ebp
        mov dword ptr ds : [edi+0x58], ebp
        mov dword ptr ds : [edi+0x5C], ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6f28e10
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6ef4ab0)
    }
}

#undef public_6ef4b00
#undef public_6ef4b19
#undef public_6ef4b40
#undef public_6ef4b64
