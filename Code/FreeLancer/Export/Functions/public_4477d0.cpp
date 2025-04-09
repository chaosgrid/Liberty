#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4477d0);
CLANG_FORWARD_PROC_SYMBOL(public_457fe0);

#define public_44781f _public_44781f
#define public_44783e _public_44783e

PROC_DECLARE(0x4477d0, internal_4477d0, public_4477d0);
extern "C" NAKED register_t __cdecl internal_4477d0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_5c6210]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        push esi
        cmp eax, dword ptr ds : [edx]
        push edi
        je public_44783e
        lea esi, ds:[ecx+0x74]
        mov ecx, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_5c61c4]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_44781f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x275
/*FIXUP push offset public_5cbdbc @0x447804*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbdbc
        mov eax, 0x100001
/*FIXUP push offset public_5cbe24 @0x44780e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe24
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        ret 0x18
        public_44781f : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_44783e
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        push eax
        push edi
        mov ecx, esi
        call public_457fe0
        public_44783e : nop
        pop edi
        pop esi
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x4477d0)
    }
}

#undef public_44781f
#undef public_44783e
