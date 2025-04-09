#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c1a10);

#define public_4c1a3b _public_4c1a3b
#define public_4c1a47 _public_4c1a47
#define public_4c1a90 _public_4c1a90
#define public_4c1ab1 _public_4c1ab1
#define public_4c1ab5 _public_4c1ab5

PROC_DECLARE(0x4c1a10, internal_4c1a10, public_4c1a10);
extern "C" NAKED register_t __cdecl internal_4c1a10()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x34C]
        test eax, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x94]
        je public_4c1a47
        mov ecx, dword ptr ds : [eax+0x65C]
        cmp edi, ecx
        jle public_4c1a3b
        mov edi, ecx
        jmp public_4c1a47
        public_4c1a3b : nop
        mov eax, dword ptr ds : [eax+0x658]
        cmp edi, eax
        jge public_4c1a47
        mov edi, eax
        public_4c1a47 : nop
        push edi
        lea eax, ss:[esp+0x14]
/*FIXUP push offset public_5d0ec4 @0x4c1a4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push eax
        call dword ptr ds : [public_5c70ec]
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_5c71c8]
        mov ecx, eax
        mov eax, 0x55555556
        imul ecx
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, ecx
        xor esi, esi
        lea eax, ss:[esp+edx*2+0x60]
        add esp, 0x10
        test ecx, ecx
        lea edx, ss:[esp+ecx*2+0xE]
        mov word ptr ds : [eax], si
        je public_4c1ab5
        lea esp, ss:[esp]
        public_4c1a90 : nop
        mov bp, word ptr ds : [edx]
        sub eax, 2
        dec ecx
        inc esi
        sub edx, 2
        cmp esi, 3
        mov word ptr ds : [eax], bp
        jne public_4c1ab1
        test ecx, ecx
        je public_4c1ab5
        sub eax, 2
        mov word ptr ds : [eax], 0x2C
        xor esi, esi
        public_4c1ab1 : nop
        test ecx, ecx
        jne public_4c1a90
        public_4c1ab5 : nop
        mov ecx, dword ptr ds : [ebx+0x35C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ds : [ebx+0x364], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x4c1a10)
    }
}

#undef public_4c1a3b
#undef public_4c1a47
#undef public_4c1a90
#undef public_4c1ab1
#undef public_4c1ab5
