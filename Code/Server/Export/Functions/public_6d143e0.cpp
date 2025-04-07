#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d143e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d16dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17090);

#define public_6d14422 _public_6d14422
#define public_6d14430 _public_6d14430
#define public_6d1445e _public_6d1445e
#define public_6d14460 _public_6d14460
#define public_6d14473 _public_6d14473
#define public_6d14487 _public_6d14487
#define public_6d14490 _public_6d14490
#define public_6d14499 _public_6d14499
#define public_6d1449b _public_6d1449b
#define public_6d144d1 _public_6d144d1
#define public_6d144f3 _public_6d144f3
#define public_6d14506 _public_6d14506
#define public_6d1451c _public_6d1451c
#define public_6d14535 _public_6d14535
#define public_6d1455a _public_6d1455a

PROC_DECLARE(0x6d143e0, internal_6d143e0, public_6d143e0);
extern "C" NAKED register_t __cdecl internal_6d143e0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x20]
        je public_6d14430
        mov ebx, dword ptr ds : [eax+0x10]
        test ebx, ebx
        je public_6d1455a
        mov edx, dword ptr ss : [esp+0x1C]
        xor esi, esi
        mov dword ptr ss : [esp+0xC], esi
        xor eax, eax
        public_6d14422 : nop
        test eax, eax
        jne public_6d1445e
        mov eax, dword ptr ds : [ebx+0x14]
        jmp public_6d14460
        nop 
        lea esp, ss:[esp]
        public_6d14430 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d14440*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d1444a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        public_6d1445e : nop
        mov eax, dword ptr ds : [eax]
        public_6d14460 : nop
        test eax, eax
        je public_6d14473
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0x10], edx
        jne public_6d14422
        mov esi, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0xC], esi
        public_6d14473 : nop
        test esi, 0x3FFFFFFF
        je public_6d1455a
        xor eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6d14490
        public_6d14487 : nop
        mov eax, dword ptr ss : [esp+0x20]
        nop 
        lea esp, ss:[esp]
        public_6d14490 : nop
        test eax, eax
        jne public_6d14499
        mov eax, dword ptr ds : [ebx+0x14]
        jmp public_6d1449b
        public_6d14499 : nop
        mov eax, dword ptr ds : [eax]
        public_6d1449b : nop
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6d1451c
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d14487
        mov ecx, dword ptr ds : [ebx+0xC]
        push 1
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], 0
        call public_6d16120
        test al, al
        je public_6d14506
        public_6d144d1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        push ecx
        push edi
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d144f3
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+4]
        public_6d144f3 : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        push 1
        lea eax, ss:[esp+0x20]
        push eax
        call public_6d16120
        test al, al
        jne public_6d144d1
        public_6d14506 : nop
        push 1
        mov ecx, esi
        call public_6d16dc0
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[ebx+0x10]
        call public_6d17090
        public_6d1451c : nop
        mov edx, dword ptr ss : [esp+0xC]
        lea esi, ds:[edx-1]
        cmp esi, 0x1000
        jb public_6d14535
        mov ecx, offset public_6d8e328
        call public_6d15f90
        public_6d14535 : nop
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov eax, esi
        shr eax, 5
        mov ecx, dword ptr ds : [eax*4+public_6d8e328]
        lea eax, ds : [eax*4+public_6d8e328]
        not edx
        and ecx, edx
        mov dword ptr ds : [eax], ecx
        public_6d1455a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d143e0)
    }
}

#undef public_6d14422
#undef public_6d14430
#undef public_6d1445e
#undef public_6d14460
#undef public_6d14473
#undef public_6d14487
#undef public_6d14490
#undef public_6d14499
#undef public_6d1449b
#undef public_6d144d1
#undef public_6d144f3
#undef public_6d14506
#undef public_6d1451c
#undef public_6d14535
#undef public_6d1455a
