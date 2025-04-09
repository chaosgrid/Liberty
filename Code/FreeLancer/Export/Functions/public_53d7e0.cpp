#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_543d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53d82c _public_53d82c
#define public_53d850 _public_53d850
#define public_53d852 _public_53d852
#define public_53d862 _public_53d862
#define public_53d88c _public_53d88c
#define public_53d8a2 _public_53d8a2
#define public_53d8c6 _public_53d8c6
#define public_53d8c8 _public_53d8c8
#define public_53d8e8 _public_53d8e8

PROC_DECLARE(0x53d7e0, internal_53d7e0, public_53d7e0);
extern "C" NAKED register_t __cdecl internal_53d7e0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        push 1
        push eax
        call public_5416c0
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_53d8e8
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_53d88c
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_53d862
        mov eax, dword ptr ds : [public_6789f8]
        test eax, eax
        lea edi, ds:[ebx+0xC]
        jne public_53d82c
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53d82c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        test edi, edi
        je public_53d850
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_53d850
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 1
        cmp al, 1
        je public_53d852
        public_53d850 : nop
        xor ecx, ecx
        public_53d852 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        lea eax, ds:[esi+0x1C]
        push eax
        call dword ptr ds : [edx+0x7C]
        public_53d862 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push 0
        push edx
        call public_5416c0
        add esp, 8
        push eax
        mov ecx, ebx
        call public_543d50
        pop edi
        pop esi
        mov byte ptr ds : [public_678b96], 1
        pop ebx
        add esp, 0x24
        ret 8
        public_53d88c : nop
        mov eax, dword ptr ds : [public_6789f8]
        test eax, eax
        lea edi, ds:[ebx+0xC]
        jne public_53d8a2
        call public_5b73e0
        mov dword ptr ds : [public_6789f8], eax
        public_53d8a2 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        test edi, edi
        je public_53d8c6
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_53d8c6
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 1
        cmp al, 1
        je public_53d8c8
        public_53d8c6 : nop
        xor ecx, ecx
        public_53d8c8 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        add esi, 0x1C
        push esi
        call dword ptr ds : [edx+0x7C]
        pop edi
        pop esi
        mov byte ptr ds : [public_678b96], 1
        pop ebx
        add esp, 0x24
        ret 8
        public_53d8e8 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x5C4
/*FIXUP push offset public_5dec60 @0x53d8f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dec60
        mov eax, 0x100002
/*FIXUP push offset public_5df488 @0x53d900*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5df488
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop esi
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x53d7e0)
    }
}

#undef public_53d82c
#undef public_53d850
#undef public_53d852
#undef public_53d862
#undef public_53d88c
#undef public_53d8a2
#undef public_53d8c6
#undef public_53d8c8
#undef public_53d8e8
