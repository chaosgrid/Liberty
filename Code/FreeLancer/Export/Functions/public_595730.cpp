#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_595730);

#define public_595757 _public_595757
#define public_59576b _public_59576b
#define public_59578e _public_59578e
#define public_5957a6 _public_5957a6
#define public_5957b2 _public_5957b2
#define public_5957d3 _public_5957d3

PROC_DECLARE(0x595730, internal_595730, public_595730);
extern "C" NAKED register_t __cdecl internal_595730()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        xor ebx, ebx
        push edi
        xor edi, edi
        cmp ebp, ebx
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jne public_595757
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_59576b
        public_595757 : nop
        push ebp
        lea eax, ss:[esp+0x18]
        push 0x18
        push eax
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], eax
        public_59576b : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp dword ptr ds : [esi+4], eax
        je public_59578e
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 0x10
        push eax
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jne public_59578e
        mov eax, dword ptr ds : [esi+0x14]
        jmp public_5957a6
        public_59578e : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, esi
        call public_4206c0
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x14], eax
        public_5957a6 : nop
        cmp eax, dword ptr ds : [esi+4]
        je public_5957b2
        lea edi, ds:[eax+0x28]
        cmp edi, ebx
        jne public_5957d3
        public_5957b2 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0xF2
/*FIXUP push offset public_5d3c00 @0x5957be*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3c00
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x5957c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_5957d3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x595730)
    }
}

#undef public_595757
#undef public_59576b
#undef public_59578e
#undef public_5957a6
#undef public_5957b2
#undef public_5957d3
