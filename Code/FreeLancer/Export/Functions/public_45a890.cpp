#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a890);
CLANG_FORWARD_PROC_SYMBOL(public_45aa10);
CLANG_FORWARD_PROC_SYMBOL(public_45aad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba269);

#define public_45a909 _public_45a909
#define public_45a92e _public_45a92e
#define public_45a971 _public_45a971

PROC_DECLARE(0x45a890, internal_45a890, public_45a890);
extern "C" NAKED register_t __cdecl internal_45a890()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba269 @0x45a898*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba269
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66d33c]
        mov dword ptr fs : [0], esp
        mov ecx, dword ptr ds : [eax]
        sub esp, 0xC
        push ebp
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ecx
        lea eax, ss:[esp+0x10]
        push eax
        call public_45aa10
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_66d33c]
        add esp, 0x10
        cmp ecx, eax
        jne public_45a971
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        mov ebp, dword ptr ds : [public_5c62a8]
        mov dword ptr ss : [esp+0x18], 1
        je public_45a909
        add eax, 8
        test eax, eax
        je public_45a909
        push eax
        lea ecx, ss:[esp+0xC]
        call ebp
        public_45a909 : nop
        push esi
        push edi
        mov esi, dword ptr ds : [public_66d33c]
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        mov dword ptr ss : [esp+0x24], 2
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_45a92e
        mov edi, eax
        public_45a92e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_45aad0
        mov ecx, dword ptr ds : [public_66d340]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc ecx
        test eax, eax
        pop edi
        mov dword ptr ds : [public_66d340], ecx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        pop esi
        je public_45a971
        push 0
        lea ecx, ss:[esp+0xC]
        call ebp
        public_45a971 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x45a890)
    }
}

#undef public_45a909
#undef public_45a92e
#undef public_45a971
