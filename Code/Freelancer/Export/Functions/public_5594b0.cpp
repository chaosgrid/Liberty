#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c157b);

#define public_5594e1 _public_5594e1
#define public_559506 _public_559506
#define public_559534 _public_559534
#define public_559541 _public_559541
#define public_559564 _public_559564

PROC_DECLARE(0x5594b0, internal_5594b0, public_5594b0);
extern "C" NAKED register_t __cdecl internal_5594b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c157b @0x5594b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c157b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_5e14a4
        xor ebp, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        xor edi, edi
        lea esi, ds:[ebx+0x20]
        public_5594e1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_559506
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jae public_559506
        mov eax, dword ptr ds : [ebx+0x24]
        lea ecx, ds:[eax+edi*4]
        push ecx
        call public_41b030
        add esp, 4
        inc edi
        jmp public_5594e1
        public_559506 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        push eax
        call public_527820
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        mov edi, eax
        push edx
        push edi
        mov ecx, esi
        call public_53aaa0
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [public_679a14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_559564
        public_559534 : nop
        cmp dword ptr ds : [eax+8], ebx
        je public_559541
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_559534
        jmp public_559564
        public_559541 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_679a18]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_679a18], eax
        public_559564 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5594b0)
    }
}

#undef public_5594e1
#undef public_559506
#undef public_559534
#undef public_559541
#undef public_559564
