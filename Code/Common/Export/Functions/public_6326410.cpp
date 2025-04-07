#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63277f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6326427 _public_6326427
#define public_6326430 _public_6326430
#define public_6326437 _public_6326437
#define public_632644c _public_632644c
#define public_6326469 _public_6326469
#define public_6326470 _public_6326470
#define public_63264b7 _public_63264b7
#define public_632650b _public_632650b
#define public_632652f _public_632652f

PROC_DECLARE(0x6326410, internal_6326410, public_6326410);
extern "C" NAKED register_t __cdecl internal_6326410()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, offset public_6409588
        mov dword ptr ss : [esp+0x10], edi
        mov esi, offset public_64019a8
        jmp public_6326430
        public_6326427 : nop
        mov edi, dword ptr ss : [esp+0x10]
        nop 
        lea esp, ss:[esp]
        public_6326430 : nop
        mov ebp, esi
        mov ebx, 8
        public_6326437 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_632644c
        push eax
        call dword ptr ds : [public_639907c]
        mov dword ptr ss : [ebp], 0
        public_632644c : nop
        add ebp, 0x7C
        dec ebx
        jne public_6326437
        mov eax, dword ptr ds : [public_63ed668]
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], offset public_63ed608
        jmp public_6326470
        public_6326469 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6326470 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x20]
        lea edi, ds:[esi-0x40]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        call public_63277f0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_63264b7
        push eax
        call dword ptr ds : [public_639907c]
        mov dword ptr ds : [esi], 0
        public_63264b7 : nop
        fild dword ptr ds : [esi-4]
        lea ebx, ds:[esi+4]
        fmul dword ptr ss : [esp+0x1C]
        call public_6391dae
        push edi
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_6399090]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_632650b
        push 0
        call dword ptr ds : [public_639908c]
        mov edx, dword ptr ds : [esi]
        mov edi, eax
        push edx
        push edi
        call dword ptr ds : [public_6399088]
        push ebx
        push edi
        mov ebp, eax
        call dword ptr ds : [public_6399084]
        push ebp
        push edi
        call dword ptr ds : [public_6399088]
        push edi
        call dword ptr ds : [public_6399080]
        cmp dword ptr ds : [esi], 0
        mov ebp, dword ptr ss : [esp+0x18]
        jne public_632652f
/*FIXUP public_632650b : nop
        push offset public_63a45b8 @0x632650b*/
  FIXUP public_632650b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a45b8
        push 0x48E
/*FIXUP push offset public_63a4588 @0x6326515*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100003
/*FIXUP push offset public_63a456c @0x632651f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a456c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_632652f : nop
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0xC
        add esi, 0x7C
        cmp eax, offset public_63ed668
        mov dword ptr ss : [esp+0x14], eax
        jl public_6326469
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 0x8C
        cmp ebp, offset public_64095a8
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, ebp
        jl public_6326427
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6326410)
    }
}

#undef public_6326427
#undef public_6326430
#undef public_6326437
#undef public_632644c
#undef public_6326469
#undef public_6326470
#undef public_63264b7
#undef public_632650b
#undef public_632652f
