#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4f10);

#define public_4b4f70 _public_4b4f70
#define public_4b4f9d _public_4b4f9d
#define public_4b4fa4 _public_4b4fa4
#define public_4b4fc6 _public_4b4fc6

PROC_DECLARE(0x4b4f10, internal_4b4f10, public_4b4f10);
extern "C" NAKED register_t __cdecl internal_4b4f10()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
/*FIXUP push offset public_5d5440 @0x4b4f16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5440
        mov dword ptr ds : [esi+0x70], 0xA
        mov dword ptr ds : [esi+0x164], ebx
        mov dword ptr ds : [esi+0x17C], ebx
        mov dword ptr ds : [esi+0x180], ebx
        mov dword ptr ds : [esi+0x184], 0xBF028F5C
        mov dword ptr ds : [esi+0x188], 0x3E4CCCCD
        mov byte ptr ds : [esi+0x178], bl
        call public_4177b0
        mov ecx, dword ptr ds : [esi+0x98]
        add esp, 4
        cmp ecx, eax
        je public_4b4fa4
        push edi
        mov dword ptr ds : [esi+0x98], eax
        xor edi, edi
        lea esp, ss:[esp]
        public_4b4f70 : nop
        mov ecx, dword ptr ds : [esi+0x8C]
        cmp ecx, ebx
        je public_4b4f9d
        mov eax, dword ptr ds : [esi+0x90]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_4b4f9d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+edi*8]
        mov eax, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_4b4f70
        public_4b4f9d : nop
        mov dword ptr ds : [esi+0xA4], ebx
        pop edi
        public_4b4fa4 : nop
        mov dword ptr ds : [esi+0x84], 4
        mov cl, byte ptr ds : [esi+0xAC]
        mov al, 1
        cmp cl, al
        je public_4b4fc6
        mov byte ptr ds : [esi+0xAC], al
        mov dword ptr ds : [esi+0xA4], ebx
        public_4b4fc6 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4b4f10)
    }
}

#undef public_4b4f70
#undef public_4b4f9d
#undef public_4b4fa4
#undef public_4b4fc6
