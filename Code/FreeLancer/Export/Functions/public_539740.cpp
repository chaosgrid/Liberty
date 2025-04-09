#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a890);
CLANG_FORWARD_PROC_SYMBOL(public_536100);
CLANG_FORWARD_PROC_SYMBOL(public_539740);

#define public_539780 _public_539780
#define public_5397b9 _public_5397b9
#define public_5397e5 _public_5397e5

PROC_DECLARE(0x539740, internal_539740, public_539740);
extern "C" NAKED register_t __cdecl internal_539740()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ds : [public_5c6590]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x10]
        call ebp
        mov esi, eax
        add esi, 0x24
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5397b9
        push esi
        call dword ptr ds : [public_5c63c8]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0x40], eax
        je public_539780
        push eax
        call public_536100
        add esp, 4
        jmp public_5397b9
        mov edi, edi
        public_539780 : nop
        mov ecx, esi
        mov esi, dword ptr ds : [public_5c6044]
        push ebx
        mov ebx, 0x100002
        call esi
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        call ebp
        mov ecx, eax
        add ecx, 8
        call esi
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x85
/*FIXUP push offset public_5debc4 @0x5397a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5debc4
/*FIXUP push offset public_5deb80 @0x5397ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5deb80
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x18
        pop ebx
        public_5397b9 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        test dword ptr ss : [esp+0xC], 0x107FFDFF
        je public_5397e5
        mov al, byte ptr ds : [edi+0xA8]
        test al, al
        je public_5397e5
        push edi
        call public_45a890
        add esp, 4
        public_5397e5 : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x539740)
    }
}

#undef public_539780
#undef public_5397b9
#undef public_5397e5
