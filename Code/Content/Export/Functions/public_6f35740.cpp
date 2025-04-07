#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f35740);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);

#define public_6f35770 _public_6f35770
#define public_6f35778 _public_6f35778
#define public_6f35796 _public_6f35796
#define public_6f357a1 _public_6f357a1
#define public_6f357a3 _public_6f357a3
#define public_6f357a7 _public_6f357a7
#define public_6f357b3 _public_6f357b3
#define public_6f357b8 _public_6f357b8
#define public_6f357c4 _public_6f357c4

PROC_DECLARE(0x6f35740, internal_6f35740, public_6f35740);
extern "C" NAKED register_t __cdecl internal_6f35740()
{
    __asm
    {
        push ecx
        push ebx
        lea eax, ss:[esp+0xC]
        push edi
        push eax
        mov byte ptr ss : [esp+0xF], 0
        call public_6f50650
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_6f357c4
        mov edi, dword ptr ds : [ebx+0x4C]
        cmp edi, dword ptr ds : [ebx+0x50]
        je public_6f357c4
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        lea esp, ss:[esp]
        public_6f35770 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6f357b8
/*FIXUP public_6f35778 : nop
        push offset public_6fd0830 @0x6f35778*/
  FIXUP public_6f35778 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push edi
        call public_6f32480
        add esp, 8
        test eax, eax
        je public_6f357a7
        mov ecx, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax+0x1C]
        cmp ecx, eax
        je public_6f357a1
        mov edx, dword ptr ds : [esi]
        public_6f35796 : nop
        cmp dword ptr ds : [ecx], edx
        je public_6f357a3
        add ecx, 4
        cmp ecx, eax
        jne public_6f35796
        public_6f357a1 : nop
        mov ecx, eax
        public_6f357a3 : nop
        cmp ecx, eax
        jne public_6f357b3
        public_6f357a7 : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 4
        cmp esi, eax
        jne public_6f35778
        jmp public_6f357b8
        public_6f357b3 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6f357b8 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        add edi, 4
        cmp edi, eax
        jne public_6f35770
        pop esi
        pop ebp
        public_6f357c4 : nop
        mov al, byte ptr ss : [esp+0xB]
        pop edi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f35740)
    }
}

#undef public_6f35770
#undef public_6f35778
#undef public_6f35796
#undef public_6f357a1
#undef public_6f357a3
#undef public_6f357a7
#undef public_6f357b3
#undef public_6f357b8
#undef public_6f357c4
