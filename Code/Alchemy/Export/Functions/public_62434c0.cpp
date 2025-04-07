#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212e00);
CLANG_FORWARD_PROC_SYMBOL(public_62144a0);
CLANG_FORWARD_PROC_SYMBOL(public_62434c0);
CLANG_FORWARD_PROC_SYMBOL(public_6243c40);
CLANG_FORWARD_PROC_SYMBOL(public_6243d30);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_PROC_SYMBOL(public_62463e2);
CLANG_FORWARD_JUMP_SYMBOL(public_624a8e7);

#define public_6243519 _public_6243519
#define public_624352d _public_624352d
#define public_6243564 _public_6243564
#define public_6243566 _public_6243566
#define public_6243591 _public_6243591
#define public_62435dc _public_62435dc
#define public_6243626 _public_6243626
#define public_6243628 _public_6243628

PROC_DECLARE(0x62434c0, internal_62434c0, public_62434c0);
extern "C" NAKED register_t __cdecl internal_62434c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a8e7 @0x62434c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a8e7
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
        mov esi, ecx
/*FIXUP push offset _public_62084b0 @0x62434de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62084b0
/*FIXUP push offset _public_6243c40 @0x62434e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6243c40
        push 9
        lea ebp, ds:[esi+0xC]
        push 4
        push ebp
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [esi], offset public_624fb44
        mov dword ptr ds : [esi+4], 0x435
        call public_62463e2
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ds : [esi], offset public_624fb10
        mov ebx, offset public_62575e8
        public_6243519 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_624352d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp], 0
        public_624352d : nop
        mov edx, dword ptr ds : [ebx]
        push 0x20
        mov dword ptr ss : [esp+0x18], edx
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov byte ptr ss : [esp+0x28], 1
        je public_6243564
        mov ecx, esi
        call public_6212e00
        mov dword ptr ds : [esi], offset public_624bac8
        mov dword ptr ds : [esi+0x1C], 1
        mov edi, esi
        jmp public_6243566
        public_6243564 : nop
        xor edi, edi
        public_6243566 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x18], esi
        push 0x10
        mov byte ptr ss : [esp+0x2C], 2
        call public_624612c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, esi
        mov byte ptr ss : [esp+0x28], 3
        je public_6243591
        mov ecx, eax
        call public_62144a0
        mov esi, eax
        public_6243591 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        mov byte ptr ss : [esp+0x30], 2
        call dword ptr ds : [eax+0x18]
        mov edx, dword ptr ds : [edi]
        push esi
        push 0
        push edi
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [edx+0x14]
        mov dword ptr ss : [ebp], edi
        mov eax, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [eax+8]
        add ebx, 4
        add ebp, 4
        cmp ebx, offset public_625760c
        jl public_6243519
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, offset public_62575e8
        mov bl, 5
        lea ebp, ds:[ecx+0xC]
        public_62435dc : nop
        mov eax, dword ptr ss : [ebp]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [edi]
        push 0x10
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [esp+0x1C], eax
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov byte ptr ss : [esp+0x28], bl
        je public_6243626
        mov ecx, esi
        call public_6243d30
        mov dword ptr ds : [esi], offset public_624bca0
        mov dword ptr ds : [esi+0xC], 1
        jmp public_6243628
        public_6243626 : nop
        xor esi, esi
        public_6243628 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov byte ptr ss : [esp+0x30], 4
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [ebp]
        push esi
        push 0
        push eax
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [edx+8]
        add edi, 4
        add ebp, 4
        cmp edi, offset public_625760c
        jl public_62435dc
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [eax+8], 0x1FF
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62434c0)
    }
}

#undef public_6243519
#undef public_624352d
#undef public_6243564
#undef public_6243566
#undef public_6243591
#undef public_62435dc
#undef public_6243626
#undef public_6243628
