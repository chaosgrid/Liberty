#include "DALib-PCH.h"


#define public_65c58e4 _public_65c58e4
#define public_65c590a _public_65c590a

PROC_DECLARE(0x65c5840, internal_65c5840, public_65c5840);
extern "C" NAKED register_t __cdecl internal_65c5840()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        lea edi, ds:[esi+0xC]
        push ebp
        mov dword ptr ds : [esi], offset public_65c7570
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+8], bl
        call dword ptr ds : [public_65c7088]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x24], ebx
        call dword ptr ds : [public_65c703c]
        cmp eax, ebx
        mov dword ptr ds : [esi+4], eax
        je public_65c590a
/*FIXUP push offset public_65c755c @0x65c588f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c755c
        push eax
        call dword ptr ds : [public_65c7038]
        cmp eax, ebx
        je public_65c590a
        lea edx, ss:[esp+0x1C]
        push edx
/*FIXUP push offset public_65c7610 @0x65c58a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7610
/*FIXUP push offset public_65ca034 @0x65c58a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca034
        mov dword ptr ss : [esp+0x28], ebx
        call eax
        test eax, eax
        jne public_65c590a
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edi
/*FIXUP push offset public_65ca024 @0x65c58bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca024
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_65c590a
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, ebx
        jne public_65c58e4
        mov ecx, offset public_65c7558
        public_65c58e4 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_65c7548 @0x65c58e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7548
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_65c590a
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi]
        push eax
        push ebp
        push edi
        call dword ptr ds : [edx+0x10]
        public_65c590a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x65c5840)
    }
}

#undef public_65c58e4
#undef public_65c590a
