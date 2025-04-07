#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63277f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6327d74 _public_6327d74
#define public_6327dbb _public_6327dbb
#define public_6327e0b _public_6327e0b
#define public_6327e30 _public_6327e30

PROC_DECLARE(0x6327d50, internal_6327d50, public_6327d50);
extern "C" NAKED register_t __cdecl internal_6327d50()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        lea esi, ds:[eax*8]
        imul esi, 0x7C
        mov eax, offset public_63ed608
        push edi
        mov dword ptr ss : [esp+0x20], eax
        add esi, offset public_64019a8
        public_6327d74 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+4]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        lea edi, ds:[esi-0x40]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call public_63277f0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6327dbb
        push eax
        call dword ptr ds : [public_639907c]
        mov dword ptr ds : [esi], 0
        public_6327dbb : nop
        fild dword ptr ds : [esi-4]
        lea ebx, ds:[esi+4]
        fmul dword ptr ss : [esp+0x28]
        call public_6391dae
        push edi
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_6399090]
        test eax, eax
        mov dword ptr ds : [esi], eax
        je public_6327e0b
        push 0
        call dword ptr ds : [public_639908c]
        mov ecx, dword ptr ds : [esi]
        mov edi, eax
        push ecx
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
        jne public_6327e30
        public_6327e0b : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a45b8 @0x6327e11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a45b8
        push 0x48E
/*FIXUP push offset public_63a4588 @0x6327e1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4588
        mov eax, 0x100003
/*FIXUP push offset public_63a456c @0x6327e25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a456c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6327e30 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add eax, 0xC
        add esi, 0x7C
        cmp eax, offset public_63ed668
        mov dword ptr ss : [esp+0x20], eax
        jl public_6327d74
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6327d50)
    }
}

#undef public_6327d74
#undef public_6327dbb
#undef public_6327e0b
#undef public_6327e30
