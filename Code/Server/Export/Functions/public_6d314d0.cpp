#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d314d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62c23);

#define public_6d31510 _public_6d31510
#define public_6d3151d _public_6d3151d
#define public_6d31524 _public_6d31524
#define public_6d31531 _public_6d31531
#define public_6d31546 _public_6d31546
#define public_6d31567 _public_6d31567
#define public_6d31580 _public_6d31580
#define public_6d315a4 _public_6d315a4
#define public_6d315c5 _public_6d315c5

PROC_DECLARE(0x6d314d0, internal_6d314d0, public_6d314d0);
extern "C" NAKED register_t __cdecl internal_6d314d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62c23 @0x6d314d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62c23
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
        mov dword ptr ds : [edi], offset public_6d68c58
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], 1
        je public_6d31524
        lea esp, ss:[esp]
        public_6d31510 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d3151d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d3151d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6d31510
        public_6d31524 : nop
        mov ebp, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea ebx, ds:[edi+8]
        je public_6d31546
        public_6d31531 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call public_6d23fd0
        cmp esi, ebp
        jne public_6d31531
        public_6d31546 : nop
        lea esi, ds:[edi+0x24]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x28], 2
        je public_6d31567
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d31567 : nop
        mov dword ptr ds : [esi], offset public_6d68d28
        mov dword ptr ds : [edi], offset public_6d68e7c
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6d315a4
        public_6d31580 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        call public_6d23fd0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d31580
        public_6d315a4 : nop
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [edi], offset public_6d68d00
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x28], 3
        je public_6d315c5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d315c5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], offset public_6d68d28
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d314d0)
    }
}

#undef public_6d31510
#undef public_6d3151d
#undef public_6d31524
#undef public_6d31531
#undef public_6d31546
#undef public_6d31567
#undef public_6d31580
#undef public_6d315a4
#undef public_6d315c5
