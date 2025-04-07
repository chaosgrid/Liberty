#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ab90);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

#define public_40ab50 _public_40ab50
#define public_40ab60 _public_40ab60
#define public_40ab72 _public_40ab72

PROC_DECLARE(0x40aaf0, internal_40aaf0, public_40aaf0);
extern "C" NAKED register_t __cdecl internal_40aaf0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
/*FIXUP push offset public_425f48 @0x40aaf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425f48
        mov byte ptr ds : [public_4277ec], al
        mov dword ptr ds : [public_4277f0], 0
        mov dword ptr ds : [public_4277f4], 0
        mov dword ptr ds : [public_4277f8], 0
        call dword ptr ds : [public_41b8f4]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        mov ecx, offset public_4277ec
        call dword ptr ds : [public_41b878]
        test al, al
        je public_40ab72
        test esi, esi
        mov eax, dword ptr ds : [public_4277f0]
        mov ecx, offset public_425f48
        jbe public_40ab60
        mov edx, esi
        push ebx
        lea esp, ss:[esp]
        public_40ab50 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_40ab50
        pop ebx
        public_40ab60 : nop
        mov ecx, dword ptr ds : [public_4277f0]
        mov dword ptr ds : [public_4277f4], esi
        mov word ptr ds : [ecx+esi*2], 0
/*FIXUP public_40ab72 : nop
        push offset _public_40ab90 @0x40ab72*/
  FIXUP public_40ab72 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40ab90
        call public_419410
        add esp, 4
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x40aaf0)
    }
}

#undef public_40ab50
#undef public_40ab60
#undef public_40ab72
