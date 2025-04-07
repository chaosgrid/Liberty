#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d901f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d91dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db269e);

#define public_6d91e07 _public_6d91e07
#define public_6d91e17 _public_6d91e17
#define public_6d91e1e _public_6d91e1e
#define public_6d91e2e _public_6d91e2e
#define public_6d91e40 _public_6d91e40
#define public_6d91e55 _public_6d91e55
#define public_6d91e7b _public_6d91e7b
#define public_6d91e8b _public_6d91e8b

PROC_DECLARE(0x6d91dd0, internal_6d91dd0, public_6d91dd0);
extern "C" NAKED register_t __cdecl internal_6d91dd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db269e @0x6d91dd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db269e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ds : [ebx], offset public_6db3d50
        mov eax, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], 2
        je public_6d91e1e
        public_6d91e07 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d91e17
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d91e17 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x4C]
        jne public_6d91e07
        public_6d91e1e : nop
        mov eax, dword ptr ds : [ebx+0x64]
        test eax, eax
        je public_6d91e2e
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d91e2e : nop
        push ebp
        mov ebp, dword ptr ds : [ebx+0x4C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        push edi
        lea edi, ds:[ebx+0x48]
        je public_6d91e55
        lea ecx, ds:[ecx]
        public_6d91e40 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d901f0
        cmp esi, ebp
        jne public_6d91e40
        public_6d91e55 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        xor esi, esi
        add esp, 4
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x2C]
        cmp eax, esi
        pop edi
        pop ebp
        je public_6d91e7b
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d91e7b : nop
        mov eax, dword ptr ds : [ebx+0x24]
        cmp eax, esi
        je public_6d91e8b
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d91e8b : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6da1370
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d91dd0)
    }
}

#undef public_6d91e07
#undef public_6d91e17
#undef public_6d91e1e
#undef public_6d91e2e
#undef public_6d91e40
#undef public_6d91e55
#undef public_6d91e7b
#undef public_6d91e8b
