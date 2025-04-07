#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d12520);
CLANG_FORWARD_PROC_SYMBOL(public_6d15390);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d15400 _public_6d15400
#define public_6d15410 _public_6d15410
#define public_6d15435 _public_6d15435
#define public_6d15441 _public_6d15441
#define public_6d15444 _public_6d15444
#define public_6d15448 _public_6d15448
#define public_6d1546e _public_6d1546e
#define public_6d15499 _public_6d15499
#define public_6d154a2 _public_6d154a2
#define public_6d154e4 _public_6d154e4

PROC_DECLARE(0x6d15390, internal_6d15390, public_6d15390);
extern "C" NAKED register_t __cdecl internal_6d15390()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+4]
        mov ebx, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+0x1C]
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x30], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x20]
        je public_6d15410
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_6d15435
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        mov ecx, esi
        call public_6d12520
        mov ecx, dword ptr ds : [ebx+0x84]
        mov edx, dword ptr ds : [ebx+0x88]
        add ebx, 0x80
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebp, ecx
        mov al, 1
        je public_6d15448
        lea ecx, ds:[ecx]
        public_6d15400 : nop
        cmp edi, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_6d15441
        mov esi, dword ptr ds : [esi]
        jmp public_6d15444
        public_6d15410 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d15420*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d1542a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d15435 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d15441 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d15444 : nop
        cmp esi, edx
        jne public_6d15400
        public_6d15448 : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6d1546e
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d1546e : nop
        test al, al
        mov dword ptr ss : [esp+0x2C], ebp
        je public_6d154a2
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d15499
        lea eax, ss:[esp+0x14]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d15499 : nop
        lea ecx, ss:[esp+0x2C]
        call public_6cfdf70
        public_6d154a2 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        jae public_6d154e4
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        call public_6cfdca0
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6d0f600
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d154e4 : nop
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x30], 0
        call public_6d0f600
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d15390)
    }
}

#undef public_6d15400
#undef public_6d15410
#undef public_6d15435
#undef public_6d15441
#undef public_6d15444
#undef public_6d15448
#undef public_6d1546e
#undef public_6d15499
#undef public_6d154a2
#undef public_6d154e4
